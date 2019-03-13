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
#ifndef SHAREDSURFACE_WIN32_WGLCONTEXT_H_
#define SHAREDSURFACE_WIN32_WGLCONTEXT_H_

#include <Windows.h>
#include <GL/glew.h>
#include <GL/wglew.h>

#include <DriftFX/GL/GLContext.h>
#include <DriftFX/Texture.h>

namespace driftfx {
using namespace gl;
namespace internal {
namespace gl {
namespace wgl {


class WGLGLContext : public GLContext {

public:
	WGLGLContext();
	WGLGLContext(WGLGLContext *shared);

	virtual ~WGLGLContext();
	virtual void SetCurrent();
	virtual void UnsetCurrent();
	virtual bool IsCurrent();

	virtual HGLRC GetHandle();

	virtual GLContext* CreateSharedContext();

private:
	WGLGLContext *shared;

	HWND hWnd;
	HDC hDC;
	HGLRC hGLRC;
	HPALETTE hPalette;

	void createGL(HWND hWnd);
	void destroyGL(HWND hWnd);
	static LRESULT CALLBACK WindowProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
};

}
}
}
}


#endif /* SHAREDSURFACE_WIN32_WGLCONTEXT_H_ */
