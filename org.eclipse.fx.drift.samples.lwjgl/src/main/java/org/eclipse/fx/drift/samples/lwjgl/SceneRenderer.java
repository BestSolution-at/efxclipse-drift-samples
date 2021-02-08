package org.eclipse.fx.drift.samples.lwjgl;

import java.io.IOException;

import org.eclipse.fx.drift.TransferType;

public interface SceneRenderer {

	void init() throws IOException;

	void update();

	void beforeFrame() throws Exception;

	void afterFrame();

	void render();

	void dispose();
	
	void setType(TransferType mode);

}