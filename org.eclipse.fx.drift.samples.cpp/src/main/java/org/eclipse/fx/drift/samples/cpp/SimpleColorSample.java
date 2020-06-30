package org.eclipse.fx.drift.samples.cpp;

import org.eclipse.fx.drift.DriftFXSurface;
import org.eclipse.fx.drift.Renderer;

import javafx.scene.control.Button;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.HBox;

public class SimpleColorSample extends BorderPane {

	private final DriftFXSurface surface;
	
	private Renderer keepme;
	
	private long nativeRef;
	
	public SimpleColorSample() {
		System.loadLibrary("driftcpp");
		System.loadLibrary("samples");
		
		
		surface = new DriftFXSurface();
		setCenter(surface);
		
		Button startButton = new Button("start");
		startButton.setOnAction(event -> start());
		Button stopButton = new Button("stop");
		stopButton.setOnAction(event -> stop());
		setBottom(new HBox(startButton, stopButton));
	}
	
	private void start() {
		if (nativeRef == 0) {
			nativeRef = nInitialize(keepme = Renderer.getRenderer(surface));
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
