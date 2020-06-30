package org.eclipse.fx.drift.samples.cpp;

import org.eclipse.fx.drift.samples.IDriftFXSampleProvider;
import org.osgi.service.component.annotations.Component;

import javafx.scene.Node;

@Component
public class SimpleColorSampleProvider implements IDriftFXSampleProvider {
	
	@Override
	public String getTitle() {
		return SimpleColorSample.class.getSimpleName();
	}
	
	@Override
	public Node createInstance() {
		return new SimpleColorSample();
	}

}
