package org.eclipse.fx.drift.samples;

import org.eclipse.fx.core.Subscription;
import org.eclipse.fx.drift.DriftFXSurface;

public interface IWithListeners {

	Subscription installListeners(DriftFXSurface surface);
	
}
