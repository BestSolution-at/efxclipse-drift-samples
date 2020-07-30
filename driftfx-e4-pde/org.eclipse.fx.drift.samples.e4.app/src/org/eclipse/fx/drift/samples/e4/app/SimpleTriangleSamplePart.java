package org.eclipse.fx.drift.samples.e4.app;

import javax.annotation.PostConstruct;

import org.eclipse.fx.drift.samples.cpp.SimpleTriangleSample;

import javafx.scene.layout.BorderPane;

public class SimpleTriangleSamplePart {

	@PostConstruct
	void init(BorderPane parent) {
		parent.setCenter(new SimpleTriangleSample());
	}
}
