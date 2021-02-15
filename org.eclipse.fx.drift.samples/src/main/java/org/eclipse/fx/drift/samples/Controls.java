package org.eclipse.fx.drift.samples;

import java.util.Arrays;
import java.util.List;
import java.util.function.Function;
import java.util.stream.Collectors;

import org.eclipse.fx.drift.StandardTransferTypes;
import org.eclipse.fx.drift.TransferType;

import javafx.beans.property.BooleanProperty;
import javafx.beans.property.ReadOnlyObjectWrapper;
import javafx.beans.property.SimpleBooleanProperty;
import javafx.event.Event;
import javafx.event.EventType;
import javafx.geometry.Insets;
import javafx.scene.control.Button;
import javafx.scene.control.ComboBox;
import javafx.scene.control.ListCell;
import javafx.scene.layout.HBox;
import javafx.scene.layout.Region;

public class Controls extends HBox {

	public final static class ControlEvent extends Event {
		public ControlEvent(EventType<? extends Event> eventType) {
			super(eventType);
		}
		
		public static EventType<ControlEvent> ANY = new EventType<Controls.ControlEvent>("ANY");
		
		public static EventType<ControlEvent> PLAY = new EventType<>(ANY, "PLAY");
		public static EventType<ControlEvent> STOP = new EventType<>(ANY, "STOP");
	}
	
	private final BooleanProperty playing = new SimpleBooleanProperty();
	private final ReadOnlyObjectWrapper<TransferType> transferType = new ReadOnlyObjectWrapper<>();
	
	
	private final Button playButton;
	private final Button stopButton;
	private final ComboBox<TransferType> transferTypeCombo;
	
	public Controls() {
		getStylesheets().add(Controls.class.getResource("icons.css").toExternalForm());
		getStyleClass().add("controls");
		setPadding(new Insets(20));
		setSpacing(20);
		
		playButton = new Button();
		playButton.setGraphic(createGraphic());
		playButton.getStyleClass().add("fa-play");
		playButton.managedProperty().bind(playButton.visibleProperty());
		playButton.visibleProperty().bind(playing.not());
		playButton.setOnAction(event -> fireEvent(new ControlEvent(ControlEvent.PLAY)));

		stopButton = new Button();
		stopButton.setGraphic(createGraphic());
		stopButton.getStyleClass().add("fa-stop");
		stopButton.managedProperty().bind(stopButton.visibleProperty());
		stopButton.visibleProperty().bind(playing);
		stopButton.setOnAction(event -> fireEvent(new ControlEvent(ControlEvent.STOP)));
		
		transferTypeCombo = new ComboBox<>();
		transferTypeCombo.getItems().addAll(getTransferTypes());
		transferTypeCombo.setValue(StandardTransferTypes.MainMemory);
		transferTypeCombo.setButtonCell(new LabelProviderListCell<TransferType>(type -> type.id));
		transferTypeCombo.setCellFactory((listView) -> new LabelProviderListCell<TransferType>(type -> type.id));
		transferType.bind(transferTypeCombo.valueProperty());
		
		getChildren().addAll(playButton, stopButton, transferTypeCombo);
	}
	
	
	private static class LabelProviderListCell<M> extends ListCell<M> {
		private final Function<M, String> labelProvider;
		public LabelProviderListCell(Function<M, String> labelProvider) {
			this.labelProvider = labelProvider;
		}
		@Override
		protected void updateItem(M item, boolean empty) {
			super.updateItem(item, empty);
			if (item != null) {
                setText(labelProvider.apply(item));    
            } else {
                setText(null);
            }
		}
	}
	
	private Region createGraphic() {
		Region region = new Region();
		region.getStyleClass().add("graphic");
		return region;
	}
	
	private List<TransferType> getTransferTypes() {
		return Arrays.asList(StandardTransferTypes.MainMemory, StandardTransferTypes.NVDXInterop, StandardTransferTypes.IOSurface)
		.stream().filter(TransferType::isAvailable)
		.collect(Collectors.toList());
	}

	public final BooleanProperty playingProperty() {
		return this.playing;
	}
	

	public final boolean isPlaying() {
		return this.playingProperty().get();
	}
	

	public final void setPlaying(final boolean playing) {
		this.playingProperty().set(playing);
	}
	

	public final javafx.beans.property.ReadOnlyObjectProperty<org.eclipse.fx.drift.TransferType> transferTypeProperty() {
		return this.transferType.getReadOnlyProperty();
	}
	

	public final TransferType getTransferType() {
		return this.transferTypeProperty().get();
	}
	
	
	
}
