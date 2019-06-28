package org.eclipse.fx.drift.internal;

public class Frame {

	public final long surfaceId;
	public final long frameId;
	
	public final int textureWidth;
	public final int textureHeight;
	public final SurfaceData surfaceData;
	public final int presentationHint;

	public Frame(long surfaceId, long frameId, int w, int h, SurfaceData surfaceData, int presentationHint) {
		this.surfaceId = surfaceId;
		this.frameId = frameId;
		this.textureWidth = w;
		this.textureHeight = h;
		this.surfaceData = surfaceData;
		this.presentationHint = presentationHint;
	}

	@Override
	public int hashCode() {
		final int prime = 31;
		int result = 1;
		result = prime * result + (int) (frameId ^ (frameId >>> 32));
		result = prime * result + (int) (surfaceId ^ (surfaceId >>> 32));
		return result;
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Frame other = (Frame) obj;
		if (frameId != other.frameId)
			return false;
		if (surfaceId != other.surfaceId)
			return false;
		return true;
	}
	
	@Override
	public String toString() {
		return "Frame(" +surfaceId +"." + frameId + ")";
	}
	
}
