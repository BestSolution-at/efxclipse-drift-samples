/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 */
package org.eclipse.fx.drift.samples.lwjgl;

import static org.eclipse.fx.drift.samples.lwjgl.IOUtil.ioResourceToByteBuffer;
import static org.lwjgl.assimp.Assimp.AI_MATKEY_COLOR_AMBIENT;
import static org.lwjgl.assimp.Assimp.AI_MATKEY_COLOR_DIFFUSE;
import static org.lwjgl.assimp.Assimp.AI_MATKEY_COLOR_SPECULAR;
import static org.lwjgl.assimp.Assimp.aiGetErrorString;
import static org.lwjgl.assimp.Assimp.aiGetMaterialColor;
import static org.lwjgl.assimp.Assimp.aiImportFileEx;
import static org.lwjgl.assimp.Assimp.aiProcess_JoinIdenticalVertices;
import static org.lwjgl.assimp.Assimp.aiProcess_Triangulate;
import static org.lwjgl.assimp.Assimp.aiReleaseImport;
import static org.lwjgl.assimp.Assimp.aiTextureType_NONE;
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
import static org.lwjgl.opengl.ARBVertexBufferObject.GL_STATIC_DRAW_ARB;
import static org.lwjgl.opengl.ARBVertexBufferObject.glBindBufferARB;
import static org.lwjgl.opengl.ARBVertexBufferObject.glBufferDataARB;
import static org.lwjgl.opengl.ARBVertexBufferObject.glGenBuffersARB;
import static org.lwjgl.opengl.ARBVertexBufferObject.nglBufferDataARB;
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
import static org.lwjgl.system.MemoryUtil.NULL;
import static org.lwjgl.system.MemoryUtil.memAddress;
import static org.lwjgl.system.MemoryUtil.memCopy;
import static org.lwjgl.system.MemoryUtil.memUTF8;

import java.io.IOException;
import java.nio.ByteBuffer;
import java.nio.FloatBuffer;
import java.nio.IntBuffer;
import java.util.ArrayList;
import java.util.List;

import org.eclipse.fx.drift.DriftFXSurface;
import org.eclipse.fx.drift.GLRenderer;
import org.eclipse.fx.drift.PresentationMode;
import org.eclipse.fx.drift.RenderTarget;
import org.eclipse.fx.drift.Renderer;
import org.eclipse.fx.drift.StandardTransferTypes;
import org.eclipse.fx.drift.Swapchain;
import org.eclipse.fx.drift.SwapchainConfig;
import org.eclipse.fx.drift.TransferType;
import org.eclipse.fx.drift.Vec2i;
import org.joml.Matrix3f;
import org.joml.Matrix4f;
import org.joml.Vector3f;
import org.lwjgl.BufferUtils;
import org.lwjgl.PointerBuffer;
import org.lwjgl.assimp.AIColor4D;
import org.lwjgl.assimp.AIFace;
import org.lwjgl.assimp.AIFile;
import org.lwjgl.assimp.AIFileCloseProc;
import org.lwjgl.assimp.AIFileCloseProcI;
import org.lwjgl.assimp.AIFileIO;
import org.lwjgl.assimp.AIFileOpenProc;
import org.lwjgl.assimp.AIFileOpenProcI;
import org.lwjgl.assimp.AIFileReadProc;
import org.lwjgl.assimp.AIFileReadProcI;
import org.lwjgl.assimp.AIFileSeek;
import org.lwjgl.assimp.AIFileSeekI;
import org.lwjgl.assimp.AIFileTellProc;
import org.lwjgl.assimp.AIFileTellProcI;
import org.lwjgl.assimp.AIMaterial;
import org.lwjgl.assimp.AIMesh;
import org.lwjgl.assimp.AIScene;
import org.lwjgl.assimp.AIVector3D;
import org.lwjgl.assimp.Assimp;
import org.lwjgl.opengl.GL;
import org.lwjgl.opengl.GLCapabilities;
import org.lwjgl.opengl.GLUtil;
import org.lwjgl.system.Callback;
import org.lwjgl.system.Configuration;

import javafx.geometry.Insets;
import javafx.scene.control.Button;
import javafx.scene.control.ComboBox;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.HBox;

public class ObjDemo extends BorderPane {

	private final DriftFXSurface surface;
    int width = 1024;
    int height = 768;
    
    float fov = 60;
    float rotation;

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

    Model model;

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
//    GLFWKeyCallback keyCallback;
//    GLFWFramebufferSizeCallback fbCallback;
//    GLFWWindowSizeCallback wsCallback;
//    GLFWCursorPosCallback cpCallback;
//    GLFWScrollCallback sCallback;
    Callback debugProc;

	
	private boolean alive;
	
	private Swapchain swapChain;
	private Renderer renderer;
	
	private TransferType txType = StandardTransferTypes.MainMemory;
	
	public ObjDemo() {
		// lwjgl cfg
		Configuration.DEBUG.set(true);
		Configuration.DEBUG_FUNCTIONS.set(false);
		Configuration.DEBUG_STREAM.set(System.err);
		
		
		setBackground(null);
		setPadding(new Insets(40));
		setPrefSize(1024, 768);
		
		surface = new DriftFXSurface();
		renderer = GLRenderer.getRenderer(surface);
		
		setCenter(surface);
		
		Button start = new Button("start");
		start.setOnAction(e -> {
			Thread t = new Thread(this::run);
			t.setDaemon(true);
			t.start();
		});
		Button stop = new Button("stop");
		stop.setOnAction(e -> alive = false);
		
		ComboBox<TransferType> txMode = new ComboBox<>();
		txMode.getItems().addAll(StandardTransferTypes.MainMemory, StandardTransferTypes.NVDXInterop, StandardTransferTypes.IOSurface);
		txMode.setValue(txType);
		txMode.valueProperty().addListener((obs, ov, nv) -> txType = nv);
		
		HBox buttons = new HBox(start, stop, txMode);
		setTop(buttons);
		
		surface.setOnMouseMoved(event -> {
			rotation = ((float) event.getX() / width - 0.5f) * 2f * (float) Math.PI;
		});
		surface.setOnScroll(event -> {
			 if (event.getDeltaY() < 0) {
               fov *= 1.05f;
           } else {
               fov *= 1f / 1.05f;
           }
           if (fov < 10.0f) {
               fov = 10.0f;
           } else if (fov > 120.0f) {
               fov = 120.0f;
           }
		});
		
//		primaryStage.setOnCloseRequest(event -> {
//			alive = false;
//		});
		
		
	}
	

    long ctx;
	private TransferType curTxType;
    
    void doInit() throws IOException {
    	
    	//ctx = org.eclipse.fx.drift.internal.GL.createContext(0, 1, 0);
    	ctx = org.eclipse.fx.drift.internal.GL.createSharedCompatContext(0);
    	org.eclipse.fx.drift.internal.GL.makeContextCurrent(ctx);
    	System.err.println("Context is " + ctx);
    	
    	caps = GL.createCapabilities();
    	
    	System.err.println("CAPS: " + caps.OpenGL32);
    	System.err.println("ARB_shader_objects = " + caps.GL_ARB_shader_objects
    			+ ", ARB_vertex_shader = " + caps.GL_ARB_vertex_shader
    			+ ", ARB_fragment_shader = " + caps.GL_ARB_fragment_shader);
//        if (!caps.GL_ARB_shader_objects) {
//            throw new AssertionError("This demo requires the ARB_shader_objects extension.");
//        }
//        if (!caps.GL_ARB_vertex_shader) {
//            throw new AssertionError("This demo requires the ARB_vertex_shader extension.");
//        }
//        if (!caps.GL_ARB_fragment_shader) {
//            throw new AssertionError("This demo requires the ARB_fragment_shader extension.");
//        }
        debugProc = GLUtil.setupDebugMessageCallback();
        
        glClearColor(0f, 0f, 0f, 0f);
        glEnable(GL_DEPTH_TEST);

        /* Create all needed GL resources */
        loadModel();
        createProgram();
        
    }

    void loadModel() {
        AIFileIO fileIo = AIFileIO.create();
        AIFileOpenProcI fileOpenProc = new AIFileOpenProc() {
            public long invoke(long pFileIO, long fileName, long openMode) {
                AIFile aiFile = AIFile.create();
                final ByteBuffer data;
                String fileNameUtf8 = memUTF8(fileName);
                try {
                    data = ioResourceToByteBuffer(fileNameUtf8, 8192);
                } catch (Exception e) {
                    throw new RuntimeException("Could not open file: " + fileNameUtf8);
                }
                AIFileReadProcI fileReadProc = new AIFileReadProc() {
                    public long invoke(long pFile, long pBuffer, long size, long count) {
                        long max = Math.min(data.remaining(), size * count);
                        memCopy(memAddress(data) + data.position(), pBuffer, max);
                        return max;
                    }
                };
                AIFileSeekI fileSeekProc = new AIFileSeek() {
                    public int invoke(long pFile, long offset, int origin) {
                        if (origin == Assimp.aiOrigin_CUR) {
                            data.position(data.position() + (int) offset);
                        } else if (origin == Assimp.aiOrigin_SET) {
                            data.position((int) offset);
                        } else if (origin == Assimp.aiOrigin_END) {
                            data.position(data.limit() + (int) offset);
                        }
                        return 0;
                    }
                };
                AIFileTellProcI fileTellProc = new AIFileTellProc() {
                    public long invoke(long pFile) {
                        return data.limit();
                    }
                };
                aiFile.ReadProc(fileReadProc);
                aiFile.SeekProc(fileSeekProc);
                aiFile.FileSizeProc(fileTellProc);
                return aiFile.address();
            }
        };
        AIFileCloseProcI fileCloseProc = new AIFileCloseProc() {
            public void invoke(long pFileIO, long pFile) {
                /* Nothing to do */
            }
        };
        fileIo.set(fileOpenProc, fileCloseProc, NULL);
        AIScene scene = aiImportFileEx("org/lwjgl/demo/opengl/assimp/magnet.obj",
                aiProcess_JoinIdenticalVertices | aiProcess_Triangulate, fileIo);
        if (scene == null) {
            throw new IllegalStateException(aiGetErrorString());
        }
        model = new Model(scene);
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

    void createProgram() throws IOException {

        program = glCreateProgramObjectARB();
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
    }

    void update() {
        projectionMatrix.setPerspective((float) Math.toRadians(fov), (float) width / height, 0.01f,
                100.0f);
        viewPosition.set(10f * (float) Math.cos(rotation), 10f, 10f * (float) Math.sin(rotation));
        viewMatrix.setLookAt(viewPosition.x, viewPosition.y, viewPosition.z, 0f, 0f, 0f, 0f, 1f,
                0f);
        projectionMatrix.mul(viewMatrix, viewProjectionMatrix);
    }

    void render() {
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

    void loop() {
        while (alive) {
        	
        	Vec2i size = renderer.getSize();

        	if (swapChain == null || size.x != width || size.y != height || curTxType != txType) {
				System.err.println("(re)create swapchain");
				if (swapChain != null) {
					swapChain.dispose();
				}
				
				swapChain = renderer.createSwapchain(new SwapchainConfig(size, 2, PresentationMode.MAILBOX, txType));
				
				width = size.x;
				height = size.y;
				curTxType = txType;
			}
        	
            update();
            
            try {
	            RenderTarget target = swapChain.acquire();
	    		
	            int tex = GLRenderer.getGLTextureId(target);
	    		int depthTex = glGenTextures();
	    		glBindTexture(GL_TEXTURE_2D, depthTex);
	    		glTexImage2D(GL_TEXTURE_2D, 0, GL_DEPTH_COMPONENT32F, width, height, 0, GL_DEPTH_COMPONENT, GL_FLOAT, (ByteBuffer)null);
	            glBindTexture(GL_TEXTURE_2D, 0);
	            
	    		int fb = glGenFramebuffers();
	    		
	    		
	    		glBindFramebuffer(GL_FRAMEBUFFER, fb);
	    		glFramebufferTexture(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, tex, 0);
	    		glFramebufferTexture(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, depthTex, 0);
	    		
	    		int status = glCheckFramebufferStatus(GL_FRAMEBUFFER);
	    		switch (status) {
	    			case GL_FRAMEBUFFER_COMPLETE: break;
	    			case GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT: System.err.println("INCOMPLETE_ATTACHMENT!"); break;
	    		}
	    		
	    		glViewport(0, 0, width, height);
	    		render();
	            
	    		glBindFramebuffer(GL_FRAMEBUFFER, 0);
	    		glDeleteFramebuffers(fb);
	    		glDeleteTextures(depthTex);
	            
	            swapChain.present(target);
	            //Thread.sleep(16);
            }
            catch (Exception e) {
            	e.printStackTrace();
            }
        }
        
        swapChain.dispose();
		swapChain = null;
    }

    void run() {
    	alive = true;
        try {
            doInit();
            loop();
            model.free();
            if (debugProc != null) {
                debugProc.free();
            }
        } catch (Throwable t) {
            t.printStackTrace();
        }
    }


    static class Model {

        public AIScene scene;
        public List<Mesh> meshes;
        public List<Material> materials;

        public Model(AIScene scene) {

            this.scene = scene;

            int meshCount = scene.mNumMeshes();
            PointerBuffer meshesBuffer = scene.mMeshes();
            meshes = new ArrayList<>();
            for (int i = 0; i < meshCount; ++i) {
                meshes.add(new Mesh(AIMesh.create(meshesBuffer.get(i))));
            }

            int materialCount = scene.mNumMaterials();
            PointerBuffer materialsBuffer = scene.mMaterials();
            materials = new ArrayList<>();
            for (int i = 0; i < materialCount; ++i) {
                materials.add(new Material(AIMaterial.create(materialsBuffer.get(i))));
            }
        }

        public void free() {
            aiReleaseImport(scene);
            scene = null;
            meshes = null;
            materials = null;
        }

        public static class Mesh {

            public AIMesh mesh;
            public int vertexArrayBuffer;
            public int normalArrayBuffer;
            public int elementArrayBuffer;
            public int elementCount;

            public Mesh(AIMesh mesh) {
                this.mesh = mesh;

                vertexArrayBuffer = glGenBuffersARB();
                glBindBufferARB(GL_ARRAY_BUFFER_ARB, vertexArrayBuffer);
                AIVector3D.Buffer vertices = mesh.mVertices();
                nglBufferDataARB(GL_ARRAY_BUFFER_ARB, AIVector3D.SIZEOF * vertices.remaining(),
                        vertices.address(), GL_STATIC_DRAW_ARB);

                normalArrayBuffer = glGenBuffersARB();
                glBindBufferARB(GL_ARRAY_BUFFER_ARB, normalArrayBuffer);
                AIVector3D.Buffer normals = mesh.mNormals();
                nglBufferDataARB(GL_ARRAY_BUFFER_ARB, AIVector3D.SIZEOF * normals.remaining(),
                        normals.address(), GL_STATIC_DRAW_ARB);

                int faceCount = mesh.mNumFaces();
                elementCount = faceCount * 3;
                IntBuffer elementArrayBufferData = BufferUtils.createIntBuffer(elementCount);
                AIFace.Buffer facesBuffer = mesh.mFaces();
                for (int i = 0; i < faceCount; ++i) {
                    AIFace face = facesBuffer.get(i);
                    if (face.mNumIndices() != 3) {
                        throw new IllegalStateException("AIFace.mNumIndices() != 3");
                    }
                    elementArrayBufferData.put(face.mIndices());
                }
                elementArrayBufferData.flip();
                elementArrayBuffer = glGenBuffersARB();
                glBindBufferARB(GL_ELEMENT_ARRAY_BUFFER_ARB, elementArrayBuffer);
                glBufferDataARB(GL_ELEMENT_ARRAY_BUFFER_ARB, elementArrayBufferData,
                        GL_STATIC_DRAW_ARB);
            }
        }

        public static class Material {

            public AIMaterial mMaterial;
            public AIColor4D mAmbientColor;
            public AIColor4D mDiffuseColor;
            public AIColor4D mSpecularColor;

            public Material(AIMaterial material) {

                mMaterial = material;

                mAmbientColor = AIColor4D.create();
                if (aiGetMaterialColor(mMaterial, AI_MATKEY_COLOR_AMBIENT,
                        aiTextureType_NONE, 0, mAmbientColor) != 0) {
                    throw new IllegalStateException(aiGetErrorString());
                }
                mDiffuseColor = AIColor4D.create();
                if (aiGetMaterialColor(mMaterial, AI_MATKEY_COLOR_DIFFUSE,
                        aiTextureType_NONE, 0, mDiffuseColor) != 0) {
                    throw new IllegalStateException(aiGetErrorString());
                }
                mSpecularColor = AIColor4D.create();
                if (aiGetMaterialColor(mMaterial, AI_MATKEY_COLOR_SPECULAR,
                        aiTextureType_NONE, 0, mSpecularColor) != 0) {
                    throw new IllegalStateException(aiGetErrorString());
                }
            }
        }
}
}
