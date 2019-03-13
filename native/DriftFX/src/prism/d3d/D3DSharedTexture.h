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

#ifndef PRISM_D3D_D3DSHAREDTEXTURE_H_
#define PRISM_D3D_D3DSHAREDTEXTURE_H_

#define D3D_DEBUG_INFO
#include <d3d9.h>

#include <mutex>
#include <map>

#include "SharedTexture.h"
#include "win32/D3D9ExContext.h"
#include "win32/D3D9Texture.h"

#include <DriftFX/GL/GLContext.h>


namespace driftfx {
namespace internal {
namespace prism {
namespace d3d {
using namespace win32;


class D3DSharedTexture : public SharedTexture {

public:
	D3DSharedTexture(GLContext* glContext, D3D9ExContext* d3dContext, unsigned int width, unsigned int height);
	virtual ~D3DSharedTexture();


	virtual bool Connect();
	virtual bool Disconnect();

	virtual bool Lock();
	virtual bool Unlock();

	virtual FrameData* CreateFrameData();


	static HANDLE OpenSharedDevice(D3D9ExContext* d3dContext, GLContext* glContext);
	static void CloseSharedDevice(D3D9ExContext* d3dContext, GLContext* glContext);
protected:
	D3D9ExContext* d3dContext;
	D3D9Texture* d3dTexture;

	HANDLE hDevice;
	HANDLE hObject;

	static std::mutex sharedDevicesMutex;
	static std::map<std::pair<IDirect3DDevice9Ex*, HGLRC>, HANDLE> sharedDevices;
	static std::map<HANDLE, int> sharedDevicesUsageCount;


};

}
}
}
}

#endif /* PRISM_D3D_D3DSHAREDTEXTURE_H_ */
