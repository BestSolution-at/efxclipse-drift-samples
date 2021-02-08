package org.eclipse.fx.drift.samples.cpp;

import java.io.IOException;
import java.io.InputStream;
import java.nio.charset.StandardCharsets;

import org.eclipse.fx.core.IOUtils;
import org.eclipse.fx.drift.DriftFXSurface;
import org.eclipse.fx.drift.GLRenderer;
import org.eclipse.fx.drift.Placement;
import org.eclipse.fx.drift.Renderer;
import org.eclipse.fx.drift.StandardTransferTypes;
import org.eclipse.fx.drift.TransferType;
import org.eclipse.fx.drift.samples.CommonControls;
import org.eclipse.fx.drift.util.NativeUtil;

import javafx.scene.control.Button;
import javafx.scene.control.ComboBox;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.HBox;

public class SimpleTriangleSample extends BorderPane {

	private final DriftFXSurface surface;
	
	private Renderer keepme;
	
	private long nativeRef;

	private TransferType txType = StandardTransferTypes.MainMemory;
	
	public SimpleTriangleSample() {
		NativeUtil.loadLibrary(SimpleTriangleSample.class, "samples", System::loadLibrary, System::load);
		nInit(SimpleColorSample.class.getClassLoader());
		
		surface = new DriftFXSurface();
		
//		surface.setMinSize(100, 100);
//		surface.setMaxSize(500, 500);
//		surface.setPrefSize(300, 300);
		
		setCenter(surface);
		
		Button startButton = new Button("start");
		startButton.setOnAction(event -> start());
		Button stopButton = new Button("stop");
		stopButton.setOnAction(event -> stop());

		ComboBox<TransferType> txMode = CommonControls.createTransferModeComboBox(true);
		txMode.valueProperty().addListener((obs, ov, nv) -> txType = nv);

		ComboBox<Placement> placement = CommonControls.createPlacementComboBox();
		surface.placementStrategyProperty().bind(placement.valueProperty());
		
		setBottom(new HBox(startButton, stopButton, txMode, placement));
		
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
			nativeRef = nInitialize(keepme = GLRenderer.getRenderer(surface), SimpleTriangleSample.class);
		}
		nStart(nativeRef, txType);
	}
	
	private void stop() {
		if (nativeRef != 0) {
			nStop(nativeRef);
		}
	}
	
	private native long nInitialize(Renderer renderer, Class<?> clazz);
	private native void nDispose(long nativeRef);
	private native void nStart(long nativeRef, TransferType transferType);
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
