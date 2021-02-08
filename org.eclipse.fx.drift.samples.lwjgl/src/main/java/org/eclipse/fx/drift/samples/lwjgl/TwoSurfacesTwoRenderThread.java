package org.eclipse.fx.drift.samples.lwjgl;

import org.eclipse.fx.drift.samples.IDriftFXSampleProvider;
import org.osgi.service.component.annotations.Component;

import javafx.scene.Node;
import javafx.scene.layout.GridPane;

@Component(xmlns = "http://www.osgi.org/xmlns/scr/v1.3.0")
public class TwoSurfacesTwoRenderThread implements IDriftFXSampleProvider {
	
	@Override
	public String getTitle() {
		return "lwjgl - two surfaces two render threads";
	}
	
	@Override
	public Node createInstance() {
		GridPane grid = new GridPane();
		
		grid.add(new ObjDemo(), 0, 0);
		grid.add(new ObjDemo(), 1, 0);
		return grid;
	}

}
