package org.eclipse.fx.drift.samples.e4.app.themes;

import org.eclipse.fx.ui.theme.AbstractTheme;

public class DefaultTheme extends AbstractTheme {
	public DefaultTheme() {
		super("theme.default", "Default theme", DefaultTheme.class.getClassLoader().getResource("css/default.css"));
	}
}
