package org.eclipse.fx.drift.samples;

import java.net.URL;
import java.util.Optional;

import javafx.scene.Node;

public interface IDriftFXSampleProvider {

	String getTitle();
	Node createInstance();
	default Optional<URL> getPreviewImage() {
		return Optional.empty();
	}
	
}
