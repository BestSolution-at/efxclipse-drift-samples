package org.eclipse.fx.drift.samples.ng;

import java.lang.reflect.InvocationTargetException;

import org.eclipse.fx.drift.DriftFXSurface;
import org.eclipse.fx.drift.DriftFXSurface2;
import org.eclipse.fx.drift.internal.backend.Backend;
import org.eclipse.fx.drift.internal.backend.BackendImpl;
import org.eclipse.fx.drift.internal.backend.Image;
import org.eclipse.fx.drift.internal.common.MainMemoryImageData;
import org.eclipse.fx.drift.internal.GL;
import org.eclipse.fx.drift.internal.GraphicsPipelineUtil;
import org.eclipse.fx.drift.internal.backend.BackSwapChain;
import org.eclipse.fx.drift.internal.backend.BackSwapChain.PresentationMode;
import org.eclipse.fx.drift.internal.frontend.Frontend;
import org.eclipse.fx.drift.internal.frontend.FrontendImpl;
import org.eclipse.fx.drift.internal.math.Vec2i;
import org.eclipse.fx.drift.internal.transport.VMTransport;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.HBox;
import javafx.stage.Stage;

public class SimpleColorSample extends Application {

	private DriftFXSurface2 surface;
	
	private Frontend frontend;
	private Backend backend;
	private VMTransport transport;
	
	private boolean alive;
	
	private int width;
	private int height;
	
	private BackSwapChain swapChain;
	
	
	@Override
	public void start(Stage primaryStage) throws Exception {
		try {
			GraphicsPipelineUtil.initialize();
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (NoSuchMethodException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (InvocationTargetException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IllegalAccessException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IllegalArgumentException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (NoSuchFieldException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		
		BorderPane root = new BorderPane();
		Scene scene = new Scene(root);
		
		surface = new DriftFXSurface2();
		
		frontend = new FrontendImpl(surface);
		backend = new BackendImpl();
		transport = new VMTransport(frontend, backend);
		transport.start();
		
		
		root.setCenter(surface);
		
		Button start = new Button("start");
		start.setOnAction(e -> new Thread(this::render).start());
		Button stop = new Button("stop");
		stop.setOnAction(e -> alive = false);
		
		HBox buttons = new HBox(start, stop);
		root.setBottom(buttons);
		
		primaryStage.setScene(scene);
		primaryStage.show();
	}
	
	public static void main(String[] args) {
		launch(args);
	}
	
	
	long ctx;
	
	private void render() {
		
		ctx = GL.createContext(0);
		GL.makeContextCurrent(ctx);
		
		GL.glewInit();
		
		int mytex = GL.glGenTexture();
		System.err.println("mytex = " + mytex);
		GL.glDeleteTexture(mytex);
		
		int mybuf = GL.glGenBuffer();
		System.err.println("mybuf = " + mybuf);
		GL.glDeleteBuffer(mybuf);
		
		alive = true;
		
		while (alive) {
			
			Vec2i size = frontend.getSize();
			
			if (swapChain == null || size.x != width || size.y != height) {
				System.err.println("(re)create swapchain");
				swapChain = backend.createSwapChain(size, 3, PresentationMode.MAILBOX, MainMemoryImageData.TYPE);
				
				width = size.x;
				height = size.y;
			}
			
			renderFrame();
			
		}
		
		GL.destroyContext(ctx);
		
		swapChain.release();
		swapChain = null;
		
	}
	
	private float anim;
	
	private void renderFrame() {
		try {
		Image target = swapChain.acquire();
		
		int tex = target.getGLTexture();
		
		System.err.println("renderFrame " + tex );
		nRenderFrame(tex);
		
		swapChain.present(target);
		
		Thread.sleep(480);
		}
		catch (Exception e) {
			e.printStackTrace();
		}
	}
	static { System.loadLibrary("driftfx");System.loadLibrary("samples"); }
	private static native void nRenderFrame(int targetTex);

}
