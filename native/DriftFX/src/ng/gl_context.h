

#ifndef NG_GLCONTEXT_H_
#define NG_GLCONTEXT_H_

#include <windows.h>

#define WGL // TODO
namespace driftfx{namespace internal{
namespace gl {

struct Context {
	int type;
};

#ifdef GLX
#include <GL/glx.h>
struct LinuxContext : public Context {
	GLXContext context;
	GLXPbuffer pBuffer;
};
#endif // LINUX

#ifdef WGL
//#include <wingdi.h>
struct WGLContext : public Context {
	HWND hWND;
	HDC hDC;
	HGLRC hGLRC;
};
#endif // WIN32

const int TYPE_LINUX = 0;
const int TYPE_WGL = 1;

void Initialize();

Context* CreateContext(Context* sharedContext);

void DestroyContext(Context* context);

void MakeContextCurrent(Context* context);

}
}
}

#endif // NG_GLCONTEXT_H_
