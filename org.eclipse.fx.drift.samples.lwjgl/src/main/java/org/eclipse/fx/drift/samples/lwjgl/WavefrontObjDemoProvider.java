package org.eclipse.fx.drift.samples.lwjgl;

import java.net.URL;
import java.util.Optional;

import org.eclipse.fx.drift.samples.IDriftFXSampleProvider;
import org.osgi.service.component.annotations.Component;

import javafx.scene.Node;

@Component(xmlns = "http://www.osgi.org/xmlns/scr/v1.3.0")
public class WavefrontObjDemoProvider implements IDriftFXSampleProvider {
	
	@Override
	public String getTitle() {
		return "lwjgl - wavefront obj demo";
	}
	
	@Override
	public Node createInstance() {
		return new ObjDemo();
	}
	
	@Override
	public Optional<URL> getPreviewImage() {
		return Optional.of(WavefrontObjDemoProvider.class.getResource("WavefrontObjDemo.png"));
	}

}
