package org.eclipse.fx.drift.samples.e4.app;

import javax.annotation.PostConstruct;

import org.eclipse.fx.drift.samples.cpp.SimpleColorSample;

import javafx.scene.layout.BorderPane;

public class SimpleColorSamplePart {

	@PostConstruct
	void init(BorderPane parent) {
		parent.setCenter(new SimpleColorSample());
	}
}
