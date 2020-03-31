package org.eclipse.fx.drift.samples.ng;

import java.lang.reflect.InvocationTargetException;

import org.eclipse.fx.drift.DriftFXSurface2;
import org.eclipse.fx.drift.internal.GL;
import org.eclipse.fx.drift.internal.backend.BackSwapChain;
import org.eclipse.fx.drift.internal.backend.BackSwapChain.PresentationMode;
import org.eclipse.fx.drift.internal.backend.Backend;
import org.eclipse.fx.drift.internal.backend.BackendImpl;
import org.eclipse.fx.drift.internal.backend.Image;
import org.eclipse.fx.drift.internal.common.NVDXInteropImageData;
import org.eclipse.fx.drift.internal.frontend.Frontend;
import org.eclipse.fx.drift.internal.frontend.FrontendImpl;
import org.eclipse.fx.drift.internal.math.Vec2i;
import org.eclipse.fx.drift.internal.prism.Prism;
import org.eclipse.fx.drift.internal.transport.VMTransport;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

@SuppressWarnings("restriction")
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
			Prism.initialize();
		} catch (ClassNotFoundException e) {
			e.printStackTrace();
		} catch (NoSuchMethodException e) {
			e.printStackTrace();
		} catch (InvocationTargetException e) {
			e.printStackTrace();
		} catch (IllegalAccessException e) {
			e.printStackTrace();
		} catch (IllegalArgumentException e) {
			e.printStackTrace();
		} catch (NoSuchFieldException e) {
			e.printStackTrace();
		}
		
		
		BorderPane root = new BorderPane();
		
		BorderPane force = new BorderPane();
		
		Scene scene = new Scene(root);
		
		surface = new DriftFXSurface2();
		
		frontend = new FrontendImpl(surface);
		backend = new BackendImpl();
		transport = new VMTransport(frontend, backend);
		transport.start();
		
		force.setCenter(surface);
		root.setCenter(force);
		
		Button start = new Button("start");
		start.setOnAction(e -> new Thread(this::render).start());
		Button stop = new Button("stop");
		stop.setOnAction(e -> alive = false);
		
		HBox buttons = new HBox(start, stop);
		root.setTop(buttons);
		
		Label stats = new Label();
		stats.textProperty().bind(surface.statsProperty());
		root.setBottom(stats);
		
		
		Button drei = new Button("3x3");
		drei.setOnAction(e -> force.setMaxSize(3, 3));
		Button vier = new Button("4x4");
		vier.setOnAction(e -> force.setMaxSize(4, 4));
		Button norm = new Button("norm");
		norm.setOnAction(e -> force.setMaxSize(Label.USE_PREF_SIZE, Label.USE_PREF_SIZE));
		
		VBox right = new VBox(drei, vier, norm);
		root.setRight(right);
		
		
		primaryStage.setScene(scene);
		primaryStage.show();
	}
	
	public static void main(String[] args) {
		GL.initialize();
		launch(args);
	}
	
	
	long ctx;
	
	private void render() {
		
		ctx = GL.createContext(0, 3, 2);
		GL.makeContextCurrent(ctx);

		alive = true;
		
		while (alive) {
			
			Vec2i size = frontend.getSize();
			
			if (swapChain == null || size.x != width || size.y != height) {
				System.err.println("(re)create swapchain");
				swapChain = backend.createSwapChain(size, 3, PresentationMode.MAILBOX, NVDXInteropImageData.TYPE);
				
				width = size.x;
				height = size.y;
			}
			
			renderFrame();
			
		}
		
		GL.destroyContext(ctx);
		
		swapChain.release();
		swapChain = null;
		
	}
	
	private float r, g, b;
	
	private float val;
	
	void interpolate(float d) {
		r = r0 * d + r1 * (1-d);
		g = g0 * d + g1 * (1-d);
		b = b0 * d + b1 * (1-d);
	}
	
	float r0 = 0.f, g0 = 0.5f, b0 = 0.7f;
	float r1 = 1.f, g1 = 1.f, b1 = 0.0f;
	
	private void doRenderFrame(int textureId) {
		
		val += 0.01f;
		if (val > 1) {
			val -= 1;
			float tmp = r0; r0 = r1; r1 = tmp;
			tmp = g0; g0 = g1; g1 = tmp;
			tmp = b0; b0 = b1; b1 = tmp;
		}
		
		interpolate(val);
		
		int fb = GL.glGenFramebuffer();
		
		
		GL.glBindFramebuffer(GL.GL_FRAMEBUFFER, fb);
		GL.glFramebufferTexture(GL.GL_FRAMEBUFFER, GL.GL_COLOR_ATTACHMENT0, textureId, 0);
	
		
		GL.glClearColor(r, g, b, 1.0f);
		GL.glClear(GL.GL_COLOR_BUFFER_BIT);
		
		
		GL.glBindFramebuffer(GL.GL_FRAMEBUFFER, 0);
		GL.glDeleteFramebuffer(fb);
		
	}
	
	private void renderFrame() {
		try {
		Image target = swapChain.acquire();
		
		int tex = target.getGLTexture();
		
		//System.err.println("renderFrame " + tex );
		
		doRenderFrame(tex);
		
		swapChain.present(target);
		
		Thread.sleep(16);
		}
		catch (Exception e) {
			e.printStackTrace();
		}
	}

}
