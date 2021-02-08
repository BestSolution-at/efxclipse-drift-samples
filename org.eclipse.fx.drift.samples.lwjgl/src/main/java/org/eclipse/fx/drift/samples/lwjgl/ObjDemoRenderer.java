package org.eclipse.fx.drift.samples.lwjgl;

import static org.eclipse.fx.drift.samples.lwjgl.IOUtil.ioResourceToByteBuffer;
import static org.lwjgl.opengl.ARBFragmentShader.GL_FRAGMENT_SHADER_ARB;
import static org.lwjgl.opengl.ARBShaderObjects.GL_OBJECT_COMPILE_STATUS_ARB;
import static org.lwjgl.opengl.ARBShaderObjects.GL_OBJECT_LINK_STATUS_ARB;
import static org.lwjgl.opengl.ARBShaderObjects.glAttachObjectARB;
import static org.lwjgl.opengl.ARBShaderObjects.glCompileShaderARB;
import static org.lwjgl.opengl.ARBShaderObjects.glCreateProgramObjectARB;
import static org.lwjgl.opengl.ARBShaderObjects.glCreateShaderObjectARB;
import static org.lwjgl.opengl.ARBShaderObjects.glGetInfoLogARB;
import static org.lwjgl.opengl.ARBShaderObjects.glGetObjectParameteriARB;
import static org.lwjgl.opengl.ARBShaderObjects.glGetUniformLocationARB;
import static org.lwjgl.opengl.ARBShaderObjects.glLinkProgramARB;
import static org.lwjgl.opengl.ARBShaderObjects.glShaderSourceARB;
import static org.lwjgl.opengl.ARBShaderObjects.glUniform3fvARB;
import static org.lwjgl.opengl.ARBShaderObjects.glUniformMatrix3fvARB;
import static org.lwjgl.opengl.ARBShaderObjects.glUniformMatrix4fvARB;
import static org.lwjgl.opengl.ARBShaderObjects.glUseProgramObjectARB;
import static org.lwjgl.opengl.ARBShaderObjects.nglUniform3fvARB;
import static org.lwjgl.opengl.ARBVertexBufferObject.GL_ARRAY_BUFFER_ARB;
import static org.lwjgl.opengl.ARBVertexBufferObject.GL_ELEMENT_ARRAY_BUFFER_ARB;
import static org.lwjgl.opengl.ARBVertexBufferObject.glBindBufferARB;
import static org.lwjgl.opengl.ARBVertexShader.GL_VERTEX_SHADER_ARB;
import static org.lwjgl.opengl.ARBVertexShader.glEnableVertexAttribArrayARB;
import static org.lwjgl.opengl.ARBVertexShader.glGetAttribLocationARB;
import static org.lwjgl.opengl.ARBVertexShader.glVertexAttribPointerARB;
import static org.lwjgl.opengl.GL11.GL_COLOR_BUFFER_BIT;
import static org.lwjgl.opengl.GL11.GL_DEPTH_BUFFER_BIT;
import static org.lwjgl.opengl.GL11.GL_DEPTH_COMPONENT;
import static org.lwjgl.opengl.GL11.GL_DEPTH_TEST;
import static org.lwjgl.opengl.GL11.GL_FLOAT;
import static org.lwjgl.opengl.GL11.GL_TEXTURE_2D;
import static org.lwjgl.opengl.GL11.GL_TRIANGLES;
import static org.lwjgl.opengl.GL11.GL_UNSIGNED_INT;
import static org.lwjgl.opengl.GL11.glBindTexture;
import static org.lwjgl.opengl.GL11.glClear;
import static org.lwjgl.opengl.GL11.glClearColor;
import static org.lwjgl.opengl.GL11.glDeleteTextures;
import static org.lwjgl.opengl.GL11.glDrawElements;
import static org.lwjgl.opengl.GL11.glEnable;
import static org.lwjgl.opengl.GL11.glGenTextures;
import static org.lwjgl.opengl.GL11.glTexImage2D;
import static org.lwjgl.opengl.GL11.glViewport;
import static org.lwjgl.opengl.GL20.glDeleteProgram;
import static org.lwjgl.opengl.GL30.GL_COLOR_ATTACHMENT0;
import static org.lwjgl.opengl.GL30.GL_DEPTH_ATTACHMENT;
import static org.lwjgl.opengl.GL30.GL_DEPTH_COMPONENT32F;
import static org.lwjgl.opengl.GL30.GL_FRAMEBUFFER;
import static org.lwjgl.opengl.GL30.GL_FRAMEBUFFER_COMPLETE;
import static org.lwjgl.opengl.GL30.GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
import static org.lwjgl.opengl.GL30.glBindFramebuffer;
import static org.lwjgl.opengl.GL30.glCheckFramebufferStatus;
import static org.lwjgl.opengl.GL30.glDeleteFramebuffers;
import static org.lwjgl.opengl.GL30.glGenFramebuffers;
import static org.lwjgl.opengl.GL32.glFramebufferTexture;

import java.io.IOException;
import java.nio.ByteBuffer;
import java.nio.FloatBuffer;
import java.nio.IntBuffer;
import java.util.function.Supplier;

import org.eclipse.fx.drift.GLRenderer;
import org.eclipse.fx.drift.PresentationMode;
import org.eclipse.fx.drift.RenderTarget;
import org.eclipse.fx.drift.Renderer;
import org.eclipse.fx.drift.Swapchain;
import org.eclipse.fx.drift.SwapchainConfig;
import org.eclipse.fx.drift.TransferType;
import org.eclipse.fx.drift.Vec2i;
import org.eclipse.fx.drift.samples.lwjgl.ObjModels.Model;
import org.joml.Matrix3f;
import org.joml.Matrix4f;
import org.joml.Vector3f;
import org.lwjgl.BufferUtils;
import org.lwjgl.PointerBuffer;
import org.lwjgl.opengl.GLCapabilities;
import org.lwjgl.opengl.GLUtil;
import org.lwjgl.system.Callback;
import org.lwjgl.system.Configuration;

public class ObjDemoRenderer implements SceneRenderer {

	Renderer renderer;
	Swapchain swapChain;
	RenderTarget target;
	
	Model model;
	
	Supplier<Model> loadModel;
	
	
	int program;
	int vertexAttribute;
	int normalAttribute;
	int modelMatrixUniform;
	int viewProjectionMatrixUniform;
	int normalMatrixUniform;
	int lightPositionUniform;
	int viewPositionUniform;
	int ambientColorUniform;
	int diffuseColorUniform;
	int specularColorUniform;
	
	
    int width = 1024;
    int height = 768;
    
    float fov = 60;
    float rotation;
	boolean autoRotate = true;
	
	
    Matrix4f modelMatrix = new Matrix4f().rotateY(0.5f * (float) Math.PI).scale(1.5f, 1.5f, 1.5f);
    Matrix4f viewMatrix = new Matrix4f();
    Matrix4f projectionMatrix = new Matrix4f();
    Matrix4f viewProjectionMatrix = new Matrix4f();
    Vector3f viewPosition = new Vector3f();
    Vector3f lightPosition = new Vector3f(-5f, 5f, 5f);
    
    private FloatBuffer modelMatrixBuffer = BufferUtils.createFloatBuffer(4 * 4);
    private FloatBuffer viewProjectionMatrixBuffer = BufferUtils.createFloatBuffer(4 * 4);
    private Matrix3f normalMatrix = new Matrix3f();
    private FloatBuffer normalMatrixBuffer = BufferUtils.createFloatBuffer(3 * 3);
    private FloatBuffer lightPositionBuffer = BufferUtils.createFloatBuffer(3);
    private FloatBuffer viewPositionBuffer = BufferUtils.createFloatBuffer(3);
    
    GLCapabilities caps;
    
    long ctx;
    
    private TransferType txType;
    private TransferType curTxType;
    
    int fb;
    int depthTex;
    
    Callback debugProc;
    
    
    public ObjDemoRenderer(Supplier<Model> loadModel, Renderer renderer) {
    	this.loadModel = loadModel;
    	this.renderer = renderer;
    }
    
    @Override
    public void setType(TransferType mode) {
    	txType = mode;
    }
	
    static int createShader(String resource, int type) throws IOException {
        int shader = glCreateShaderObjectARB(type);
        ByteBuffer source = ioResourceToByteBuffer(resource, 1024);
        PointerBuffer strings = BufferUtils.createPointerBuffer(1);
        IntBuffer lengths = BufferUtils.createIntBuffer(1);
        strings.put(0, source);
        lengths.put(0, source.remaining());
        glShaderSourceARB(shader, strings, lengths);
        glCompileShaderARB(shader);
        int compiled = glGetObjectParameteriARB(shader, GL_OBJECT_COMPILE_STATUS_ARB);
        String shaderLog = glGetInfoLogARB(shader);
        if (shaderLog.trim().length() > 0) {
            System.err.println(shaderLog);
        }
        if (compiled == 0) {
            throw new AssertionError("Could not compile shader");
        }
        return shader;
    }
    
    int createProgram() throws IOException {

        int program = glCreateProgramObjectARB();
        int vertexShader = createShader("org/lwjgl/demo/opengl/assimp/magnet.vs",
                GL_VERTEX_SHADER_ARB);
        int fragmentShader = createShader("org/lwjgl/demo/opengl/assimp/magnet.fs",
                GL_FRAGMENT_SHADER_ARB);
        glAttachObjectARB(program, vertexShader);
        glAttachObjectARB(program, fragmentShader);
        glLinkProgramARB(program);
        int linkStatus = glGetObjectParameteriARB(program, GL_OBJECT_LINK_STATUS_ARB);
        String programLog = glGetInfoLogARB(program);
        if (programLog.trim().length() > 0) {
            System.err.println(programLog);
        }
        if (linkStatus == 0) {
            throw new AssertionError("Could not link program");
        }

        glUseProgramObjectARB(program);
        vertexAttribute = glGetAttribLocationARB(program, "aVertex");
        glEnableVertexAttribArrayARB(vertexAttribute);
        normalAttribute = glGetAttribLocationARB(program, "aNormal");
        glEnableVertexAttribArrayARB(normalAttribute);
        modelMatrixUniform = glGetUniformLocationARB(program, "uModelMatrix");
        viewProjectionMatrixUniform = glGetUniformLocationARB(program, "uViewProjectionMatrix");
        normalMatrixUniform = glGetUniformLocationARB(program, "uNormalMatrix");
        lightPositionUniform = glGetUniformLocationARB(program, "uLightPosition");
        viewPositionUniform = glGetUniformLocationARB(program, "uViewPosition");
        ambientColorUniform = glGetUniformLocationARB(program, "uAmbientColor");
        diffuseColorUniform = glGetUniformLocationARB(program, "uDiffuseColor");
        specularColorUniform = glGetUniformLocationARB(program, "uSpecularColor");
        
        return program;
    }
	
    
    @Override
	public void init() throws IOException {
    	
    	Configuration.DEBUG.set(true);
		Configuration.DEBUG_FUNCTIONS.set(false);
		Configuration.DEBUG_STREAM.set(System.err);
    	debugProc = GLUtil.setupDebugMessageCallback();
    	
    	//ctx = org.eclipse.fx.drift.internal.GL.createContext(0, 1, 0);
//    	ctx = org.eclipse.fx.drift.internal.GL.createSharedCompatContext(0);
//    	org.eclipse.fx.drift.internal.GL.makeContextCurrent(ctx);
//    	
//    	System.err.println("Context is " + ctx);
//    	
//    	caps = GL.createCapabilities();
//    	
//    	System.err.println("CAPS: " + caps.OpenGL32);
//    	System.err.println("ARB_shader_objects = " + caps.GL_ARB_shader_objects
//    			+ ", ARB_vertex_shader = " + caps.GL_ARB_vertex_shader
//    			+ ", ARB_fragment_shader = " + caps.GL_ARB_fragment_shader);
//        if (!caps.GL_ARB_shader_objects) {
//            throw new AssertionError("This demo requires the ARB_shader_objects extension.");
//        }
//        if (!caps.GL_ARB_vertex_shader) {
//            throw new AssertionError("This demo requires the ARB_vertex_shader extension.");
//        }
//        if (!caps.GL_ARB_fragment_shader) {
//            throw new AssertionError("This demo requires the ARB_fragment_shader extension.");
//        }
        //debugProc = GLUtil.setupDebugMessageCallback();
        
        
        /* Create all needed GL resources */
    	
    	fb = glGenFramebuffers();
    	System.err.println("fb = " + fb);
    	depthTex = glGenTextures();
        
        program = createProgram();
        
        model = loadModel.get();
        
    }
    
    @Override
    public void dispose() {
    	
    	glDeleteFramebuffers(fb);
    	glDeleteTextures(depthTex);
    	
    	glDeleteProgram(program);
    	
    	if (swapChain != null) {
        	swapChain.dispose();
        	swapChain = null;
        }
    	
    	model.free();
    	
    	debugProc.free();
    }
    
    @Override
	public void update() {
    	if (autoRotate) {
    		rotation += 0.1;
    	}
    	
        projectionMatrix.setPerspective((float) Math.toRadians(fov), (float) width / height, 0.01f,
                100.0f);
        viewPosition.set(10f * (float) Math.cos(rotation), 10f, 10f * (float) Math.sin(rotation));
        viewMatrix.setLookAt(viewPosition.x, viewPosition.y, viewPosition.z, 0f, 0f, 0f, 0f, 1f,
                0f);
        projectionMatrix.mul(viewMatrix, viewProjectionMatrix);
    }
    
    @Override
	public void beforeFrame() throws Exception {
    	if (target != null) {
    		throw new IllegalStateException();
    	}
    	Vec2i size = renderer.getSize();

    	if (swapChain == null || size.x != width || size.y != height || curTxType != txType) {
			System.err.println("(re)create swapchain");
			if (swapChain != null) {
				swapChain.dispose();
			}
			try {
				swapChain = renderer.createSwapchain(new SwapchainConfig(size, 2, PresentationMode.MAILBOX, txType));
				
				width = size.x;
				height = size.y;
				
				// update depth tex
				glBindTexture(GL_TEXTURE_2D, depthTex);
				glTexImage2D(GL_TEXTURE_2D, 0, GL_DEPTH_COMPONENT32F, width, height, 0, GL_DEPTH_COMPONENT, GL_FLOAT, (ByteBuffer)null);
		        glBindTexture(GL_TEXTURE_2D, 0);
				
				curTxType = txType;
			} catch (Exception e) {
				System.err.println("swapchain recreation failed! " + e.getMessage());
				e.printStackTrace(System.err);
			}
		}
    	
    	if (swapChain != null) {
	    	target = swapChain.acquire();
			
	        int tex = GLRenderer.getGLTextureId(target);
	        
//	        System.err.println("preparing fb " + fb + " with tx= " + tex + ", depthTex = " + depthTex + " on " + org.eclipse.fx.drift.internal.GL.getCurrentContext());
			glBindFramebuffer(GL_FRAMEBUFFER, fb);
			glFramebufferTexture(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, tex, 0);
			glFramebufferTexture(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, depthTex, 0);
			
			int status = glCheckFramebufferStatus(GL_FRAMEBUFFER);
			switch (status) {
				case GL_FRAMEBUFFER_COMPLETE: break;
				case GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT: System.err.println("INCOMPLETE_ATTACHMENT!"); break;
			}
			
			glViewport(0, 0, width, height);
    	}
    }
    
    @Override
	public void afterFrame() {
    	if (target == null) {
    		throw new IllegalStateException();
    	}
    	if (swapChain != null) {
    		glBindFramebuffer(GL_FRAMEBUFFER, 0);
            
            swapChain.present(target);
            
            target = null;
    	}
    }
    
    
    @Override
	public void render() {
//    	System.err.println("render on " + target);
    	glClearColor(0f, 0f, 0f, 0f);
        glEnable(GL_DEPTH_TEST);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        glUseProgramObjectARB(program);
        for (Model.Mesh mesh : model.meshes) {

            glBindBufferARB(GL_ARRAY_BUFFER_ARB, mesh.vertexArrayBuffer);
            glVertexAttribPointerARB(vertexAttribute, 3, GL_FLOAT, false, 0, 0);
            glBindBufferARB(GL_ARRAY_BUFFER_ARB, mesh.normalArrayBuffer);
            glVertexAttribPointerARB(normalAttribute, 3, GL_FLOAT, false, 0, 0);

            glUniformMatrix4fvARB(modelMatrixUniform, false, modelMatrix.get(modelMatrixBuffer));
            glUniformMatrix4fvARB(viewProjectionMatrixUniform, false,
                    viewProjectionMatrix.get(viewProjectionMatrixBuffer));
            normalMatrix.set(modelMatrix).invert().transpose();
            glUniformMatrix3fvARB(normalMatrixUniform, false, normalMatrix.get(normalMatrixBuffer));
            glUniform3fvARB(lightPositionUniform, lightPosition.get(lightPositionBuffer));
            glUniform3fvARB(viewPositionUniform, viewPosition.get(viewPositionBuffer));

            Model.Material material = model.materials.get(mesh.mesh.mMaterialIndex());
            nglUniform3fvARB(ambientColorUniform, 1, material.mAmbientColor.address());
            nglUniform3fvARB(diffuseColorUniform, 1, material.mDiffuseColor.address());
            nglUniform3fvARB(specularColorUniform, 1, material.mSpecularColor.address());

            glBindBufferARB(GL_ELEMENT_ARRAY_BUFFER_ARB, mesh.elementArrayBuffer);
            glDrawElements(GL_TRIANGLES, mesh.elementCount, GL_UNSIGNED_INT, 0);
        }
    }
	
	
	
}
