package org.eclipse.fx.drift.samples;

import javafx.scene.Node;

public interface IDriftFXSampleProvider {

	String getTitle();
	Node createInstance();

	
}
