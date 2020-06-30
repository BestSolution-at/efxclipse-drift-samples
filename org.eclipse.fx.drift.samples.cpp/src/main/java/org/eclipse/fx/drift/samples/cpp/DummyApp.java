package org.eclipse.fx.drift.samples.cpp;

import org.eclipse.fx.drift.samples.IDriftFXSampleProvider;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.layout.BorderPane;
import javafx.stage.Stage;

public class DummyApp extends Application {

	@Override
	public void start(Stage primaryStage) throws Exception {
		
		System.err.println(System.getProperty("java.class.path"));
		
		BorderPane root = new BorderPane();
		root.setPrefSize(600, 480);
		
		IDriftFXSampleProvider provider = new SimpleColorSampleProvider();
		
		primaryStage.setTitle(provider.getTitle());
		root.setCenter(provider.createInstance());
		
		Scene scene = new Scene(root);
		primaryStage.setScene(scene);
		primaryStage.show();
	}
	
	public static void main(String[] args) {
		launch(args);
	}

}
