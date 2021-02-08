package org.eclipse.fx.drift.samples;

import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

import org.eclipse.fx.drift.Placement;
import org.eclipse.fx.drift.StandardTransferTypes;
import org.eclipse.fx.drift.TransferType;

import javafx.scene.control.ComboBox;

public class CommonControls {

	
	public static ComboBox<Placement> createPlacementComboBox() {
		ComboBox<Placement> placement = new ComboBox<>();
		placement.getItems().addAll(Placement.values());
		placement.setValue(Placement.CENTER);
		return placement;
	}
	
	public static ComboBox<TransferType> createTransferModeComboBox(boolean filterAvailable) {
		List<TransferType> types = Arrays.asList(StandardTransferTypes.MainMemory, StandardTransferTypes.NVDXInterop, StandardTransferTypes.IOSurface)
		.stream().filter(txMode -> !filterAvailable || txMode.isAvailable()).collect(Collectors.toList());
		ComboBox<TransferType> txMode = new ComboBox<>();
		txMode.getItems().addAll(types);
		txMode.setValue(StandardTransferTypes.MainMemory);
		return txMode;
	}
}
