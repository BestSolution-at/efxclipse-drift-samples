package org.eclipse.fx.drift.samples;

import java.util.concurrent.atomic.AtomicReference;

import org.eclipse.fx.core.ServiceUtils;
import org.eclipse.fx.core.Subscription;
import org.eclipse.fx.core.observable.FXObservableUtil;
import org.eclipse.fx.drift.DriftFXSurface;
import org.eclipse.fx.drift.GLRenderer;
import org.eclipse.fx.drift.Placement;
import org.eclipse.fx.drift.PresentationMode;
import org.eclipse.fx.drift.RenderTarget;
import org.eclipse.fx.drift.Renderer;
import org.eclipse.fx.drift.StandardTransferTypes;
import org.eclipse.fx.drift.Swapchain;
import org.eclipse.fx.drift.SwapchainConfig;
import org.eclipse.fx.drift.TransferType;
import org.eclipse.fx.drift.Vec2i;

import javafx.beans.property.ReadOnlyBooleanProperty;
import javafx.beans.property.ReadOnlyBooleanWrapper;
import javafx.scene.control.ComboBox;
import javafx.scene.layout.BorderPane;

public class SamplePlayer extends BorderPane {
	private final DriftFXSurface surface;
	private final Renderer renderer; 
	
	private boolean alive;
	ReadOnlyBooleanWrapper running = new ReadOnlyBooleanWrapper();
	
	public SamplePlayer() {
		setBackground(null);
		setPrefSize(1024, 768);
		surface = new DriftFXSurface();
		surface.setPlacementStrategy(Placement.BOTTOM_RIGHT);
		renderer = GLRenderer.getRenderer(surface);
		
		setCenter(surface);
		
		System.err.println(ServiceUtils.getServiceList(ISampleRenderer.class));
		
		ComboBox<ISampleRenderer> renderers = new ComboBox<>();
		renderers.getItems().setAll(ServiceUtils.getServiceList(ISampleRenderer.class));
		FXObservableUtil.onChange(renderers.valueProperty(), this::updateRenderer);
	}
	
	
	public ReadOnlyBooleanProperty runningProperty() {
		return running.getReadOnlyProperty();
	}
	
	
	private Thread thread;
	private Swapchain swapChain;
	private volatile boolean needsSwapchainUpdate = true;
	
	private ISampleRenderer activeRenderer;
	private AtomicReference<ISampleRenderer> nextRenderer = new AtomicReference<ISampleRenderer>(null);
	
	private TransferType txType = StandardTransferTypes.MainMemory;
	
	private Subscription currentListeners;
	
	public void updateRenderer(ISampleRenderer renderer) {
		nextRenderer.set(renderer);
		
		if (currentListeners != null) {
			currentListeners.dispose();
			currentListeners = null;
		}
		
		if (renderer instanceof IWithListeners) {
			currentListeners = ((IWithListeners)renderer).installListeners(surface);
		}
	}
	
	public void updateTxType(TransferType txType) {
		if (this.txType != txType) {
			this.txType = txType;
			needsSwapchainUpdate = true;
		}
	}
	public void start() {
		if (!alive) {
			alive = true;
			thread = new Thread(this::run);
			thread.setDaemon(true);
			thread.start();
			running.set(true);
		}
	}
	public void stop() {
		if (alive) {
			alive = false;
			try {
				if (thread != null) {
					thread.join();
				}
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
			running.set(false);
		}
	}
	
	private void run() {
		try {
			if (activeRenderer != null) {
				activeRenderer.initialize();
				needsSwapchainUpdate = true;
			}
			
			while(alive) {
				
				
				// update renderer
				ISampleRenderer next = nextRenderer.getAndSet(null);
				if (next != null) {
					if (activeRenderer != null) {
						swapChain.dispose();
						swapChain = null;
						activeRenderer.dispose();
					}
					activeRenderer = next;
					activeRenderer.initialize();
					needsSwapchainUpdate = true;
				}
				
				// update swapchain
				Vec2i size = renderer.getSize();
				// check resize
				if (swapChain != null && !(size.x == swapChain.getConfig().size.x && size.y == swapChain.getConfig().size.y)) {
					needsSwapchainUpdate = true;
				}
				
				if (needsSwapchainUpdate) {
					System.err.println("(re)create swapchain");
					if (swapChain != null) {
						swapChain.dispose();
						swapChain = null;
					}
					try {
						swapChain = renderer.createSwapchain(new SwapchainConfig(size, 2, PresentationMode.MAILBOX, txType));
					} catch (Exception e) {
						System.err.println("swapchain recreation failed! " + e.getMessage());
						e.printStackTrace(System.err);
					}
					needsSwapchainUpdate = false;
				}
				
				RenderTarget renderTarget = swapChain.acquire();
				
				activeRenderer.render(swapChain.getConfig().size, renderTarget);
				
				swapChain.present(renderTarget);
				
				Thread.sleep(0);
			}
			
			if (swapChain != null) {
				swapChain.dispose();
				swapChain = null;
			}
			if (activeRenderer != null) {
				activeRenderer.dispose();
			}
			
		} catch (Exception e1) {
			e1.printStackTrace();
		}
	}
	
}
