/*
 * Copyright (c) 2019 BestSolution.at and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *     Christoph Caks <ccaks@bestsolution.at> - initial API and implementation
 */

#include <iostream>
#include <sstream>

#include <DriftFX/DriftFXSurface.h>
#include <DriftFX/math/Vec2.h>

#include "Common.h"
#include "JNINativeSurface.h"
#include "NativeSurface.h"
#include "SharedTexture.h"
#include "prism/PrismBridge.h"

#include <utils/Logger.h>

#include <cmath>

#include <TransferModeManager.h>


using namespace std;

using namespace driftfx;
using namespace driftfx::math;
using namespace driftfx::gl;

using namespace driftfx::internal;
using namespace driftfx::internal::prism;

NativeSurface::NativeSurface(long surfaceId, JNINativeSurface* api) :
	surfaceId(surfaceId),
	api(api),
	context(nullptr),
	surfaceData(SurfaceData()),
	frameManager(surfaceId) {
	LogDebug("NativeSurface constructor")

}

NativeSurface::~NativeSurface() {
	LogDebug("NativeSurface" << surfaceId << " destructor")
}

void NativeSurface::Initialize() {
	LogDebug("init GLContext");
	ostringstream s;
	s << "surface" << surfaceId;
	context = PrismBridge::Get()->GetDefaultContext()->CreateSharedContext(s.str());
}

void NativeSurface::Cleanup() {
//	// TODO send some kind of signal to tell FX we are going to dispose our textures
//	FrameData* frameData = new FrameData();
//	frameData->d3dSharedHandle = 0;
//	frameData->ioSurfaceHandle = 0;
//	frameData->glTextureName = 0;
//	frameData->textureSize = Vec2ui();
//
//	api->Present(*frameData);
//
//	delete frameData;

	//LogDebug("clean textures");
	//DisposeSharedTextures();

	// NOTE: since textures know their context and set it current upon deletion
	// we must ensure that all textures from a context are deleted before the context is deleted!

	LogDebug("clean GLContext");
	delete context;
	context = nullptr;

}

GLContext* NativeSurface::GetContext() {
	return context;
}

void NativeSurface::UpdateSurface(Vec2d size, Vec2d screenScale, Vec2d userScale, unsigned int transferMode) {
	SurfaceData newSurfaceData;
	newSurfaceData.size = size;
	newSurfaceData.screenScale = screenScale;
	newSurfaceData.userScale = userScale;
	newSurfaceData.transferMode = transferMode;

	surfaceData = newSurfaceData;
}

unsigned int NativeSurface::GetWidth() {
	return GetScaledSize().x;
}

unsigned int NativeSurface::GetHeight() {
	return GetScaledSize().y;
}

RenderTarget* NativeSurface::Acquire() {
	return Acquire(GetWidth(), GetHeight());
}

RenderTarget* NativeSurface::Acquire(Vec2ui size) {
	return Acquire(size.x, size.y);
}

RenderTarget* NativeSurface::Acquire(unsigned int width, unsigned int height) {
	auto currentSurfaceData = surfaceData.load();
	//LogDebug(" " << dec << currentSurfaceData.size.x << " / " << currentSurfaceData.screenScale.x << " / " << currentSurfaceData.userScale.x);
//	DisposeSharedTextures();

	PrismBridge* bridge = PrismBridge::Get();
	// in case the system was destroyed
	if (bridge == nullptr) {
		LogDebug("Could not acquire RenderTarget. Was the system destroyed?");
		return nullptr;
	}

	if (!GetContext()->IsCurrent()) {
		LogInfo("Setting context " << GetContext()->GetName() << " current");
		GetContext()->SetCurrent();
	}

	auto frame = frameManager.CreateFrame(currentSurfaceData, Vec2ui(width, height));

	LogDebug("Acquire " << frame->ToString() << "(" << dec << width << " x " << dec << height << ")");

	auto modeId = currentSurfaceData.transferMode;
	auto mode = TransferModeManager::Instance()->GetTransferMode(modeId);

	auto tex = mode->CreateSharedTexture(GetContext(), GetFxContext(), frame);
	frame->SetSharedTexture(tex);
	//auto tex = SharedTextureFactory::CreateSharedTexture(currentSurfaceData.transferMode, GetContext(), GetFxContext(), frame);

	tex->BeforeRender();

	return frame;
}

void NativeSurface::Present(RenderTarget* target, PresentationHint hint) {
	if (target == nullptr) {
		LogDebug("Cannot present nullptr; doing nothing.");
		return;
	}

	auto frame = dynamic_cast<Frame*>(target);
	LogDebug("Present " << frame->ToString());

	auto tex = frame->GetSharedTexture();

	tex->AfterRender();

	frame->SetPresentationHint(hint);

	api->Present(frame);

	GetFrameManager()->DisposePendingFrames();
}

Context* NativeSurface::GetFxContext() {
	return PrismBridge::Get()->GetFxContext();
}

Vec2d NativeSurface::GetSurfaceSize() {
	return surfaceData.load().size;
}

Vec2d NativeSurface::GetScreenScale() {
	return surfaceData.load().screenScale;
}

Vec2d NativeSurface::GetUserScale() {
	return surfaceData.load().userScale;
}

Vec2ui NativeSurface::GetScaledSize() {
	SurfaceData data = surfaceData.load();
	Vec2ui r;
	r.x = (unsigned int) ceil((long double) data.size.x * data.screenScale.x * data.userScale.x);
	r.y = (unsigned int) ceil((long double) data.size.y * data.screenScale.y * data.userScale.y);
	return r;
}

FrameManager* NativeSurface::GetFrameManager() {
	return &frameManager;
}
