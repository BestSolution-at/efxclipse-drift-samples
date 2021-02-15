package org.eclipse.fx.drift.samples;

import org.eclipse.fx.drift.RenderTarget;
import org.eclipse.fx.drift.Vec2i;

public interface ISampleRenderer {

	void initialize() throws Exception;
	
	void render(Vec2i size, RenderTarget target);
	
	void dispose() throws Exception;
	
}
