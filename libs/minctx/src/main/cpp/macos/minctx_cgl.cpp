#include <minctx.h>


#include <OpenGL/OpenGL.h>
#include <OpenGL/CGLContext.h>
#include <OpenGL/CGLTypes.h>
#include <OpenGL/CGLDevice.h>

#include <CoreFoundation/CoreFoundation.h>

namespace minctx {
	struct CGLContext : Context {
		CGLContextObj contextObj;
	};
};

CGLContextObj getNative(minctx::Context* ctx) {
    if (ctx == nullptr) {
        return nullptr;
    }
    return ((minctx::CGLContext*) ctx)->contextObj;
}

minctx::Context* minctx::CreateContext(minctx::Context* sharedContext, int majorHint, int minorHint) {
    auto ctx = new CGLContext();
    auto sharedCtxObj = getNative(sharedContext);
    CGLPixelFormatAttribute profile = (CGLPixelFormatAttribute) kCGLOGLPVersion_Legacy;
    if (majorHint == 4) {
        profile = (CGLPixelFormatAttribute) kCGLOGLPVersion_GL4_Core;
    }
    if (majorHint == 3) {
        profile = (CGLPixelFormatAttribute) kCGLOGLPVersion_GL3_Core;
    }
    if (majorHint == 3 && minorHint == 2) {
        profile = (CGLPixelFormatAttribute) kCGLOGLPVersion_3_2_Core;
    }
    CGLPixelFormatAttribute attributes[5] = {
        //kCGLPFAPBuffer,
        kCGLPFAAccelerated,
        kCGLPFAOpenGLProfile, 
        profile,
        (CGLPixelFormatAttribute) 0
    };
    GLint num;

    CGLPixelFormatObj pix;
    if (sharedCtxObj != 0) {
        pix = CGLGetPixelFormat(sharedCtxObj);
    }
    else {
        CGLChoosePixelFormat( attributes, &pix, &num );
    }
    CGLError error = CGLCreateContext( pix, sharedCtxObj, &ctx->contextObj );
    if (error) {
        std::cout << "minctx::CreateContext CGLCreateContext Error: " << error << std::endl;
    }
    error = CGLDestroyPixelFormat( pix );
    if (error) {
        std::cout << "minctx::CreateContext CGLDestroyPixelFormat Error: " << error << std::endl;
    }
    return ctx;
}

void minctx::DestroyContext(minctx::Context* context) {
    auto ctx = (minctx::CGLContext*) context;
    CGLError error = CGLDestroyContext(ctx->contextObj);
    if (error) {
        std::cout << "minctx::DestroyContext Error: " << error << std::endl;
    }
    delete ctx;
}

bool minctx::MakeContextCurrent(minctx::Context* context) {
    auto ctx = (minctx::CGLContext*) context;
    CGLError error = CGLSetCurrentContext(ctx->contextObj);
    if (error) {
        std::cout << "minctx::MakeContextCurrent Error: " << error << std::endl;
    }
    return !error;
}

bool minctx::IsContextCurrent(minctx::Context* context) {
    auto ctx = (minctx::CGLContext*) context;
    return CGLGetCurrentContext() == ctx->contxtObj;
}

void* minctx::GetNativeContextHandle(minctx::Context* context) {
	auto ctx = (minctx::CGLContext*) context;
	return ctx->contextObj;
}