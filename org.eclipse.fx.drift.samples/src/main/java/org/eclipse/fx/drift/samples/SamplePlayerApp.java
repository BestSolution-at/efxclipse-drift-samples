package org.eclipse.fx.drift.samples;

import java.util.List;

import org.eclipse.fx.core.ServiceUtils;
import org.eclipse.fx.drift.samples.Controls.ControlEvent;

import javafx.application.Application;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.ListView;
import javafx.scene.layout.Region;
import javafx.scene.layout.StackPane;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

public class SamplePlayerApp extends Application {
	
	@Override
	public void start(Stage primaryStage) throws Exception {
		String renderer = getParameters().getNamed().get("renderer");
		ISampleRenderer fixedRenderer = null;
		if (renderer != null) {
			Class<?> cr = Class.forName(renderer);
			Object r = cr.newInstance();
			if (r instanceof ISampleRenderer) {
				fixedRenderer = (ISampleRenderer) r;
			} else {
				throw new RuntimeException("renderer " + r + " is invalid");
			}
		}
		
		SamplePlayer player = new SamplePlayer();
		if (fixedRenderer != null) {
			player.updateRenderer(fixedRenderer);
		}
		Controls controls = new Controls();
		
		StackPane stack = new StackPane();
		stack.getStylesheets().add(SamplePlayerApp.class.getResource("sample.css").toExternalForm());
		
		stack.getChildren().add(player);
		
		stack.getChildren().add(controls);
		
		StackPane.setAlignment(controls, Pos.BOTTOM_RIGHT);
		controls.setMaxWidth(Region.USE_PREF_SIZE);
		controls.setMaxHeight(Region.USE_PREF_SIZE);
		
		// wire
		controls.addEventHandler(ControlEvent.ANY, e -> {
			if (e.getEventType() == ControlEvent.PLAY) {
				player.start();
			}
			if (e.getEventType() == ControlEvent.STOP) {
				player.stop();
			}
		});
		controls.playingProperty().bind(player.runningProperty());
		controls.transferTypeProperty().addListener((obs, ol, ne) -> player.updateTxType(ne));
	
		if (fixedRenderer == null) {
			ListView<ISampleRenderer> rendererList = new ListView<>();
			rendererList.getItems().setAll(ServiceUtils.getServiceList(ISampleRenderer.class));
			rendererList.setMaxSize(Region.USE_PREF_SIZE, Region.USE_PREF_SIZE);
			rendererList.getSelectionModel().selectedItemProperty().addListener((obs, ol, ne) -> player.updateRenderer(ne));
	
			VBox leftBox = new VBox();
			leftBox.getStyleClass().add("left-box");
			leftBox.setPadding(new Insets(20));
			leftBox.setMaxSize(Region.USE_PREF_SIZE, Region.USE_PREF_SIZE);
			leftBox.getChildren().add(rendererList);
			
			stack.getChildren().add(leftBox);
			StackPane.setAlignment(leftBox, Pos.CENTER_LEFT);
		}
		
		Scene scene = new Scene(stack);
		
		primaryStage.setScene(scene);
		primaryStage.show();
	}
	
	public static void main(String[] args) {
		launch(args);
	}

}
