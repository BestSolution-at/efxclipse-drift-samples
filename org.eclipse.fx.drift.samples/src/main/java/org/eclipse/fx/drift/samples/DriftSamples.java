package org.eclipse.fx.drift.samples;

import java.util.List;

import org.eclipse.fx.core.ServiceUtils;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Tab;
import javafx.scene.control.TabPane;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.Region;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

public class DriftSamples extends Application {

	private TabPane tabPane;
	
	@Override
	public void start(Stage primaryStage) throws Exception {
		primaryStage.setTitle("DriftFX Samples");
		tabPane = new TabPane();
		
		tabPane.getTabs().add(createWelcomeTab());
		tabPane.setPrefSize(600, 400);
		
		Scene scene = new Scene(tabPane);
		primaryStage.setScene(scene);
		primaryStage.show();
	}
	
	public Tab createWelcomeTab() {
		
		Tab tab = new Tab();
		tab.setClosable(false);
		
		tab.setText("Welcome to DriftFX");
		
		BorderPane root = new BorderPane();
		
		VBox samples = new VBox();
		samples.setSpacing(10);
		samples.setMaxWidth(Region.USE_PREF_SIZE);
		samples.setMaxHeight(Region.USE_PREF_SIZE);
		
		
		List<IDriftFXSampleProvider> services = ServiceUtils.getServiceList(IDriftFXSampleProvider.class);
		
		System.err.println("Found Sample Providers: " + services);
		
		for (IDriftFXSampleProvider provider : services) {
			Button b = new Button(provider.getTitle());
			b.setOnAction(e -> startSample(provider));
			samples.getChildren().add(b);
		}
		
		root.setCenter(samples);
		
		tab.setContent(root);
		
		
		return tab;
	}
	
	private void startSample(IDriftFXSampleProvider provider) {
		Tab tab = new Tab(provider.getTitle());
		tab.setContent(provider.createInstance());
		tabPane.getTabs().add(tab);
		tabPane.getSelectionModel().select(tab);
	}
	
	public static void main(String[] args) {
		launch(args);
	}

}
