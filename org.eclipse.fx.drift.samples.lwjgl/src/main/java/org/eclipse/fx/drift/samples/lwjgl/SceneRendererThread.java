package org.eclipse.fx.drift.samples.lwjgl;

import java.util.Arrays;
import java.util.List;

import org.lwjgl.opengl.GL;
import org.lwjgl.opengl.GLCapabilities;

public class SceneRendererThread {

	private List<SceneRenderer> renderers;
	
	private boolean alive = false;
	
	private Thread thread;
	
	public SceneRendererThread(SceneRenderer...renderers) {
		this.renderers = Arrays.asList(renderers);
	}
	
	public void start() {
		if (!alive) {
			alive = true;
			thread = new Thread(this::run);
			thread.setDaemon(true);
			thread.start();
		}
	}
	
	public void stop() {
		if (alive) {
			alive = false;
			try {
				thread.join();
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
			thread = null;
		}
	}
	
	   GLCapabilities caps;
	    
	    long ctx;
	
	private void run() {
		try {
			
			ctx = org.eclipse.fx.drift.internal.GL.createSharedCompatContext(0);
	    	org.eclipse.fx.drift.internal.GL.makeContextCurrent(ctx);
	    	
	    	System.err.println("Context is " + ctx);
	    	
	    	
	    	caps = GL.createCapabilities();
	    	
	    	System.err.println("CAPS: " + caps.OpenGL32);
	    	System.err.println("ARB_shader_objects = " + caps.GL_ARB_shader_objects
	    			+ ", ARB_vertex_shader = " + caps.GL_ARB_vertex_shader
	    			+ ", ARB_fragment_shader = " + caps.GL_ARB_fragment_shader);
			
			
			for (SceneRenderer renderer : renderers) {
				renderer.init();
			}
			
			
			while (alive) {
				for (SceneRenderer renderer : renderers) {
					renderer.update();
					renderer.beforeFrame();
					renderer.render();
					renderer.afterFrame();
				}
			}
			

			for (SceneRenderer renderer : renderers) {
				renderer.dispose();
			}
			
			
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
	
	
	
}
