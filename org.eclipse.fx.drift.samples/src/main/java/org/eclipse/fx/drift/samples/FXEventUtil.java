package org.eclipse.fx.drift.samples;

import javafx.event.ActionEvent;
import javafx.scene.Node;

class FXEventUtil {
	static void onAction(Node widget, Runnable action) {
		widget.addEventHandler(ActionEvent.ACTION, e -> action.run());
	}
}