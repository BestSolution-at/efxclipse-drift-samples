package org.eclipse.fx.drift.samples;

import java.util.function.Supplier;

import org.eclipse.fx.drift.DriftFXSurface;

import javafx.application.Application;
import javafx.beans.binding.Bindings;
import javafx.beans.binding.StringBinding;
import javafx.scene.Node;
import javafx.scene.Scene;
import javafx.scene.control.Label;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.HBox;
import javafx.scene.layout.Priority;
import javafx.scene.layout.Region;
import javafx.stage.Stage;

public class ResizeTests extends Application {
	HBox hbox;
	
	
	
	private <T extends Region> void create(String name, Supplier<T> factory) {
		T node = factory.get();
		
		BorderPane borderPane = new BorderPane();
		borderPane.setStyle("-fx-padding: 5px; -fx-border-color: gray; -fx-border-width: 1px;");
		
		StringBinding bLabel = Bindings.createStringBinding(() -> {
			return name + " (" + node.getWidth() + "x" + node.getHeight() + ")";
		}, node.widthProperty(), node.heightProperty());
		Label lbl = new Label();
		lbl.textProperty().bind(bLabel);
		borderPane.setTop(lbl);
		borderPane.setCenter(node);
		borderPane.setBottom(new Label("minWidth: " + node.getMinWidth() + "\nprefWidth: " + node.getPrefWidth() + "\nmaxWidth: " + node.getMaxWidth()));
		
		hbox.getChildren().add(borderPane);
		HBox.setHgrow(borderPane, Priority.ALWAYS);
	}
	
	private <T extends DriftFXSurface> void createS(String name, Supplier<T> factory) {
		T node = factory.get();
		
		BorderPane borderPane = new BorderPane();
		borderPane.setStyle("-fx-padding: 5px; -fx-border-color: gray; -fx-border-width: 1px;");
		
		StringBinding bLabel = Bindings.createStringBinding(() -> {
			return name + " (" + node.getWidth() + "x" + node.getHeight() + ")";
		}, node.widthProperty(), node.heightProperty());
		Label lbl = new Label();
		lbl.textProperty().bind(bLabel);
		borderPane.setTop(lbl);
		borderPane.setCenter(node);
		borderPane.setBottom(new Label("minWidth: " + node.getMinWidth() + "\nprefWidth: " + node.getPrefWidth() + "\nmaxWidth: " + node.getMaxWidth()));
		hbox.getChildren().add(borderPane);
		HBox.setHgrow(borderPane, Priority.ALWAYS);
	}
	
	
	
	@Override
	public void start(Stage primaryStage) throws Exception {
		hbox = new HBox();
		hbox.setStyle("-fx-padding: 10px; -fx-spacing: 10px;");
		hbox.setPrefSize(800, 600);
		
		
		create("Region", () -> {
			Region r = new Region();
			r.setStyle("-fx-border-color: blue; -fx-border-width: 1px;");
			return r;
		});
		
		createS("Surface", () -> new DriftFXSurface());
		
		
		Scene scene = new Scene(hbox);
		primaryStage.setScene(scene);
		primaryStage.show();
	}
	
	public static void main(String[] args) {
		launch(args);
	}

}
