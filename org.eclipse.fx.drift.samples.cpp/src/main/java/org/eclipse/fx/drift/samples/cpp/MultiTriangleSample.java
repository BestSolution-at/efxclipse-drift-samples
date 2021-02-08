package org.eclipse.fx.drift.samples.cpp;

import javafx.scene.Node;
import javafx.scene.layout.Region;

public class MultiTriangleSample extends Region {

	int rows = 2;
	int cols = 2;
	
	public MultiTriangleSample() {
		
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				SimpleTriangleSample child = new SimpleTriangleSample();
				child.setManaged(false);
				getChildren().add(child);
			}
		}
		
	}
	
	@Override
	protected void layoutChildren() {
		double avw = getWidth() - getInsets().getLeft() - getInsets().getRight();
		double avh = getHeight() - getInsets().getTop() - getInsets().getBottom();
		
		double spacing = 5;
		
		double w = (avw - (cols-1)*spacing) / cols;
		double h = (avh - (rows-1)*spacing) / rows;
		
		for (int idx = 0; idx < getChildren().size(); idx ++) {
			Node node = getChildren().get(idx);
			int i = idx % cols;
			int j = idx / cols;
			
			node.resizeRelocate(getInsets().getLeft() + i * (w + spacing), getInsets().getTop() + j * (h+spacing), w, h);
			
		}
	}
	
}
