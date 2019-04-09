/*******************************************************************************
 * Copyright (c) 2019 BestSolution.at and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *     Christoph Caks <ccaks@bestsolution.at> - initial API and implementation
 *******************************************************************************/
package org.eclipse.fx.drift.internal;

import org.eclipse.fx.drift.internal.JNINativeSurface.FrameData;

import com.sun.prism.Texture;

//Note: this implementation is against internal JavafX API
@SuppressWarnings("restriction")
public class NativeAPI {

	static {
		System.err.println("Loading driftfx " + System.getProperty("java.library.path"));
		String lib = "driftfx";
		System.loadLibrary("driftfx");
		Initialize();
	}
	
	public static native long nGetD3DTextureHandle(long fxTextureHandle);
	
	
	private static native void nUpdateSize(long nativeSurfaceId, int width, int height);
	public static void updateSize(long nativeSurfaceId, int width, int height) {
		nUpdateSize(nativeSurfaceId, width, height);
	}
	
	private static native long nCreateSharedTexture(long nativeSurfaceId, long jfxTextureHandle);
	public static long createSharedTexture(long nativeSurfaceId, long jfxTextureHandle) {
		return nCreateSharedTexture(nativeSurfaceId, jfxTextureHandle);
	}
	
	private static native void nCleanFXSharedTextures(long nativeSurfaceId);
	public static void cleanFXSharedTextures(long nativeSurfaceId) {
		nCleanFXSharedTextures(nativeSurfaceId);
	}
	
	private static native void nDestroySharedTexture(long nativeSurfaceId, long sharedTextureId);
	public static void destroySharedTexture(long nativeSurfaceId, long sharedTextureId) {
		nDestroySharedTexture(nativeSurfaceId, sharedTextureId);
	}
	
	private static native void nInitializeD3DPipeline(long pContext);
	public static void initializeD3DPipeline(long pContext) {
		nInitializeD3DPipeline(pContext);
	}
	
	private static native void nDestroyD3DPipeline();
	public static void destroyD3DPipeline() {
		nDestroyD3DPipeline();
	}
	
	private static native void nInitializeES2Pipeline(long pContext);
	public static void initializeES2Pipeline(long pContext) {
		nInitializeES2Pipeline(pContext);
	}
	
	private static native int nD3DRecreateTextureAsShared(Texture fxTexture, long d3dShareHandle);
	public static int d3dRecreateTextureAsShared(Texture fxTexture, long d3dShareHandle) {
		return nD3DRecreateTextureAsShared(fxTexture, d3dShareHandle);
	}
	
	private static native long nD3DRecreateTexture(long textureResourceHandle);
	public static long d3dRecreateTexture(long textureResourceHandle) {
		return nD3DRecreateTexture(textureResourceHandle);
	}
	
	private static native void nInitialize();
	public static void Initialize() {
		nInitialize();
	}
	
	private static native void nDestroy();
	public static void Destroy() {
		nDestroy();
	}
	
	private static native void nDisposeFrameData(long nativeSurfaceHandle, long frameDataId);
	public static void disposeFrameData(long nativeSurfaceHandle, FrameData frameData) {
		nDisposeFrameData(nativeSurfaceHandle, frameData.frameId);
	}
	
	private static native long nCreateNativeSurface(JNINativeSurface surface);
	public static long createNativeSurface(JNINativeSurface surface) {
		return nCreateNativeSurface(surface);
	}
	
	private static native long nDestroyNativeSurface(long nativeSurfaceHandle);
	public static void destroyNativeSurface(long nativeSurfaceHandle) {
		nDestroyNativeSurface(nativeSurfaceHandle);
	}

	private static native int nES2CopyTexture(int sourceTexture, int targetTexture, int w, int h);
	public static int es2CopyTexture(int sourceTexture, int targetTexture, int w, int h) {
		return nES2CopyTexture(sourceTexture, targetTexture, w, h);
	}

	private static native int nES2ConnectTextureToIOSurface(int textureName, int w, int h, long ioSurfaceHandle);
	public static int es2ConnectTextureToIOSurface(int textureName, int w, int h, long ioSurfaceHandle) {
		return nES2ConnectTextureToIOSurface(textureName, w, h, ioSurfaceHandle);
	}

	private static native void nES2DeleteTexture(int textureName);
	public static void es2DeleteTexture(int textureName) {
		nES2DeleteTexture(textureName);
	}



	
}
