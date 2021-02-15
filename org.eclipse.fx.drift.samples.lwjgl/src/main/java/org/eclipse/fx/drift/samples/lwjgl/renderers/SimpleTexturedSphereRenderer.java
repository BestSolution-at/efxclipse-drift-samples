/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 */
package org.eclipse.fx.drift.samples.lwjgl.renderers;

import static org.lwjgl.demo.opengl.util.DemoUtils.*;
import static org.lwjgl.demo.util.IOUtils.*;
import static org.lwjgl.opengl.GL32C.*;
import static org.lwjgl.stb.STBImage.*;
import static org.lwjgl.system.MemoryUtil.*;

import java.io.*;
import java.lang.Math;
import java.nio.*;

import org.eclipse.fx.drift.RenderTarget;
import org.eclipse.fx.drift.Vec2i;
import org.eclipse.fx.drift.samples.ISampleRenderer;
import org.eclipse.fx.drift.samples.lwjgl.FBO;
import org.joml.*;
import org.lwjgl.opengl.*;
import org.lwjgl.system.*;
import org.osgi.service.component.annotations.Component;

/**
 * Renders a simple textured sphere using OpenGL 4.0 Core Profile.
 * 
 * @author Kai Burjack
 */
@Component(xmlns = "http://www.osgi.org/xmlns/scr/v1.3.0")
public class SimpleTexturedSphereRenderer implements ISampleRenderer {

    static final int rings = 80;
    static final int sectors = 80;

    long window;
    int width = 1024;
    int height = 768;

    int vao;
    int sphereProgram;
    int sphereProgram_inputPosition;
    int sphereProgram_inputTextureCoords;
    int sphereProgram_matrixUniform;

    Matrix4f m = new Matrix4f();
    FloatBuffer matrixBuffer = MemoryUtil.memAllocFloat(16);
    float time;

    GLCapabilities caps;
    Callback debugProc;
    
    private FBO fbo = new FBO();
    long ctx;
    
    @Override
    public String toString() {
    	return "lwjgl - SimpleTexturedSphere";
    }

    @Override
    public void initialize() throws Exception {
    	// create a GL context
		ctx = org.eclipse.fx.drift.internal.GL.createContext(0, 3, 2);
    	org.eclipse.fx.drift.internal.GL.makeContextCurrent(ctx);
    	
        caps = GL.createCapabilities();
        debugProc = GLUtil.setupDebugMessageCallback();

        createTexture();
        createQuadProgram();
        createSphere();
        
        glClearColor(0.02f, 0.03f, 0.04f, 1.0f);
        glEnable(GL_DEPTH_TEST);
        glEnable(GL_CULL_FACE);
        
        fbo.initialize();
    }
    
    long lastTime = System.nanoTime();
	private static int textureId;
    @Override
    public void render(Vec2i size, RenderTarget target) {
    	width = size.x;
    	height = size.y;
    	
    	
    	
    	
        glViewport(0, 0, width, height);
        long thisTime = System.nanoTime();
        float elapsedTime = (thisTime - lastTime) * 1E-9f;
        lastTime = thisTime;
        update(elapsedTime);
        
        fbo.updateFBO(size, target);
        fbo.bind();
        render();
        fbo.unbind();
    	
    }
    
    @Override
    public void dispose() throws Exception {
    	glDeleteVertexArrays(vao);
    	glDeleteProgram(sphereProgram);
    	glDeleteTextures(textureId);
    	fbo.dispose();
    	
    	/* Free memory resources */
        if (debugProc != null)
            debugProc.free();
        GL.setCapabilities(null);
        MemoryUtil.memFree(matrixBuffer);
        org.eclipse.fx.drift.internal.GL.destroyContext(ctx);
    }

    void createQuadProgram() throws IOException {
        int program = glCreateProgram();
        int vshader = createShader("org/lwjgl/demo/opengl/textures/texturedSphere.vs", GL_VERTEX_SHADER);
        int fshader = createShader("org/lwjgl/demo/opengl/textures/texturedSphere.fs", GL_FRAGMENT_SHADER);
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
        sphereProgram_matrixUniform = glGetUniformLocation(program, "matrix");
        sphereProgram_inputPosition = glGetAttribLocation(program, "position");
        sphereProgram_inputTextureCoords = glGetAttribLocation(program, "texCoords");
        glUseProgram(0);
        this.sphereProgram = program;
    }

    void createSphere() {
        vao = glGenVertexArrays();
        glBindVertexArray(vao);
        int vbo = glGenBuffers();
        /* Generate vertex buffer */
        float PI = (float) Math.PI;
        float R = 1f / (rings - 1);
        float S = 1f / (sectors - 1);
        FloatBuffer fb = MemoryUtil.memAllocFloat(rings * sectors * (3 + 2));
        for (int r = 0; r < rings; r++) {
            for (int s = 0; s < sectors; s++) {
                float x = (float) (Math.cos(2 * PI * s * S) * Math.sin(PI * r * R));
                float y = (float) Math.sin(-PI / 2 + PI * r * R);
                float z = (float) (Math.sin(2 * PI * s * S) * Math.sin(PI * r * R));
                fb.put(x).put(y).put(z);
                fb.put(1.0f - s * S).put(1.0f - r * R);
            }
        }
        fb.flip();
        glBindBuffer(GL_ARRAY_BUFFER, vbo);
        glBufferData(GL_ARRAY_BUFFER, fb, GL_STATIC_DRAW);
        MemoryUtil.memFree(fb);
        glVertexAttribPointer(sphereProgram_inputPosition, 3, GL_FLOAT, false, (3 + 2) * 4, 0L);
        glEnableVertexAttribArray(sphereProgram_inputPosition);
        glVertexAttribPointer(sphereProgram_inputTextureCoords, 2, GL_FLOAT, false, (3 + 2) * 4, 3 * 4L);
        glEnableVertexAttribArray(sphereProgram_inputTextureCoords);
        /* Generate index/element buffer */
        int ibo = glGenBuffers();
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ibo);
        IntBuffer ib = MemoryUtil.memAllocInt((rings - 1) * (sectors - 1) * 6);
        for (int r = 0; r < rings - 1; r++) {
            for (int s = 0; s < sectors - 1; s++) {
                ib.put(r * sectors + s).put((r + 1) * sectors + s).put((r + 1) * sectors + s + 1);
                ib.put((r + 1) * sectors + s + 1).put(r * sectors + s + 1).put(r * sectors + s);
            }
        }
        ib.flip();
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, ib, GL_STATIC_DRAW);
        glBindBuffer(GL_ARRAY_BUFFER, 0);
        MemoryUtil.memFree(ib);
        glBindVertexArray(0);
    }

    static void createTexture() throws IOException {
        try (MemoryStack frame = MemoryStack.stackPush()) {
            IntBuffer width = frame.mallocInt(1);
            IntBuffer height = frame.mallocInt(1);
            IntBuffer components = frame.mallocInt(1);
            ByteBuffer data = stbi_load_from_memory(
                    ioResourceToByteBuffer("org/lwjgl/demo/opengl/textures/earth.jpg", 1024), width, height, components,
                    4);
            textureId = glGenTextures();
            glBindTexture(GL_TEXTURE_2D, textureId);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width.get(), height.get(), 0, GL_RGBA, GL_UNSIGNED_BYTE, data);
            stbi_image_free(data);
        }
    }

    void update(float elapsedTime) {
        time += elapsedTime;
        m.setPerspective((float) Math.toRadians(45), (float) width / height, 0.1f, 10.0f)
         .lookAt(0, 1, 3,
                 0, 0, 0,
                 0, 1, 0)
         .rotateY(time * 0.2f);
    }

    void render() {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glBindTexture(GL_TEXTURE_2D, textureId);
        glUseProgram(sphereProgram);
        glUniformMatrix4fv(sphereProgram_matrixUniform, false, m.get(matrixBuffer));
        glBindVertexArray(vao);
        glDrawElements(GL_TRIANGLES, (rings - 1) * (sectors - 1) * 6, GL_UNSIGNED_INT, 0L);
        glBindVertexArray(0);
        glUseProgram(0);
    }


}