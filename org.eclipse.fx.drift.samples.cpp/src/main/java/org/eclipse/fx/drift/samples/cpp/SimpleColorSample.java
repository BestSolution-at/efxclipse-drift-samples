package org.eclipse.fx.drift.samples.cpp;

import org.eclipse.fx.drift.DriftFXSurface;
import org.eclipse.fx.drift.GLRenderer;
import org.eclipse.fx.drift.Renderer;
import org.eclipse.fx.drift.StandardTransferTypes;
import org.eclipse.fx.drift.TransferType;
import org.eclipse.fx.drift.util.NativeUtil;

import javafx.scene.control.Button;
import javafx.scene.control.ComboBox;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.HBox;

public class SimpleColorSample extends BorderPane {

	private final DriftFXSurface surface;
	
	private Renderer keepme;
	
	private long nativeRef;

	private TransferType txType = StandardTransferTypes.MainMemory;
	
	public SimpleColorSample() {
		NativeUtil.loadLibrary(SimpleTriangleSample.class, "samples", System::loadLibrary, System::load);
		nInit(SimpleColorSample.class.getClassLoader());
		
		surface = new DriftFXSurface();
		setCenter(surface);
		
		Button startButton = new Button("start");
		startButton.setOnAction(event -> start());
		Button stopButton = new Button("stop");
		stopButton.setOnAction(event -> stop());

		ComboBox<TransferType> txMode = new ComboBox<>();
		txMode.getItems().addAll(StandardTransferTypes.MainMemory, StandardTransferTypes.NVDXInterop, StandardTransferTypes.IOSurface);
		txMode.setValue(txType);
		txMode.valueProperty().addListener((obs, ov, nv) -> txType = nv);

		Button output = new Button("output");
		output.setOnAction(e -> {
			if (keepme == null) return;
			
			System.err.println("getSize(): " + keepme.getSize());
			System.err.println("getLogicalSize(): " + keepme.getLogicalSize());
			System.err.println("getScreenScale(): " + keepme.getScreenScale());
			System.err.println("getUserScale(): " + keepme.getUserScale());
		});
		
		setBottom(new HBox(startButton, stopButton, txMode, output));
		
		sceneProperty().addListener((obs, ov, nv) -> {
			if (nv == null) {
				if (nativeRef != 0) {
					nDispose(nativeRef);
					nativeRef = 0;
				}
			}
		});
	}

	static native void nInit(ClassLoader classLoader);
	
	private void start() {
		if (nativeRef == 0) {
			nativeRef = nInitialize(keepme = GLRenderer.getRenderer(surface));
		}
		nStart(nativeRef, txType);
	}
	
	private void stop() {
		if (nativeRef != 0) {
			nStop(nativeRef);
		}
	}
	
	private native long nInitialize(Renderer renderer);
	private native void nDispose(long nativeRef);
	private native void nStart(long nativeRef, TransferType transferType);
	private native void nStop(long nativeRef);

}
