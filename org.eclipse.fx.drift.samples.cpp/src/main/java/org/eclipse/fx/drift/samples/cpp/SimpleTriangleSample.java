package org.eclipse.fx.drift.samples.cpp;

import java.io.IOException;
import java.io.InputStream;
import java.nio.charset.StandardCharsets;

import org.eclipse.fx.core.IOUtils;
import org.eclipse.fx.drift.DriftFX;
import org.eclipse.fx.drift.DriftFXSurface;
import org.eclipse.fx.drift.GLRenderer;
import org.eclipse.fx.drift.Renderer;
import org.eclipse.fx.drift.util.NativeUtil;

import javafx.scene.control.Button;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.HBox;

public class SimpleTriangleSample extends BorderPane {

	private final DriftFXSurface surface;
	
	private Renderer keepme;
	
	private long nativeRef;
	
	public SimpleTriangleSample() {
		DriftFX.useDriftCPP();
		NativeUtil.loadLibrary(SimpleTriangleSample.class, "samples", System::loadLibrary, System::load);
		
		
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

	public static String loadResource(String name) {
		try (InputStream in = SimpleTriangleSample.class.getResourceAsStream(name)) {
			return IOUtils.readToString(in, StandardCharsets.UTF_8);
		} catch (IOException e) {
			e.printStackTrace();
			return null;
		}
		
	}
	
}
