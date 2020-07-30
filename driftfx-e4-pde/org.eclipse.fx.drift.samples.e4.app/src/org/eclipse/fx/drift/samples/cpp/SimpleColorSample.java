package org.eclipse.fx.drift.samples.cpp;

import org.eclipse.fx.drift.DriftFXSurface;
import org.eclipse.fx.drift.GLRenderer;
import org.eclipse.fx.drift.Renderer;
import org.eclipse.fx.drift.Vec2i;
import org.eclipse.fx.drift.util.NativeUtil;

import javafx.scene.control.Button;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.HBox;

public class SimpleColorSample extends BorderPane {

	private final DriftFXSurface surface;
	
	private Renderer keepme;
	
	private long nativeRef;
	
	public SimpleColorSample() {
		
		NativeUtil.loadLibrary(DriftFXSurface.class, "driftcpp");
		//NativeUtil.loadLibrary(SimpleColorSample.class, "samples");

		
//		System.loadLibrary("driftcpp");
		System.loadLibrary("samples");
		
		nTest(Vec2i.class, new Vec2i(10, 20), SimpleColorSample.class.getClassLoader());
		
		surface = new DriftFXSurface();
		setCenter(surface);
		
		Button startButton = new Button("start");
		startButton.setOnAction(event -> start());
		Button stopButton = new Button("stop");
		stopButton.setOnAction(event -> stop());
		setBottom(new HBox(startButton, stopButton));
	}
	
	private static native void nTest(Class<?> cls, Vec2i inst, ClassLoader loader);
	
	private void start() {
		if (nativeRef == 0) {
			nativeRef = nInitialize(keepme = GLRenderer.getRenderer(surface));
			System.out.println("fyi: " + keepme.getSize().x);
			nStart(nativeRef);
		}
	}
	
	private void stop() {
		if (nativeRef != 0) {
			nStop(nativeRef);
			nDispose(nativeRef);
			nativeRef = 0;
		}
	}
	
	private native long nInitialize(Renderer renderer);
	private native void nDispose(long nativeRef);
	private native void nStart(long nativeRef);
	private native void nStop(long nativeRef);

}
