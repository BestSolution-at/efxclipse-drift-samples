package org.eclipse.fx.drift.samples;

import java.io.InputStream;
import java.net.URL;
import java.util.Arrays;
import java.util.Comparator;
import java.util.List;
import java.util.Optional;
import java.util.stream.Stream;

import org.eclipse.fx.core.ServiceUtils;

import javafx.application.Application;
import javafx.geometry.Insets;
import javafx.scene.Node;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.ContentDisplay;
import javafx.scene.control.Label;
import javafx.scene.control.ScrollPane;
import javafx.scene.control.Tab;
import javafx.scene.control.TabPane;
import javafx.scene.control.Label;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.Region;
import javafx.scene.layout.VBox;
import javafx.scene.layout.HBox;
import javafx.scene.shape.SVGPath;
import javafx.scene.text.TextAlignment;
import javafx.stage.Stage;

public class DriftSamples extends Application {

	private TabPane tabPane;
	
	@Override
	public void start(Stage primaryStage) throws Exception {
    String home = System.getProperty("java.home");
    String version = System.getProperty("java.version");
		primaryStage.setTitle("DriftFX Samples on " + version + " (" + home + ")");
		tabPane = new TabPane();
		
		tabPane.getTabs().add(createWelcomeTab());
		tabPane.setPrefSize(600, 400);
		
    BorderPane root = new BorderPane();
    root.setCenter(tabPane);
    VBox left = new VBox();
    VBox right = new VBox();
    Stream.of("java.home", "java.version", "java.vendor", "os.arch")
    .forEach(a -> {
      Label l = new Label(a);
      l.setPrefWidth(200);
      left.getChildren().add(l);
      Label r = new Label(System.getProperty(a));
      right.getChildren().add(r);
    } );
    HBox info = new HBox(left, right);
    info.setStyle("-fx-padding: 15px;");
    root.setTop(info);
    
		Scene scene = new Scene(root);
		primaryStage.setScene(scene);
		primaryStage.show();
	}
	
	public Tab createWelcomeTab() {
		
		Tab tab = new Tab();
		tab.setClosable(false);
		
		tab.setText("Welcome to DriftFX");
		
		BorderPane root = new BorderPane();

    

		ScrollPane scroll = new ScrollPane(root);
		scroll.setFitToWidth(true);
		
		VBox samples = new VBox();
		samples.setFillWidth(true);
		samples.setPadding(new Insets(10));
		samples.setSpacing(10);
		samples.setMaxWidth(Region.USE_PREF_SIZE);
		samples.setMaxHeight(Region.USE_PREF_SIZE);
		
		
		List<IDriftFXSampleProvider> services = ServiceUtils.getServiceList(IDriftFXSampleProvider.class);
		
		System.err.println("Found Sample Providers: " + services);
		
		Comparator<IDriftFXSampleProvider> compTitle = (left, right) -> left.getTitle().compareTo(right.getTitle());
		Comparator<IDriftFXSampleProvider> compHasGraphic = (left, right) -> (right.getPreviewImage().isPresent() ? 1 : 0) - (left.getPreviewImage().isPresent()? 1 : 0);
		
		services.stream().sorted(compHasGraphic.thenComparing(compTitle))
		.forEach(provider -> {

			Button b = new Button(provider.getTitle());
			b.setContentDisplay(ContentDisplay.TOP);
			b.setMaxWidth(Double.MAX_VALUE);
			
			Node preview  = provider.getPreviewImage()
			.map(DriftSamples::loadImage)
			.map(DriftSamples::previewView)
			.orElseGet(DriftSamples::noPreview);
			
			b.setGraphic(preview);
			
			b.setOnAction(e -> startSample(provider));
			samples.getChildren().add(b);
		});
		
		root.setCenter(samples);
		
		tab.setContent(scroll);
		
		
		return tab;
	}
	
	private static Image loadImage(URL url) {
		try (InputStream in = url.openStream()) {
			return new Image(in);
		} catch (Exception e) {
			e.printStackTrace();
			return null;
		}
	}
	
	private static Node noPreview() {
		BorderPane empty = new BorderPane();
		Label lbl = new Label("no preview");
		lbl.setRotate(30);
		empty.setCenter(lbl);
		empty.setMinWidth(120);
		empty.setMinHeight(120/(16.0/9.0));
		
		empty.setStyle("-fx-border-color: gray; -fx-border-width: 1;");
		return empty;
	}
	
	private static Node previewView(Image image) {
		ImageView view = new ImageView(image);
		view.setFitWidth(120);
		view.setPreserveRatio(true);
		return view;
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
