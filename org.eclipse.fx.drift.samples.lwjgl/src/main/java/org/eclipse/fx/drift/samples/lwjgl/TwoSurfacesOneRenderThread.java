package org.eclipse.fx.drift.samples.lwjgl;

import java.util.List;
import java.util.function.Consumer;
import java.util.stream.Collectors;
import java.util.stream.Stream;

import org.eclipse.fx.drift.DriftFXSurface;
import org.eclipse.fx.drift.GLRenderer;
import org.eclipse.fx.drift.Renderer;
import org.eclipse.fx.drift.StandardTransferTypes;
import org.eclipse.fx.drift.TransferType;
import org.eclipse.fx.drift.samples.IDriftFXSampleProvider;
import org.osgi.service.component.annotations.Component;

import javafx.scene.Node;
import javafx.scene.control.Button;
import javafx.scene.control.ComboBox;
import javafx.scene.layout.GridPane;
import javafx.scene.layout.HBox;
import javafx.scene.layout.Priority;
import javafx.scene.layout.Region;

@Component(xmlns = "http://www.osgi.org/xmlns/scr/v1.3.0")
public class TwoSurfacesOneRenderThread implements IDriftFXSampleProvider {
	
	@Override
	public String getTitle() {
		return "lwjgl - 2 surfaces 1 thread";
	}
	
	@Override
	public Node createInstance() {
		GridPane grid = new GridPane();
		
		DriftFXSurface surface1 = new DriftFXSurface();
		Renderer renderer1 = GLRenderer.getRenderer(surface1);
		ObjDemoRenderer demoRenderer1 = new ObjDemoRenderer(ObjModels::loadMagnetModel, renderer1);
		
		
		DriftFXSurface surface2 = new DriftFXSurface();
		Renderer renderer2 = GLRenderer.getRenderer(surface2);
		ObjDemoRenderer demoRenderer2 = new ObjDemoRenderer(ObjModels::loadMagnetModel, renderer2);
		
		GridPane.setHgrow(surface1, Priority.ALWAYS);
		GridPane.setVgrow(surface1, Priority.ALWAYS);
		GridPane.setHgrow(surface2, Priority.ALWAYS);
		GridPane.setVgrow(surface2, Priority.ALWAYS);
		grid.add(surface1, 0, 0);
		grid.add(surface2, 1, 0);
		
		
		grid.add(createTxModeDropDown(demoRenderer1::setType), 0, 1);
		grid.add(createTxModeDropDown(demoRenderer2::setType), 1, 1);
		
		
		SceneRendererThread thread = new SceneRendererThread(demoRenderer1, demoRenderer2);
		
		HBox control = new HBox();
		
		Button start = new Button("start");
		start.setMinWidth(Region.USE_PREF_SIZE);
		Button stop = new Button("stop");
		stop.setMinWidth(Region.USE_PREF_SIZE);
		
		start.setOnAction(e -> thread.start());
		stop.setOnAction(e -> thread.stop());
		
		control.setSpacing(5);
		control.getChildren().addAll(start, stop);
		
		grid.add(control, 0, 2, 2, 1);
		
		return grid;
	}
	
	private Node createTxModeDropDown(Consumer<TransferType> txTypeCallback) {
		List<TransferType> availableModes = Stream.of(StandardTransferTypes.MainMemory, StandardTransferTypes.NVDXInterop, StandardTransferTypes.IOSurface).filter(mode -> mode.isAvailable()).collect(Collectors.toList());
		ComboBox<TransferType> txMode = new ComboBox<>();
		txMode.getItems().addAll(availableModes);
		txMode.setValue(availableModes.get(0));
		txMode.valueProperty().addListener((obs, ov, nv) -> txTypeCallback.accept(nv));
		txTypeCallback.accept(availableModes.get(0));
		return txMode;
	}
	
	

}
