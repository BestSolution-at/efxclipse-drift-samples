package org.eclipse.fx.drift.samples.lwjgl;

import static org.lwjgl.opengl.GL11.GL_DEPTH_COMPONENT;
import static org.lwjgl.opengl.GL11.GL_FLOAT;
import static org.lwjgl.opengl.GL11.GL_TEXTURE_2D;
import static org.lwjgl.opengl.GL11.glBindTexture;
import static org.lwjgl.opengl.GL11.glDeleteTextures;
import static org.lwjgl.opengl.GL11.glGenTextures;
import static org.lwjgl.opengl.GL11.glTexImage2D;
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

import java.nio.ByteBuffer;

import org.eclipse.fx.drift.GLRenderer;
import org.eclipse.fx.drift.RenderTarget;
import org.eclipse.fx.drift.Vec2i;

public class FBO  {

	private int curWidth;
	private int curHeight;
	private int fbo;
	private int depthTex;
	
	
	private void updateDepthTexSize(Vec2i size) {
		glBindTexture(GL_TEXTURE_2D, depthTex);
		glTexImage2D(GL_TEXTURE_2D, 0, GL_DEPTH_COMPONENT32F, size.x, size.y, 0, GL_DEPTH_COMPONENT, GL_FLOAT, (ByteBuffer)null);
        glBindTexture(GL_TEXTURE_2D, 0);
	}
	
	public void updateFBO(Vec2i size, RenderTarget target) {
		int targetTex = GLRenderer.getGLTextureId(target);
		
		
		if (size.x != curWidth || size.y != curHeight) {
			updateDepthTexSize(size);
		}
		
		glBindFramebuffer(GL_FRAMEBUFFER, fbo);
		glFramebufferTexture(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, targetTex, 0);
		glFramebufferTexture(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, depthTex, 0);
	}
	
	public void initialize() {
		fbo = glGenFramebuffers();
		depthTex = glGenTextures();
//		glBindFramebuffer(GL_FRAMEBUFFER, fbo);
//		glFramebufferTexture(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, depthTex, 0);
	}
	
	public void check() {
		int status = glCheckFramebufferStatus(GL_FRAMEBUFFER);
		switch (status) {
			case GL_FRAMEBUFFER_COMPLETE: break;
			case GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT: System.err.println("INCOMPLETE_ATTACHMENT!"); break;
		}
	}
	
	public void bind() {
		glBindFramebuffer(GL_FRAMEBUFFER, fbo);
	}
	
	public void unbind() {
		glBindFramebuffer(GL_FRAMEBUFFER, 0);
	}
	

	public void dispose() {
		glDeleteFramebuffers(fbo);
		glDeleteTextures(depthTex);
	}

}
