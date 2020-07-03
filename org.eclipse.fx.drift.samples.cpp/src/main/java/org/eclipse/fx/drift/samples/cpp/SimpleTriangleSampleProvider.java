package org.eclipse.fx.drift.samples.cpp;

import org.eclipse.fx.drift.samples.IDriftFXSampleProvider;
import org.osgi.service.component.annotations.Component;

import javafx.scene.Node;

@Component(xmlns = "http://www.osgi.org/xmlns/scr/v1.3.0")
public class SimpleTriangleSampleProvider implements IDriftFXSampleProvider {
	
	@Override
	public String getTitle() {
		return "cpp - simple triangle";
	}
	
	@Override
	public Node createInstance() {
		return new SimpleTriangleSample();
	}

}
