/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 */
package org.eclipse.fx.drift.samples.lwjgl.renderers;

import org.eclipse.fx.drift.RenderTarget;
import org.eclipse.fx.drift.Vec2i;
import org.eclipse.fx.drift.samples.ISampleRenderer;
import org.eclipse.fx.drift.samples.SamplePlayerApp;
import org.eclipse.fx.drift.samples.lwjgl.FBO;
import org.lwjgl.BufferUtils;
import org.lwjgl.opengl.GL;
import org.lwjgl.opengl.GLCapabilities;
import org.lwjgl.opengl.GLUtil;
import org.lwjgl.system.*;
import org.osgi.service.component.annotations.Component;

import javafx.application.Application;

import java.io.IOException;
import java.nio.ByteBuffer;
import java.nio.FloatBuffer;
import java.nio.IntBuffer;

import static org.lwjgl.demo.opengl.util.DemoUtils.*;
import static org.lwjgl.demo.util.IOUtils.*;
import static org.lwjgl.opengl.GL11C.glDeleteTextures;
import static org.lwjgl.opengl.GL30C.*;
import static org.lwjgl.stb.STBImage.*;
import static org.lwjgl.system.MemoryUtil.*;

/**
 * Renders a simple textured quad using OpenGL 3.0.
 * 
 * @author Kai Burjack
 */
@Component(xmlns = "http://www.osgi.org/xmlns/scr/v1.3.0")
public class SimpleTexturedQuadRenderer implements ISampleRenderer {

    long window;
    int width = 1024;
    int height = 768;

    int vao;
    int quadProgram;
    int quadProgram_inputPosition;
    int quadProgram_inputTextureCoords;

    GLCapabilities caps;
    Callback debugProc;
    
    private FBO fbo = new FBO();
    long ctx;
	private static int textureId;

    @Override
    public String toString() {
    	return "lwjgl - SimpleTexturedQuad";
    }
    
    @Override
    public void initialize() throws Exception {
    	ctx = org.eclipse.fx.drift.internal.GL.createContext(0, 3, 0);
    	org.eclipse.fx.drift.internal.GL.makeContextCurrent(ctx);
    	
    	caps = GL.createCapabilities();
        debugProc = GLUtil.setupDebugMessageCallback();
        createTexture();
        createQuadProgram();
        createFullScreenQuad();
        
        fbo.initialize();
    }
    
    @Override
    public void render(Vec2i size, RenderTarget target) {
    	width = size.x;
    	height = size.y;
    	
    	fbo.updateFBO(size, target);
    	fbo.bind();
    	glViewport(0, 0, width, height);
        render();
        fbo.unbind();
    }
    
    @Override
    public void dispose() throws Exception {
    	glDeleteVertexArrays(vao);
    	glDeleteProgram(quadProgram);
    	glDeleteTextures(textureId);
    	fbo.dispose();
    	
        if (debugProc != null)
            debugProc.free();
        GL.setCapabilities(null);
    	org.eclipse.fx.drift.internal.GL.destroyContext(ctx);
    }
    
    void createQuadProgram() throws IOException {
        int program = glCreateProgram();
        int vshader = createShader("org/lwjgl/demo/opengl/textures/texturedQuad.vs", GL_VERTEX_SHADER);
        int fshader = createShader("org/lwjgl/demo/opengl/textures/texturedQuad.fs", GL_FRAGMENT_SHADER);
        glAttachShader(program, vshader);
        glAttachShader(program, fshader);
        glLinkProgram(program);
        int linked = glGetProgrami(program, GL_LINK_STATUS);
        String programLog = glGetProgramInfoLog(program);
        if (programLog.trim().length() > 0)
            System.err.println(programLog);
        if (linked == 0)
            throw new AssertionError("Could not link program");
        glUseProgram(program);
        int texLocation = glGetUniformLocation(program, "tex");
        glUniform1i(texLocation, 0);
        quadProgram_inputPosition = glGetAttribLocation(program, "position");
        quadProgram_inputTextureCoords = glGetAttribLocation(program, "texCoords");
        glUseProgram(0);
        this.quadProgram = program;
    }

    void createFullScreenQuad() {
        vao = glGenVertexArrays();
        glBindVertexArray(vao);
        int positionVbo = glGenBuffers();
        FloatBuffer fb = BufferUtils.createFloatBuffer(2 * 6);
        fb.put(-1.0f).put(-1.0f);
        fb.put(1.0f).put(-1.0f);
        fb.put(1.0f).put(1.0f);
        fb.put(1.0f).put(1.0f);
        fb.put(-1.0f).put(1.0f);
        fb.put(-1.0f).put(-1.0f);
        fb.flip();
        glBindBuffer(GL_ARRAY_BUFFER, positionVbo);
        glBufferData(GL_ARRAY_BUFFER, fb, GL_STATIC_DRAW);
        glVertexAttribPointer(quadProgram_inputPosition, 2, GL_FLOAT, false, 0, 0L);
        glEnableVertexAttribArray(quadProgram_inputPosition);
        int texCoordsVbo = glGenBuffers();
        fb = BufferUtils.createFloatBuffer(2 * 6);
        fb.put(0.0f).put(1.0f);
        fb.put(1.0f).put(1.0f);
        fb.put(1.0f).put(0.0f);
        fb.put(1.0f).put(0.0f);
        fb.put(0.0f).put(0.0f);
        fb.put(0.0f).put(1.0f);
        fb.flip();
        glBindBuffer(GL_ARRAY_BUFFER, texCoordsVbo);
        glBufferData(GL_ARRAY_BUFFER, fb, GL_STATIC_DRAW);
        glVertexAttribPointer(quadProgram_inputTextureCoords, 2, GL_FLOAT, true, 0, 0L);
        glEnableVertexAttribArray(quadProgram_inputTextureCoords);
        glBindBuffer(GL_ARRAY_BUFFER, 0);
        glBindVertexArray(0);
    }

    static void createTexture() throws IOException {
        IntBuffer width = BufferUtils.createIntBuffer(1);
        IntBuffer height = BufferUtils.createIntBuffer(1);
        IntBuffer components = BufferUtils.createIntBuffer(1);
        ByteBuffer data = stbi_load_from_memory(ioResourceToByteBuffer("org/lwjgl/demo/opengl/textures/environment.jpg", 1024), width, height, components, 4);
        textureId = glGenTextures();
        glBindTexture(GL_TEXTURE_2D, textureId);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width.get(), height.get(), 0, GL_RGBA, GL_UNSIGNED_BYTE, data);
        stbi_image_free(data);
    }

    void render() {
        glClear(GL_COLOR_BUFFER_BIT);
        glBindTexture(GL_TEXTURE_2D, textureId);
        glUseProgram(quadProgram);
        glBindVertexArray(vao);
        glDrawArrays(GL_TRIANGLES, 0, 6);
        glBindVertexArray(0);
        glUseProgram(0);
    }

    public static void main(String[] args) {
		Application.launch(SamplePlayerApp.class, "--renderer=" + SimpleTexturedQuadRenderer.class.getName());
	}
    
}