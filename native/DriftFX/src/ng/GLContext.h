

#ifndef NG_GLCONTEXT_H_
#define NG_GLCONTEXT_H_

#include <GL/glx.h>


namespace gl {

struct Context {
	int type;
};

struct LinuxContext : public Context {
	GLXContext context;
	GLXPbuffer pBuffer;
};

const int TYPE_LINUX = 0;

Context* CreateContext(Context* sharedContext);

void DestroyContext(Context* context);

void MakeContextCurrent(Context context);

}

#endif
