#include <jni.h>

extern "C" {
	
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCullFace() {
		driftgl::glCullFace();
	}
		
	public static native void glCullFace(GLenum mode);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glFrontFace() {
		driftgl::glFrontFace();
	}
		
	public static native void glFrontFace(GLenum mode);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glHint() {
		driftgl::glHint();
	}
		
	public static native void glHint(GLenum target, GLenum mode);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glLineWidth() {
		driftgl::glLineWidth();
	}
		
	public static native void glLineWidth(GLfloat width);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glPointSize() {
		driftgl::glPointSize();
	}
		
	public static native void glPointSize(GLfloat size);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glPolygonMode() {
		driftgl::glPolygonMode();
	}
		
	public static native void glPolygonMode(GLenum face, GLenum mode);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glScissor() {
		driftgl::glScissor();
	}
		
	public static native void glScissor(GLint x, GLint y, GLsizei width, GLsizei height);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexParameterf() {
		driftgl::glTexParameterf();
	}
		
	public static native void glTexParameterf(GLenum target, GLenum pname, GLfloat param);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexParameterfv() {
		driftgl::glTexParameterfv();
	}
		
	public static native void glTexParameterfv(GLenum target, GLenum pname, GLfloat * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexParameteri() {
		driftgl::glTexParameteri();
	}
		
	public static native void glTexParameteri(GLenum target, GLenum pname, GLint param);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexParameteriv() {
		driftgl::glTexParameteriv();
	}
		
	public static native void glTexParameteriv(GLenum target, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexImage1D() {
		driftgl::glTexImage1D();
	}
		
	public static native void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexImage2D() {
		driftgl::glTexImage2D();
	}
		
	public static native void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDrawBuffer() {
		driftgl::glDrawBuffer();
	}
		
	public static native void glDrawBuffer(GLenum buf);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glClear() {
		driftgl::glClear();
	}
		
	public static native void glClear(GLbitfield mask);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glClearColor() {
		driftgl::glClearColor();
	}
		
	public static native void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glClearStencil() {
		driftgl::glClearStencil();
	}
		
	public static native void glClearStencil(GLint s);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glClearDepth() {
		driftgl::glClearDepth();
	}
		
	public static native void glClearDepth(GLdouble depth);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glStencilMask() {
		driftgl::glStencilMask();
	}
		
	public static native void glStencilMask(GLuint mask);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glColorMask() {
		driftgl::glColorMask();
	}
		
	public static native void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDepthMask() {
		driftgl::glDepthMask();
	}
		
	public static native void glDepthMask(GLboolean flag);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDisable() {
		driftgl::glDisable();
	}
		
	public static native void glDisable(GLenum cap);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glEnable() {
		driftgl::glEnable();
	}
		
	public static native void glEnable(GLenum cap);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glFinish() {
		driftgl::glFinish();
	}
		
	public static native void glFinish();
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glFlush() {
		driftgl::glFlush();
	}
		
	public static native void glFlush();
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBlendFunc() {
		driftgl::glBlendFunc();
	}
		
	public static native void glBlendFunc(GLenum sfactor, GLenum dfactor);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glLogicOp() {
		driftgl::glLogicOp();
	}
		
	public static native void glLogicOp(GLenum opcode);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glStencilFunc() {
		driftgl::glStencilFunc();
	}
		
	public static native void glStencilFunc(GLenum func, GLint ref, GLuint mask);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glStencilOp() {
		driftgl::glStencilOp();
	}
		
	public static native void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDepthFunc() {
		driftgl::glDepthFunc();
	}
		
	public static native void glDepthFunc(GLenum func);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glPixelStoref() {
		driftgl::glPixelStoref();
	}
		
	public static native void glPixelStoref(GLenum pname, GLfloat param);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glPixelStorei() {
		driftgl::glPixelStorei();
	}
		
	public static native void glPixelStorei(GLenum pname, GLint param);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glReadBuffer() {
		driftgl::glReadBuffer();
	}
		
	public static native void glReadBuffer(GLenum src);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glReadPixels() {
		driftgl::glReadPixels();
	}
		
	public static native void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetBooleanv() {
		driftgl::glGetBooleanv();
	}
		
	public static native void glGetBooleanv(GLenum pname, GLboolean * data);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetDoublev() {
		driftgl::glGetDoublev();
	}
		
	public static native void glGetDoublev(GLenum pname, GLdouble * data);
	extern "C" JNIEXPORT /*TODO*/ GLenum JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetError() {
		driftgl::glGetError();
	}
		
	public static native GLenum glGetError();
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetFloatv() {
		driftgl::glGetFloatv();
	}
		
	public static native void glGetFloatv(GLenum pname, GLfloat * data);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetIntegerv() {
		driftgl::glGetIntegerv();
	}
		
	public static native void glGetIntegerv(GLenum pname, GLint * data);
	extern "C" JNIEXPORT /*TODO*/ GLubyte * JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetString() {
		driftgl::glGetString();
	}
		
	public static native GLubyte * glGetString(GLenum name);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetTexImage() {
		driftgl::glGetTexImage();
	}
		
	public static native void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void * pixels);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetTexParameterfv() {
		driftgl::glGetTexParameterfv();
	}
		
	public static native void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetTexParameteriv() {
		driftgl::glGetTexParameteriv();
	}
		
	public static native void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetTexLevelParameterfv() {
		driftgl::glGetTexLevelParameterfv();
	}
		
	public static native void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetTexLevelParameteriv() {
		driftgl::glGetTexLevelParameteriv();
	}
		
	public static native void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ GLboolean JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glIsEnabled() {
		driftgl::glIsEnabled();
	}
		
	public static native GLboolean glIsEnabled(GLenum cap);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDepthRange() {
		driftgl::glDepthRange();
	}
		
	public static native void glDepthRange(GLdouble n, GLdouble f);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glViewport() {
		driftgl::glViewport();
	}
		
	public static native void glViewport(GLint x, GLint y, GLsizei width, GLsizei height);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDrawArrays() {
		driftgl::glDrawArrays();
	}
		
	public static native void glDrawArrays(GLenum mode, GLint first, GLsizei count);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDrawElements() {
		driftgl::glDrawElements();
	}
		
	public static native void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glPolygonOffset() {
		driftgl::glPolygonOffset();
	}
		
	public static native void glPolygonOffset(GLfloat factor, GLfloat units);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCopyTexImage1D() {
		driftgl::glCopyTexImage1D();
	}
		
	public static native void glCopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCopyTexImage2D() {
		driftgl::glCopyTexImage2D();
	}
		
	public static native void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCopyTexSubImage1D() {
		driftgl::glCopyTexSubImage1D();
	}
		
	public static native void glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCopyTexSubImage2D() {
		driftgl::glCopyTexSubImage2D();
	}
		
	public static native void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexSubImage1D() {
		driftgl::glTexSubImage1D();
	}
		
	public static native void glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexSubImage2D() {
		driftgl::glTexSubImage2D();
	}
		
	public static native void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBindTexture() {
		driftgl::glBindTexture();
	}
		
	public static native void glBindTexture(GLenum target, GLuint texture);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDeleteTextures() {
		driftgl::glDeleteTextures();
	}
		
	public static native void glDeleteTextures(GLsizei n, GLuint * textures);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGenTextures() {
		driftgl::glGenTextures();
	}
		
	public static native void glGenTextures(GLsizei n, GLuint * textures);
	extern "C" JNIEXPORT /*TODO*/ GLboolean JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glIsTexture() {
		driftgl::glIsTexture();
	}
		
	public static native GLboolean glIsTexture(GLuint texture);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDrawRangeElements() {
		driftgl::glDrawRangeElements();
	}
		
	public static native void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexImage3D() {
		driftgl::glTexImage3D();
	}
		
	public static native void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexSubImage3D() {
		driftgl::glTexSubImage3D();
	}
		
	public static native void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCopyTexSubImage3D() {
		driftgl::glCopyTexSubImage3D();
	}
		
	public static native void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glActiveTexture() {
		driftgl::glActiveTexture();
	}
		
	public static native void glActiveTexture(GLenum texture);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glSampleCoverage() {
		driftgl::glSampleCoverage();
	}
		
	public static native void glSampleCoverage(GLfloat value, GLboolean invert);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCompressedTexImage3D() {
		driftgl::glCompressedTexImage3D();
	}
		
	public static native void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCompressedTexImage2D() {
		driftgl::glCompressedTexImage2D();
	}
		
	public static native void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCompressedTexImage1D() {
		driftgl::glCompressedTexImage1D();
	}
		
	public static native void glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCompressedTexSubImage3D() {
		driftgl::glCompressedTexSubImage3D();
	}
		
	public static native void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCompressedTexSubImage2D() {
		driftgl::glCompressedTexSubImage2D();
	}
		
	public static native void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCompressedTexSubImage1D() {
		driftgl::glCompressedTexSubImage1D();
	}
		
	public static native void glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetCompressedTexImage() {
		driftgl::glGetCompressedTexImage();
	}
		
	public static native void glGetCompressedTexImage(GLenum target, GLint level, void * img);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBlendFuncSeparate() {
		driftgl::glBlendFuncSeparate();
	}
		
	public static native void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glMultiDrawArrays() {
		driftgl::glMultiDrawArrays();
	}
		
	public static native void glMultiDrawArrays(GLenum mode, GLint * first, GLsizei * count, GLsizei drawcount);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glMultiDrawElements() {
		driftgl::glMultiDrawElements();
	}
		
	public static native void glMultiDrawElements(GLenum mode, GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glPointParameterf() {
		driftgl::glPointParameterf();
	}
		
	public static native void glPointParameterf(GLenum pname, GLfloat param);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glPointParameterfv() {
		driftgl::glPointParameterfv();
	}
		
	public static native void glPointParameterfv(GLenum pname, GLfloat * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glPointParameteri() {
		driftgl::glPointParameteri();
	}
		
	public static native void glPointParameteri(GLenum pname, GLint param);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glPointParameteriv() {
		driftgl::glPointParameteriv();
	}
		
	public static native void glPointParameteriv(GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBlendColor() {
		driftgl::glBlendColor();
	}
		
	public static native void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBlendEquation() {
		driftgl::glBlendEquation();
	}
		
	public static native void glBlendEquation(GLenum mode);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGenQueries() {
		driftgl::glGenQueries();
	}
		
	public static native void glGenQueries(GLsizei n, GLuint * ids);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDeleteQueries() {
		driftgl::glDeleteQueries();
	}
		
	public static native void glDeleteQueries(GLsizei n, GLuint * ids);
	extern "C" JNIEXPORT /*TODO*/ GLboolean JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glIsQuery() {
		driftgl::glIsQuery();
	}
		
	public static native GLboolean glIsQuery(GLuint id);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBeginQuery() {
		driftgl::glBeginQuery();
	}
		
	public static native void glBeginQuery(GLenum target, GLuint id);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glEndQuery() {
		driftgl::glEndQuery();
	}
		
	public static native void glEndQuery(GLenum target);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetQueryiv() {
		driftgl::glGetQueryiv();
	}
		
	public static native void glGetQueryiv(GLenum target, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetQueryObjectiv() {
		driftgl::glGetQueryObjectiv();
	}
		
	public static native void glGetQueryObjectiv(GLuint id, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetQueryObjectuiv() {
		driftgl::glGetQueryObjectuiv();
	}
		
	public static native void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBindBuffer() {
		driftgl::glBindBuffer();
	}
		
	public static native void glBindBuffer(GLenum target, GLuint buffer);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDeleteBuffers() {
		driftgl::glDeleteBuffers();
	}
		
	public static native void glDeleteBuffers(GLsizei n, GLuint * buffers);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGenBuffers() {
		driftgl::glGenBuffers();
	}
		
	public static native void glGenBuffers(GLsizei n, GLuint * buffers);
	extern "C" JNIEXPORT /*TODO*/ GLboolean JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glIsBuffer() {
		driftgl::glIsBuffer();
	}
		
	public static native GLboolean glIsBuffer(GLuint buffer);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBufferData() {
		driftgl::glBufferData();
	}
		
	public static native void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBufferSubData() {
		driftgl::glBufferSubData();
	}
		
	public static native void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetBufferSubData() {
		driftgl::glGetBufferSubData();
	}
		
	public static native void glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void * data);
	extern "C" JNIEXPORT /*TODO*/ void * JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glMapBuffer() {
		driftgl::glMapBuffer();
	}
		
	public static native void * glMapBuffer(GLenum target, GLenum access);
	extern "C" JNIEXPORT /*TODO*/ GLboolean JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUnmapBuffer() {
		driftgl::glUnmapBuffer();
	}
		
	public static native GLboolean glUnmapBuffer(GLenum target);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetBufferParameteriv() {
		driftgl::glGetBufferParameteriv();
	}
		
	public static native void glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetBufferPointerv() {
		driftgl::glGetBufferPointerv();
	}
		
	public static native void glGetBufferPointerv(GLenum target, GLenum pname, void ** params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBlendEquationSeparate() {
		driftgl::glBlendEquationSeparate();
	}
		
	public static native void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDrawBuffers() {
		driftgl::glDrawBuffers();
	}
		
	public static native void glDrawBuffers(GLsizei n, GLenum * bufs);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glStencilOpSeparate() {
		driftgl::glStencilOpSeparate();
	}
		
	public static native void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glStencilFuncSeparate() {
		driftgl::glStencilFuncSeparate();
	}
		
	public static native void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glStencilMaskSeparate() {
		driftgl::glStencilMaskSeparate();
	}
		
	public static native void glStencilMaskSeparate(GLenum face, GLuint mask);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glAttachShader() {
		driftgl::glAttachShader();
	}
		
	public static native void glAttachShader(GLuint program, GLuint shader);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBindAttribLocation() {
		driftgl::glBindAttribLocation();
	}
		
	public static native void glBindAttribLocation(GLuint program, GLuint index, GLchar * name);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCompileShader() {
		driftgl::glCompileShader();
	}
		
	public static native void glCompileShader(GLuint shader);
	extern "C" JNIEXPORT /*TODO*/ GLuint JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCreateProgram() {
		driftgl::glCreateProgram();
	}
		
	public static native GLuint glCreateProgram();
	extern "C" JNIEXPORT /*TODO*/ GLuint JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCreateShader() {
		driftgl::glCreateShader();
	}
		
	public static native GLuint glCreateShader(GLenum type);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDeleteProgram() {
		driftgl::glDeleteProgram();
	}
		
	public static native void glDeleteProgram(GLuint program);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDeleteShader() {
		driftgl::glDeleteShader();
	}
		
	public static native void glDeleteShader(GLuint shader);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDetachShader() {
		driftgl::glDetachShader();
	}
		
	public static native void glDetachShader(GLuint program, GLuint shader);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDisableVertexAttribArray() {
		driftgl::glDisableVertexAttribArray();
	}
		
	public static native void glDisableVertexAttribArray(GLuint index);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glEnableVertexAttribArray() {
		driftgl::glEnableVertexAttribArray();
	}
		
	public static native void glEnableVertexAttribArray(GLuint index);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetActiveAttrib() {
		driftgl::glGetActiveAttrib();
	}
		
	public static native void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetActiveUniform() {
		driftgl::glGetActiveUniform();
	}
		
	public static native void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetAttachedShaders() {
		driftgl::glGetAttachedShaders();
	}
		
	public static native void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders);
	extern "C" JNIEXPORT /*TODO*/ GLint JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetAttribLocation() {
		driftgl::glGetAttribLocation();
	}
		
	public static native GLint glGetAttribLocation(GLuint program, GLchar * name);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetProgramiv() {
		driftgl::glGetProgramiv();
	}
		
	public static native void glGetProgramiv(GLuint program, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetProgramInfoLog() {
		driftgl::glGetProgramInfoLog();
	}
		
	public static native void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetShaderiv() {
		driftgl::glGetShaderiv();
	}
		
	public static native void glGetShaderiv(GLuint shader, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetShaderInfoLog() {
		driftgl::glGetShaderInfoLog();
	}
		
	public static native void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetShaderSource() {
		driftgl::glGetShaderSource();
	}
		
	public static native void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source);
	extern "C" JNIEXPORT /*TODO*/ GLint JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetUniformLocation() {
		driftgl::glGetUniformLocation();
	}
		
	public static native GLint glGetUniformLocation(GLuint program, GLchar * name);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetUniformfv() {
		driftgl::glGetUniformfv();
	}
		
	public static native void glGetUniformfv(GLuint program, GLint location, GLfloat * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetUniformiv() {
		driftgl::glGetUniformiv();
	}
		
	public static native void glGetUniformiv(GLuint program, GLint location, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetVertexAttribdv() {
		driftgl::glGetVertexAttribdv();
	}
		
	public static native void glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetVertexAttribfv() {
		driftgl::glGetVertexAttribfv();
	}
		
	public static native void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetVertexAttribiv() {
		driftgl::glGetVertexAttribiv();
	}
		
	public static native void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetVertexAttribPointerv() {
		driftgl::glGetVertexAttribPointerv();
	}
		
	public static native void glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer);
	extern "C" JNIEXPORT /*TODO*/ GLboolean JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glIsProgram() {
		driftgl::glIsProgram();
	}
		
	public static native GLboolean glIsProgram(GLuint program);
	extern "C" JNIEXPORT /*TODO*/ GLboolean JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glIsShader() {
		driftgl::glIsShader();
	}
		
	public static native GLboolean glIsShader(GLuint shader);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glLinkProgram() {
		driftgl::glLinkProgram();
	}
		
	public static native void glLinkProgram(GLuint program);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glShaderSource() {
		driftgl::glShaderSource();
	}
		
	public static native void glShaderSource(GLuint shader, GLsizei count, GLchar *const* string, GLint * length);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUseProgram() {
		driftgl::glUseProgram();
	}
		
	public static native void glUseProgram(GLuint program);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform1f() {
		driftgl::glUniform1f();
	}
		
	public static native void glUniform1f(GLint location, GLfloat v0);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform2f() {
		driftgl::glUniform2f();
	}
		
	public static native void glUniform2f(GLint location, GLfloat v0, GLfloat v1);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform3f() {
		driftgl::glUniform3f();
	}
		
	public static native void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform4f() {
		driftgl::glUniform4f();
	}
		
	public static native void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform1i() {
		driftgl::glUniform1i();
	}
		
	public static native void glUniform1i(GLint location, GLint v0);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform2i() {
		driftgl::glUniform2i();
	}
		
	public static native void glUniform2i(GLint location, GLint v0, GLint v1);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform3i() {
		driftgl::glUniform3i();
	}
		
	public static native void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform4i() {
		driftgl::glUniform4i();
	}
		
	public static native void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform1fv() {
		driftgl::glUniform1fv();
	}
		
	public static native void glUniform1fv(GLint location, GLsizei count, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform2fv() {
		driftgl::glUniform2fv();
	}
		
	public static native void glUniform2fv(GLint location, GLsizei count, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform3fv() {
		driftgl::glUniform3fv();
	}
		
	public static native void glUniform3fv(GLint location, GLsizei count, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform4fv() {
		driftgl::glUniform4fv();
	}
		
	public static native void glUniform4fv(GLint location, GLsizei count, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform1iv() {
		driftgl::glUniform1iv();
	}
		
	public static native void glUniform1iv(GLint location, GLsizei count, GLint * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform2iv() {
		driftgl::glUniform2iv();
	}
		
	public static native void glUniform2iv(GLint location, GLsizei count, GLint * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform3iv() {
		driftgl::glUniform3iv();
	}
		
	public static native void glUniform3iv(GLint location, GLsizei count, GLint * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform4iv() {
		driftgl::glUniform4iv();
	}
		
	public static native void glUniform4iv(GLint location, GLsizei count, GLint * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniformMatrix2fv() {
		driftgl::glUniformMatrix2fv();
	}
		
	public static native void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniformMatrix3fv() {
		driftgl::glUniformMatrix3fv();
	}
		
	public static native void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniformMatrix4fv() {
		driftgl::glUniformMatrix4fv();
	}
		
	public static native void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glValidateProgram() {
		driftgl::glValidateProgram();
	}
		
	public static native void glValidateProgram(GLuint program);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib1d() {
		driftgl::glVertexAttrib1d();
	}
		
	public static native void glVertexAttrib1d(GLuint index, GLdouble x);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib1dv() {
		driftgl::glVertexAttrib1dv();
	}
		
	public static native void glVertexAttrib1dv(GLuint index, GLdouble * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib1f() {
		driftgl::glVertexAttrib1f();
	}
		
	public static native void glVertexAttrib1f(GLuint index, GLfloat x);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib1fv() {
		driftgl::glVertexAttrib1fv();
	}
		
	public static native void glVertexAttrib1fv(GLuint index, GLfloat * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib1s() {
		driftgl::glVertexAttrib1s();
	}
		
	public static native void glVertexAttrib1s(GLuint index, GLshort x);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib1sv() {
		driftgl::glVertexAttrib1sv();
	}
		
	public static native void glVertexAttrib1sv(GLuint index, GLshort * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib2d() {
		driftgl::glVertexAttrib2d();
	}
		
	public static native void glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib2dv() {
		driftgl::glVertexAttrib2dv();
	}
		
	public static native void glVertexAttrib2dv(GLuint index, GLdouble * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib2f() {
		driftgl::glVertexAttrib2f();
	}
		
	public static native void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib2fv() {
		driftgl::glVertexAttrib2fv();
	}
		
	public static native void glVertexAttrib2fv(GLuint index, GLfloat * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib2s() {
		driftgl::glVertexAttrib2s();
	}
		
	public static native void glVertexAttrib2s(GLuint index, GLshort x, GLshort y);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib2sv() {
		driftgl::glVertexAttrib2sv();
	}
		
	public static native void glVertexAttrib2sv(GLuint index, GLshort * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib3d() {
		driftgl::glVertexAttrib3d();
	}
		
	public static native void glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib3dv() {
		driftgl::glVertexAttrib3dv();
	}
		
	public static native void glVertexAttrib3dv(GLuint index, GLdouble * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib3f() {
		driftgl::glVertexAttrib3f();
	}
		
	public static native void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib3fv() {
		driftgl::glVertexAttrib3fv();
	}
		
	public static native void glVertexAttrib3fv(GLuint index, GLfloat * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib3s() {
		driftgl::glVertexAttrib3s();
	}
		
	public static native void glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib3sv() {
		driftgl::glVertexAttrib3sv();
	}
		
	public static native void glVertexAttrib3sv(GLuint index, GLshort * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib4Nbv() {
		driftgl::glVertexAttrib4Nbv();
	}
		
	public static native void glVertexAttrib4Nbv(GLuint index, GLbyte * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib4Niv() {
		driftgl::glVertexAttrib4Niv();
	}
		
	public static native void glVertexAttrib4Niv(GLuint index, GLint * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib4Nsv() {
		driftgl::glVertexAttrib4Nsv();
	}
		
	public static native void glVertexAttrib4Nsv(GLuint index, GLshort * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib4Nub() {
		driftgl::glVertexAttrib4Nub();
	}
		
	public static native void glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib4Nubv() {
		driftgl::glVertexAttrib4Nubv();
	}
		
	public static native void glVertexAttrib4Nubv(GLuint index, GLubyte * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib4Nuiv() {
		driftgl::glVertexAttrib4Nuiv();
	}
		
	public static native void glVertexAttrib4Nuiv(GLuint index, GLuint * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib4Nusv() {
		driftgl::glVertexAttrib4Nusv();
	}
		
	public static native void glVertexAttrib4Nusv(GLuint index, GLushort * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib4bv() {
		driftgl::glVertexAttrib4bv();
	}
		
	public static native void glVertexAttrib4bv(GLuint index, GLbyte * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib4d() {
		driftgl::glVertexAttrib4d();
	}
		
	public static native void glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib4dv() {
		driftgl::glVertexAttrib4dv();
	}
		
	public static native void glVertexAttrib4dv(GLuint index, GLdouble * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib4f() {
		driftgl::glVertexAttrib4f();
	}
		
	public static native void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib4fv() {
		driftgl::glVertexAttrib4fv();
	}
		
	public static native void glVertexAttrib4fv(GLuint index, GLfloat * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib4iv() {
		driftgl::glVertexAttrib4iv();
	}
		
	public static native void glVertexAttrib4iv(GLuint index, GLint * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib4s() {
		driftgl::glVertexAttrib4s();
	}
		
	public static native void glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib4sv() {
		driftgl::glVertexAttrib4sv();
	}
		
	public static native void glVertexAttrib4sv(GLuint index, GLshort * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib4ubv() {
		driftgl::glVertexAttrib4ubv();
	}
		
	public static native void glVertexAttrib4ubv(GLuint index, GLubyte * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib4uiv() {
		driftgl::glVertexAttrib4uiv();
	}
		
	public static native void glVertexAttrib4uiv(GLuint index, GLuint * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttrib4usv() {
		driftgl::glVertexAttrib4usv();
	}
		
	public static native void glVertexAttrib4usv(GLuint index, GLushort * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribPointer() {
		driftgl::glVertexAttribPointer();
	}
		
	public static native void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniformMatrix2x3fv() {
		driftgl::glUniformMatrix2x3fv();
	}
		
	public static native void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniformMatrix3x2fv() {
		driftgl::glUniformMatrix3x2fv();
	}
		
	public static native void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniformMatrix2x4fv() {
		driftgl::glUniformMatrix2x4fv();
	}
		
	public static native void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniformMatrix4x2fv() {
		driftgl::glUniformMatrix4x2fv();
	}
		
	public static native void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniformMatrix3x4fv() {
		driftgl::glUniformMatrix3x4fv();
	}
		
	public static native void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniformMatrix4x3fv() {
		driftgl::glUniformMatrix4x3fv();
	}
		
	public static native void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glColorMaski() {
		driftgl::glColorMaski();
	}
		
	public static native void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetBooleani_v() {
		driftgl::glGetBooleani_v();
	}
		
	public static native void glGetBooleani_v(GLenum target, GLuint index, GLboolean * data);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetIntegeri_v() {
		driftgl::glGetIntegeri_v();
	}
		
	public static native void glGetIntegeri_v(GLenum target, GLuint index, GLint * data);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glEnablei() {
		driftgl::glEnablei();
	}
		
	public static native void glEnablei(GLenum target, GLuint index);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDisablei() {
		driftgl::glDisablei();
	}
		
	public static native void glDisablei(GLenum target, GLuint index);
	extern "C" JNIEXPORT /*TODO*/ GLboolean JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glIsEnabledi() {
		driftgl::glIsEnabledi();
	}
		
	public static native GLboolean glIsEnabledi(GLenum target, GLuint index);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBeginTransformFeedback() {
		driftgl::glBeginTransformFeedback();
	}
		
	public static native void glBeginTransformFeedback(GLenum primitiveMode);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glEndTransformFeedback() {
		driftgl::glEndTransformFeedback();
	}
		
	public static native void glEndTransformFeedback();
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBindBufferRange() {
		driftgl::glBindBufferRange();
	}
		
	public static native void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBindBufferBase() {
		driftgl::glBindBufferBase();
	}
		
	public static native void glBindBufferBase(GLenum target, GLuint index, GLuint buffer);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTransformFeedbackVaryings() {
		driftgl::glTransformFeedbackVaryings();
	}
		
	public static native void glTransformFeedbackVaryings(GLuint program, GLsizei count, GLchar *const* varyings, GLenum bufferMode);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetTransformFeedbackVarying() {
		driftgl::glGetTransformFeedbackVarying();
	}
		
	public static native void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glClampColor() {
		driftgl::glClampColor();
	}
		
	public static native void glClampColor(GLenum target, GLenum clamp);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBeginConditionalRender() {
		driftgl::glBeginConditionalRender();
	}
		
	public static native void glBeginConditionalRender(GLuint id, GLenum mode);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glEndConditionalRender() {
		driftgl::glEndConditionalRender();
	}
		
	public static native void glEndConditionalRender();
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribIPointer() {
		driftgl::glVertexAttribIPointer();
	}
		
	public static native void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetVertexAttribIiv() {
		driftgl::glGetVertexAttribIiv();
	}
		
	public static native void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetVertexAttribIuiv() {
		driftgl::glGetVertexAttribIuiv();
	}
		
	public static native void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribI1i() {
		driftgl::glVertexAttribI1i();
	}
		
	public static native void glVertexAttribI1i(GLuint index, GLint x);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribI2i() {
		driftgl::glVertexAttribI2i();
	}
		
	public static native void glVertexAttribI2i(GLuint index, GLint x, GLint y);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribI3i() {
		driftgl::glVertexAttribI3i();
	}
		
	public static native void glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribI4i() {
		driftgl::glVertexAttribI4i();
	}
		
	public static native void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribI1ui() {
		driftgl::glVertexAttribI1ui();
	}
		
	public static native void glVertexAttribI1ui(GLuint index, GLuint x);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribI2ui() {
		driftgl::glVertexAttribI2ui();
	}
		
	public static native void glVertexAttribI2ui(GLuint index, GLuint x, GLuint y);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribI3ui() {
		driftgl::glVertexAttribI3ui();
	}
		
	public static native void glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribI4ui() {
		driftgl::glVertexAttribI4ui();
	}
		
	public static native void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribI1iv() {
		driftgl::glVertexAttribI1iv();
	}
		
	public static native void glVertexAttribI1iv(GLuint index, GLint * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribI2iv() {
		driftgl::glVertexAttribI2iv();
	}
		
	public static native void glVertexAttribI2iv(GLuint index, GLint * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribI3iv() {
		driftgl::glVertexAttribI3iv();
	}
		
	public static native void glVertexAttribI3iv(GLuint index, GLint * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribI4iv() {
		driftgl::glVertexAttribI4iv();
	}
		
	public static native void glVertexAttribI4iv(GLuint index, GLint * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribI1uiv() {
		driftgl::glVertexAttribI1uiv();
	}
		
	public static native void glVertexAttribI1uiv(GLuint index, GLuint * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribI2uiv() {
		driftgl::glVertexAttribI2uiv();
	}
		
	public static native void glVertexAttribI2uiv(GLuint index, GLuint * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribI3uiv() {
		driftgl::glVertexAttribI3uiv();
	}
		
	public static native void glVertexAttribI3uiv(GLuint index, GLuint * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribI4uiv() {
		driftgl::glVertexAttribI4uiv();
	}
		
	public static native void glVertexAttribI4uiv(GLuint index, GLuint * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribI4bv() {
		driftgl::glVertexAttribI4bv();
	}
		
	public static native void glVertexAttribI4bv(GLuint index, GLbyte * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribI4sv() {
		driftgl::glVertexAttribI4sv();
	}
		
	public static native void glVertexAttribI4sv(GLuint index, GLshort * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribI4ubv() {
		driftgl::glVertexAttribI4ubv();
	}
		
	public static native void glVertexAttribI4ubv(GLuint index, GLubyte * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribI4usv() {
		driftgl::glVertexAttribI4usv();
	}
		
	public static native void glVertexAttribI4usv(GLuint index, GLushort * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetUniformuiv() {
		driftgl::glGetUniformuiv();
	}
		
	public static native void glGetUniformuiv(GLuint program, GLint location, GLuint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBindFragDataLocation() {
		driftgl::glBindFragDataLocation();
	}
		
	public static native void glBindFragDataLocation(GLuint program, GLuint color, GLchar * name);
	extern "C" JNIEXPORT /*TODO*/ GLint JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetFragDataLocation() {
		driftgl::glGetFragDataLocation();
	}
		
	public static native GLint glGetFragDataLocation(GLuint program, GLchar * name);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform1ui() {
		driftgl::glUniform1ui();
	}
		
	public static native void glUniform1ui(GLint location, GLuint v0);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform2ui() {
		driftgl::glUniform2ui();
	}
		
	public static native void glUniform2ui(GLint location, GLuint v0, GLuint v1);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform3ui() {
		driftgl::glUniform3ui();
	}
		
	public static native void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform4ui() {
		driftgl::glUniform4ui();
	}
		
	public static native void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform1uiv() {
		driftgl::glUniform1uiv();
	}
		
	public static native void glUniform1uiv(GLint location, GLsizei count, GLuint * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform2uiv() {
		driftgl::glUniform2uiv();
	}
		
	public static native void glUniform2uiv(GLint location, GLsizei count, GLuint * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform3uiv() {
		driftgl::glUniform3uiv();
	}
		
	public static native void glUniform3uiv(GLint location, GLsizei count, GLuint * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform4uiv() {
		driftgl::glUniform4uiv();
	}
		
	public static native void glUniform4uiv(GLint location, GLsizei count, GLuint * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexParameterIiv() {
		driftgl::glTexParameterIiv();
	}
		
	public static native void glTexParameterIiv(GLenum target, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexParameterIuiv() {
		driftgl::glTexParameterIuiv();
	}
		
	public static native void glTexParameterIuiv(GLenum target, GLenum pname, GLuint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetTexParameterIiv() {
		driftgl::glGetTexParameterIiv();
	}
		
	public static native void glGetTexParameterIiv(GLenum target, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetTexParameterIuiv() {
		driftgl::glGetTexParameterIuiv();
	}
		
	public static native void glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glClearBufferiv() {
		driftgl::glClearBufferiv();
	}
		
	public static native void glClearBufferiv(GLenum buffer, GLint drawbuffer, GLint * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glClearBufferuiv() {
		driftgl::glClearBufferuiv();
	}
		
	public static native void glClearBufferuiv(GLenum buffer, GLint drawbuffer, GLuint * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glClearBufferfv() {
		driftgl::glClearBufferfv();
	}
		
	public static native void glClearBufferfv(GLenum buffer, GLint drawbuffer, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glClearBufferfi() {
		driftgl::glClearBufferfi();
	}
		
	public static native void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
	extern "C" JNIEXPORT /*TODO*/ GLubyte * JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetStringi() {
		driftgl::glGetStringi();
	}
		
	public static native GLubyte * glGetStringi(GLenum name, GLuint index);
	extern "C" JNIEXPORT /*TODO*/ GLboolean JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glIsRenderbuffer() {
		driftgl::glIsRenderbuffer();
	}
		
	public static native GLboolean glIsRenderbuffer(GLuint renderbuffer);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBindRenderbuffer() {
		driftgl::glBindRenderbuffer();
	}
		
	public static native void glBindRenderbuffer(GLenum target, GLuint renderbuffer);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDeleteRenderbuffers() {
		driftgl::glDeleteRenderbuffers();
	}
		
	public static native void glDeleteRenderbuffers(GLsizei n, GLuint * renderbuffers);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGenRenderbuffers() {
		driftgl::glGenRenderbuffers();
	}
		
	public static native void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glRenderbufferStorage() {
		driftgl::glRenderbufferStorage();
	}
		
	public static native void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetRenderbufferParameteriv() {
		driftgl::glGetRenderbufferParameteriv();
	}
		
	public static native void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ GLboolean JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glIsFramebuffer() {
		driftgl::glIsFramebuffer();
	}
		
	public static native GLboolean glIsFramebuffer(GLuint framebuffer);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBindFramebuffer() {
		driftgl::glBindFramebuffer();
	}
		
	public static native void glBindFramebuffer(GLenum target, GLuint framebuffer);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDeleteFramebuffers() {
		driftgl::glDeleteFramebuffers();
	}
		
	public static native void glDeleteFramebuffers(GLsizei n, GLuint * framebuffers);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGenFramebuffers() {
		driftgl::glGenFramebuffers();
	}
		
	public static native void glGenFramebuffers(GLsizei n, GLuint * framebuffers);
	extern "C" JNIEXPORT /*TODO*/ GLenum JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCheckFramebufferStatus() {
		driftgl::glCheckFramebufferStatus();
	}
		
	public static native GLenum glCheckFramebufferStatus(GLenum target);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glFramebufferTexture1D() {
		driftgl::glFramebufferTexture1D();
	}
		
	public static native void glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glFramebufferTexture2D() {
		driftgl::glFramebufferTexture2D();
	}
		
	public static native void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glFramebufferTexture3D() {
		driftgl::glFramebufferTexture3D();
	}
		
	public static native void glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glFramebufferRenderbuffer() {
		driftgl::glFramebufferRenderbuffer();
	}
		
	public static native void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetFramebufferAttachmentParameteriv() {
		driftgl::glGetFramebufferAttachmentParameteriv();
	}
		
	public static native void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGenerateMipmap() {
		driftgl::glGenerateMipmap();
	}
		
	public static native void glGenerateMipmap(GLenum target);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBlitFramebuffer() {
		driftgl::glBlitFramebuffer();
	}
		
	public static native void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glRenderbufferStorageMultisample() {
		driftgl::glRenderbufferStorageMultisample();
	}
		
	public static native void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glFramebufferTextureLayer() {
		driftgl::glFramebufferTextureLayer();
	}
		
	public static native void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
	extern "C" JNIEXPORT /*TODO*/ void * JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glMapBufferRange() {
		driftgl::glMapBufferRange();
	}
		
	public static native void * glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glFlushMappedBufferRange() {
		driftgl::glFlushMappedBufferRange();
	}
		
	public static native void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBindVertexArray() {
		driftgl::glBindVertexArray();
	}
		
	public static native void glBindVertexArray(GLuint array);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDeleteVertexArrays() {
		driftgl::glDeleteVertexArrays();
	}
		
	public static native void glDeleteVertexArrays(GLsizei n, GLuint * arrays);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGenVertexArrays() {
		driftgl::glGenVertexArrays();
	}
		
	public static native void glGenVertexArrays(GLsizei n, GLuint * arrays);
	extern "C" JNIEXPORT /*TODO*/ GLboolean JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glIsVertexArray() {
		driftgl::glIsVertexArray();
	}
		
	public static native GLboolean glIsVertexArray(GLuint array);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDrawArraysInstanced() {
		driftgl::glDrawArraysInstanced();
	}
		
	public static native void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDrawElementsInstanced() {
		driftgl::glDrawElementsInstanced();
	}
		
	public static native void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexBuffer() {
		driftgl::glTexBuffer();
	}
		
	public static native void glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glPrimitiveRestartIndex() {
		driftgl::glPrimitiveRestartIndex();
	}
		
	public static native void glPrimitiveRestartIndex(GLuint index);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCopyBufferSubData() {
		driftgl::glCopyBufferSubData();
	}
		
	public static native void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetUniformIndices() {
		driftgl::glGetUniformIndices();
	}
		
	public static native void glGetUniformIndices(GLuint program, GLsizei uniformCount, GLchar *const* uniformNames, GLuint * uniformIndices);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetActiveUniformsiv() {
		driftgl::glGetActiveUniformsiv();
	}
		
	public static native void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, GLuint * uniformIndices, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetActiveUniformName() {
		driftgl::glGetActiveUniformName();
	}
		
	public static native void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName);
	extern "C" JNIEXPORT /*TODO*/ GLuint JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetUniformBlockIndex() {
		driftgl::glGetUniformBlockIndex();
	}
		
	public static native GLuint glGetUniformBlockIndex(GLuint program, GLchar * uniformBlockName);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetActiveUniformBlockiv() {
		driftgl::glGetActiveUniformBlockiv();
	}
		
	public static native void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetActiveUniformBlockName() {
		driftgl::glGetActiveUniformBlockName();
	}
		
	public static native void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniformBlockBinding() {
		driftgl::glUniformBlockBinding();
	}
		
	public static native void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDrawElementsBaseVertex() {
		driftgl::glDrawElementsBaseVertex();
	}
		
	public static native void glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDrawRangeElementsBaseVertex() {
		driftgl::glDrawRangeElementsBaseVertex();
	}
		
	public static native void glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDrawElementsInstancedBaseVertex() {
		driftgl::glDrawElementsInstancedBaseVertex();
	}
		
	public static native void glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glMultiDrawElementsBaseVertex() {
		driftgl::glMultiDrawElementsBaseVertex();
	}
		
	public static native void glMultiDrawElementsBaseVertex(GLenum mode, GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, GLint * basevertex);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProvokingVertex() {
		driftgl::glProvokingVertex();
	}
		
	public static native void glProvokingVertex(GLenum mode);
	extern "C" JNIEXPORT /*TODO*/ GLsync JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glFenceSync() {
		driftgl::glFenceSync();
	}
		
	public static native GLsync glFenceSync(GLenum condition, GLbitfield flags);
	extern "C" JNIEXPORT /*TODO*/ GLboolean JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glIsSync() {
		driftgl::glIsSync();
	}
		
	public static native GLboolean glIsSync(GLsync sync);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDeleteSync() {
		driftgl::glDeleteSync();
	}
		
	public static native void glDeleteSync(GLsync sync);
	extern "C" JNIEXPORT /*TODO*/ GLenum JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glClientWaitSync() {
		driftgl::glClientWaitSync();
	}
		
	public static native GLenum glClientWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glWaitSync() {
		driftgl::glWaitSync();
	}
		
	public static native void glWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetInteger64v() {
		driftgl::glGetInteger64v();
	}
		
	public static native void glGetInteger64v(GLenum pname, GLint64 * data);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetSynciv() {
		driftgl::glGetSynciv();
	}
		
	public static native void glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetInteger64i_v() {
		driftgl::glGetInteger64i_v();
	}
		
	public static native void glGetInteger64i_v(GLenum target, GLuint index, GLint64 * data);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetBufferParameteri64v() {
		driftgl::glGetBufferParameteri64v();
	}
		
	public static native void glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glFramebufferTexture() {
		driftgl::glFramebufferTexture();
	}
		
	public static native void glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexImage2DMultisample() {
		driftgl::glTexImage2DMultisample();
	}
		
	public static native void glTexImage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexImage3DMultisample() {
		driftgl::glTexImage3DMultisample();
	}
		
	public static native void glTexImage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetMultisamplefv() {
		driftgl::glGetMultisamplefv();
	}
		
	public static native void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat * val);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glSampleMaski() {
		driftgl::glSampleMaski();
	}
		
	public static native void glSampleMaski(GLuint maskNumber, GLbitfield mask);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBindFragDataLocationIndexed() {
		driftgl::glBindFragDataLocationIndexed();
	}
		
	public static native void glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, GLchar * name);
	extern "C" JNIEXPORT /*TODO*/ GLint JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetFragDataIndex() {
		driftgl::glGetFragDataIndex();
	}
		
	public static native GLint glGetFragDataIndex(GLuint program, GLchar * name);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGenSamplers() {
		driftgl::glGenSamplers();
	}
		
	public static native void glGenSamplers(GLsizei count, GLuint * samplers);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDeleteSamplers() {
		driftgl::glDeleteSamplers();
	}
		
	public static native void glDeleteSamplers(GLsizei count, GLuint * samplers);
	extern "C" JNIEXPORT /*TODO*/ GLboolean JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glIsSampler() {
		driftgl::glIsSampler();
	}
		
	public static native GLboolean glIsSampler(GLuint sampler);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBindSampler() {
		driftgl::glBindSampler();
	}
		
	public static native void glBindSampler(GLuint unit, GLuint sampler);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glSamplerParameteri() {
		driftgl::glSamplerParameteri();
	}
		
	public static native void glSamplerParameteri(GLuint sampler, GLenum pname, GLint param);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glSamplerParameteriv() {
		driftgl::glSamplerParameteriv();
	}
		
	public static native void glSamplerParameteriv(GLuint sampler, GLenum pname, GLint * param);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glSamplerParameterf() {
		driftgl::glSamplerParameterf();
	}
		
	public static native void glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glSamplerParameterfv() {
		driftgl::glSamplerParameterfv();
	}
		
	public static native void glSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat * param);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glSamplerParameterIiv() {
		driftgl::glSamplerParameterIiv();
	}
		
	public static native void glSamplerParameterIiv(GLuint sampler, GLenum pname, GLint * param);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glSamplerParameterIuiv() {
		driftgl::glSamplerParameterIuiv();
	}
		
	public static native void glSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint * param);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetSamplerParameteriv() {
		driftgl::glGetSamplerParameteriv();
	}
		
	public static native void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetSamplerParameterIiv() {
		driftgl::glGetSamplerParameterIiv();
	}
		
	public static native void glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetSamplerParameterfv() {
		driftgl::glGetSamplerParameterfv();
	}
		
	public static native void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetSamplerParameterIuiv() {
		driftgl::glGetSamplerParameterIuiv();
	}
		
	public static native void glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glQueryCounter() {
		driftgl::glQueryCounter();
	}
		
	public static native void glQueryCounter(GLuint id, GLenum target);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetQueryObjecti64v() {
		driftgl::glGetQueryObjecti64v();
	}
		
	public static native void glGetQueryObjecti64v(GLuint id, GLenum pname, GLint64 * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetQueryObjectui64v() {
		driftgl::glGetQueryObjectui64v();
	}
		
	public static native void glGetQueryObjectui64v(GLuint id, GLenum pname, GLuint64 * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribDivisor() {
		driftgl::glVertexAttribDivisor();
	}
		
	public static native void glVertexAttribDivisor(GLuint index, GLuint divisor);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribP1ui() {
		driftgl::glVertexAttribP1ui();
	}
		
	public static native void glVertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribP1uiv() {
		driftgl::glVertexAttribP1uiv();
	}
		
	public static native void glVertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, GLuint * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribP2ui() {
		driftgl::glVertexAttribP2ui();
	}
		
	public static native void glVertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribP2uiv() {
		driftgl::glVertexAttribP2uiv();
	}
		
	public static native void glVertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, GLuint * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribP3ui() {
		driftgl::glVertexAttribP3ui();
	}
		
	public static native void glVertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribP3uiv() {
		driftgl::glVertexAttribP3uiv();
	}
		
	public static native void glVertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, GLuint * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribP4ui() {
		driftgl::glVertexAttribP4ui();
	}
		
	public static native void glVertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribP4uiv() {
		driftgl::glVertexAttribP4uiv();
	}
		
	public static native void glVertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, GLuint * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexP2ui() {
		driftgl::glVertexP2ui();
	}
		
	public static native void glVertexP2ui(GLenum type, GLuint value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexP2uiv() {
		driftgl::glVertexP2uiv();
	}
		
	public static native void glVertexP2uiv(GLenum type, GLuint * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexP3ui() {
		driftgl::glVertexP3ui();
	}
		
	public static native void glVertexP3ui(GLenum type, GLuint value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexP3uiv() {
		driftgl::glVertexP3uiv();
	}
		
	public static native void glVertexP3uiv(GLenum type, GLuint * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexP4ui() {
		driftgl::glVertexP4ui();
	}
		
	public static native void glVertexP4ui(GLenum type, GLuint value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexP4uiv() {
		driftgl::glVertexP4uiv();
	}
		
	public static native void glVertexP4uiv(GLenum type, GLuint * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexCoordP1ui() {
		driftgl::glTexCoordP1ui();
	}
		
	public static native void glTexCoordP1ui(GLenum type, GLuint coords);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexCoordP1uiv() {
		driftgl::glTexCoordP1uiv();
	}
		
	public static native void glTexCoordP1uiv(GLenum type, GLuint * coords);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexCoordP2ui() {
		driftgl::glTexCoordP2ui();
	}
		
	public static native void glTexCoordP2ui(GLenum type, GLuint coords);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexCoordP2uiv() {
		driftgl::glTexCoordP2uiv();
	}
		
	public static native void glTexCoordP2uiv(GLenum type, GLuint * coords);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexCoordP3ui() {
		driftgl::glTexCoordP3ui();
	}
		
	public static native void glTexCoordP3ui(GLenum type, GLuint coords);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexCoordP3uiv() {
		driftgl::glTexCoordP3uiv();
	}
		
	public static native void glTexCoordP3uiv(GLenum type, GLuint * coords);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexCoordP4ui() {
		driftgl::glTexCoordP4ui();
	}
		
	public static native void glTexCoordP4ui(GLenum type, GLuint coords);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexCoordP4uiv() {
		driftgl::glTexCoordP4uiv();
	}
		
	public static native void glTexCoordP4uiv(GLenum type, GLuint * coords);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glMultiTexCoordP1ui() {
		driftgl::glMultiTexCoordP1ui();
	}
		
	public static native void glMultiTexCoordP1ui(GLenum texture, GLenum type, GLuint coords);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glMultiTexCoordP1uiv() {
		driftgl::glMultiTexCoordP1uiv();
	}
		
	public static native void glMultiTexCoordP1uiv(GLenum texture, GLenum type, GLuint * coords);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glMultiTexCoordP2ui() {
		driftgl::glMultiTexCoordP2ui();
	}
		
	public static native void glMultiTexCoordP2ui(GLenum texture, GLenum type, GLuint coords);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glMultiTexCoordP2uiv() {
		driftgl::glMultiTexCoordP2uiv();
	}
		
	public static native void glMultiTexCoordP2uiv(GLenum texture, GLenum type, GLuint * coords);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glMultiTexCoordP3ui() {
		driftgl::glMultiTexCoordP3ui();
	}
		
	public static native void glMultiTexCoordP3ui(GLenum texture, GLenum type, GLuint coords);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glMultiTexCoordP3uiv() {
		driftgl::glMultiTexCoordP3uiv();
	}
		
	public static native void glMultiTexCoordP3uiv(GLenum texture, GLenum type, GLuint * coords);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glMultiTexCoordP4ui() {
		driftgl::glMultiTexCoordP4ui();
	}
		
	public static native void glMultiTexCoordP4ui(GLenum texture, GLenum type, GLuint coords);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glMultiTexCoordP4uiv() {
		driftgl::glMultiTexCoordP4uiv();
	}
		
	public static native void glMultiTexCoordP4uiv(GLenum texture, GLenum type, GLuint * coords);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glNormalP3ui() {
		driftgl::glNormalP3ui();
	}
		
	public static native void glNormalP3ui(GLenum type, GLuint coords);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glNormalP3uiv() {
		driftgl::glNormalP3uiv();
	}
		
	public static native void glNormalP3uiv(GLenum type, GLuint * coords);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glColorP3ui() {
		driftgl::glColorP3ui();
	}
		
	public static native void glColorP3ui(GLenum type, GLuint color);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glColorP3uiv() {
		driftgl::glColorP3uiv();
	}
		
	public static native void glColorP3uiv(GLenum type, GLuint * color);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glColorP4ui() {
		driftgl::glColorP4ui();
	}
		
	public static native void glColorP4ui(GLenum type, GLuint color);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glColorP4uiv() {
		driftgl::glColorP4uiv();
	}
		
	public static native void glColorP4uiv(GLenum type, GLuint * color);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glSecondaryColorP3ui() {
		driftgl::glSecondaryColorP3ui();
	}
		
	public static native void glSecondaryColorP3ui(GLenum type, GLuint color);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glSecondaryColorP3uiv() {
		driftgl::glSecondaryColorP3uiv();
	}
		
	public static native void glSecondaryColorP3uiv(GLenum type, GLuint * color);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glMinSampleShading() {
		driftgl::glMinSampleShading();
	}
		
	public static native void glMinSampleShading(GLfloat value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBlendEquationi() {
		driftgl::glBlendEquationi();
	}
		
	public static native void glBlendEquationi(GLuint buf, GLenum mode);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBlendEquationSeparatei() {
		driftgl::glBlendEquationSeparatei();
	}
		
	public static native void glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBlendFunci() {
		driftgl::glBlendFunci();
	}
		
	public static native void glBlendFunci(GLuint buf, GLenum src, GLenum dst);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBlendFuncSeparatei() {
		driftgl::glBlendFuncSeparatei();
	}
		
	public static native void glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDrawArraysIndirect() {
		driftgl::glDrawArraysIndirect();
	}
		
	public static native void glDrawArraysIndirect(GLenum mode, const void * indirect);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDrawElementsIndirect() {
		driftgl::glDrawElementsIndirect();
	}
		
	public static native void glDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform1d() {
		driftgl::glUniform1d();
	}
		
	public static native void glUniform1d(GLint location, GLdouble x);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform2d() {
		driftgl::glUniform2d();
	}
		
	public static native void glUniform2d(GLint location, GLdouble x, GLdouble y);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform3d() {
		driftgl::glUniform3d();
	}
		
	public static native void glUniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform4d() {
		driftgl::glUniform4d();
	}
		
	public static native void glUniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform1dv() {
		driftgl::glUniform1dv();
	}
		
	public static native void glUniform1dv(GLint location, GLsizei count, GLdouble * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform2dv() {
		driftgl::glUniform2dv();
	}
		
	public static native void glUniform2dv(GLint location, GLsizei count, GLdouble * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform3dv() {
		driftgl::glUniform3dv();
	}
		
	public static native void glUniform3dv(GLint location, GLsizei count, GLdouble * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniform4dv() {
		driftgl::glUniform4dv();
	}
		
	public static native void glUniform4dv(GLint location, GLsizei count, GLdouble * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniformMatrix2dv() {
		driftgl::glUniformMatrix2dv();
	}
		
	public static native void glUniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, GLdouble * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniformMatrix3dv() {
		driftgl::glUniformMatrix3dv();
	}
		
	public static native void glUniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, GLdouble * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniformMatrix4dv() {
		driftgl::glUniformMatrix4dv();
	}
		
	public static native void glUniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, GLdouble * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniformMatrix2x3dv() {
		driftgl::glUniformMatrix2x3dv();
	}
		
	public static native void glUniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, GLdouble * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniformMatrix2x4dv() {
		driftgl::glUniformMatrix2x4dv();
	}
		
	public static native void glUniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, GLdouble * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniformMatrix3x2dv() {
		driftgl::glUniformMatrix3x2dv();
	}
		
	public static native void glUniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, GLdouble * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniformMatrix3x4dv() {
		driftgl::glUniformMatrix3x4dv();
	}
		
	public static native void glUniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, GLdouble * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniformMatrix4x2dv() {
		driftgl::glUniformMatrix4x2dv();
	}
		
	public static native void glUniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, GLdouble * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniformMatrix4x3dv() {
		driftgl::glUniformMatrix4x3dv();
	}
		
	public static native void glUniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, GLdouble * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetUniformdv() {
		driftgl::glGetUniformdv();
	}
		
	public static native void glGetUniformdv(GLuint program, GLint location, GLdouble * params);
	extern "C" JNIEXPORT /*TODO*/ GLint JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetSubroutineUniformLocation() {
		driftgl::glGetSubroutineUniformLocation();
	}
		
	public static native GLint glGetSubroutineUniformLocation(GLuint program, GLenum shadertype, GLchar * name);
	extern "C" JNIEXPORT /*TODO*/ GLuint JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetSubroutineIndex() {
		driftgl::glGetSubroutineIndex();
	}
		
	public static native GLuint glGetSubroutineIndex(GLuint program, GLenum shadertype, GLchar * name);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetActiveSubroutineUniformiv() {
		driftgl::glGetActiveSubroutineUniformiv();
	}
		
	public static native void glGetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetActiveSubroutineUniformName() {
		driftgl::glGetActiveSubroutineUniformName();
	}
		
	public static native void glGetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetActiveSubroutineName() {
		driftgl::glGetActiveSubroutineName();
	}
		
	public static native void glGetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUniformSubroutinesuiv() {
		driftgl::glUniformSubroutinesuiv();
	}
		
	public static native void glUniformSubroutinesuiv(GLenum shadertype, GLsizei count, GLuint * indices);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetUniformSubroutineuiv() {
		driftgl::glGetUniformSubroutineuiv();
	}
		
	public static native void glGetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetProgramStageiv() {
		driftgl::glGetProgramStageiv();
	}
		
	public static native void glGetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint * values);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glPatchParameteri() {
		driftgl::glPatchParameteri();
	}
		
	public static native void glPatchParameteri(GLenum pname, GLint value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glPatchParameterfv() {
		driftgl::glPatchParameterfv();
	}
		
	public static native void glPatchParameterfv(GLenum pname, GLfloat * values);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBindTransformFeedback() {
		driftgl::glBindTransformFeedback();
	}
		
	public static native void glBindTransformFeedback(GLenum target, GLuint id);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDeleteTransformFeedbacks() {
		driftgl::glDeleteTransformFeedbacks();
	}
		
	public static native void glDeleteTransformFeedbacks(GLsizei n, GLuint * ids);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGenTransformFeedbacks() {
		driftgl::glGenTransformFeedbacks();
	}
		
	public static native void glGenTransformFeedbacks(GLsizei n, GLuint * ids);
	extern "C" JNIEXPORT /*TODO*/ GLboolean JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glIsTransformFeedback() {
		driftgl::glIsTransformFeedback();
	}
		
	public static native GLboolean glIsTransformFeedback(GLuint id);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glPauseTransformFeedback() {
		driftgl::glPauseTransformFeedback();
	}
		
	public static native void glPauseTransformFeedback();
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glResumeTransformFeedback() {
		driftgl::glResumeTransformFeedback();
	}
		
	public static native void glResumeTransformFeedback();
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDrawTransformFeedback() {
		driftgl::glDrawTransformFeedback();
	}
		
	public static native void glDrawTransformFeedback(GLenum mode, GLuint id);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDrawTransformFeedbackStream() {
		driftgl::glDrawTransformFeedbackStream();
	}
		
	public static native void glDrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBeginQueryIndexed() {
		driftgl::glBeginQueryIndexed();
	}
		
	public static native void glBeginQueryIndexed(GLenum target, GLuint index, GLuint id);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glEndQueryIndexed() {
		driftgl::glEndQueryIndexed();
	}
		
	public static native void glEndQueryIndexed(GLenum target, GLuint index);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetQueryIndexediv() {
		driftgl::glGetQueryIndexediv();
	}
		
	public static native void glGetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glReleaseShaderCompiler() {
		driftgl::glReleaseShaderCompiler();
	}
		
	public static native void glReleaseShaderCompiler();
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glShaderBinary() {
		driftgl::glShaderBinary();
	}
		
	public static native void glShaderBinary(GLsizei count, GLuint * shaders, GLenum binaryformat, const void * binary, GLsizei length);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetShaderPrecisionFormat() {
		driftgl::glGetShaderPrecisionFormat();
	}
		
	public static native void glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDepthRangef() {
		driftgl::glDepthRangef();
	}
		
	public static native void glDepthRangef(GLfloat n, GLfloat f);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glClearDepthf() {
		driftgl::glClearDepthf();
	}
		
	public static native void glClearDepthf(GLfloat d);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetProgramBinary() {
		driftgl::glGetProgramBinary();
	}
		
	public static native void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramBinary() {
		driftgl::glProgramBinary();
	}
		
	public static native void glProgramBinary(GLuint program, GLenum binaryFormat, const void * binary, GLsizei length);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramParameteri() {
		driftgl::glProgramParameteri();
	}
		
	public static native void glProgramParameteri(GLuint program, GLenum pname, GLint value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUseProgramStages() {
		driftgl::glUseProgramStages();
	}
		
	public static native void glUseProgramStages(GLuint pipeline, GLbitfield stages, GLuint program);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glActiveShaderProgram() {
		driftgl::glActiveShaderProgram();
	}
		
	public static native void glActiveShaderProgram(GLuint pipeline, GLuint program);
	extern "C" JNIEXPORT /*TODO*/ GLuint JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCreateShaderProgramv() {
		driftgl::glCreateShaderProgramv();
	}
		
	public static native GLuint glCreateShaderProgramv(GLenum type, GLsizei count, GLchar *const* strings);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBindProgramPipeline() {
		driftgl::glBindProgramPipeline();
	}
		
	public static native void glBindProgramPipeline(GLuint pipeline);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDeleteProgramPipelines() {
		driftgl::glDeleteProgramPipelines();
	}
		
	public static native void glDeleteProgramPipelines(GLsizei n, GLuint * pipelines);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGenProgramPipelines() {
		driftgl::glGenProgramPipelines();
	}
		
	public static native void glGenProgramPipelines(GLsizei n, GLuint * pipelines);
	extern "C" JNIEXPORT /*TODO*/ GLboolean JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glIsProgramPipeline() {
		driftgl::glIsProgramPipeline();
	}
		
	public static native GLboolean glIsProgramPipeline(GLuint pipeline);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetProgramPipelineiv() {
		driftgl::glGetProgramPipelineiv();
	}
		
	public static native void glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform1i() {
		driftgl::glProgramUniform1i();
	}
		
	public static native void glProgramUniform1i(GLuint program, GLint location, GLint v0);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform1iv() {
		driftgl::glProgramUniform1iv();
	}
		
	public static native void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, GLint * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform1f() {
		driftgl::glProgramUniform1f();
	}
		
	public static native void glProgramUniform1f(GLuint program, GLint location, GLfloat v0);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform1fv() {
		driftgl::glProgramUniform1fv();
	}
		
	public static native void glProgramUniform1fv(GLuint program, GLint location, GLsizei count, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform1d() {
		driftgl::glProgramUniform1d();
	}
		
	public static native void glProgramUniform1d(GLuint program, GLint location, GLdouble v0);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform1dv() {
		driftgl::glProgramUniform1dv();
	}
		
	public static native void glProgramUniform1dv(GLuint program, GLint location, GLsizei count, GLdouble * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform1ui() {
		driftgl::glProgramUniform1ui();
	}
		
	public static native void glProgramUniform1ui(GLuint program, GLint location, GLuint v0);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform1uiv() {
		driftgl::glProgramUniform1uiv();
	}
		
	public static native void glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, GLuint * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform2i() {
		driftgl::glProgramUniform2i();
	}
		
	public static native void glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform2iv() {
		driftgl::glProgramUniform2iv();
	}
		
	public static native void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, GLint * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform2f() {
		driftgl::glProgramUniform2f();
	}
		
	public static native void glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform2fv() {
		driftgl::glProgramUniform2fv();
	}
		
	public static native void glProgramUniform2fv(GLuint program, GLint location, GLsizei count, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform2d() {
		driftgl::glProgramUniform2d();
	}
		
	public static native void glProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform2dv() {
		driftgl::glProgramUniform2dv();
	}
		
	public static native void glProgramUniform2dv(GLuint program, GLint location, GLsizei count, GLdouble * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform2ui() {
		driftgl::glProgramUniform2ui();
	}
		
	public static native void glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform2uiv() {
		driftgl::glProgramUniform2uiv();
	}
		
	public static native void glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, GLuint * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform3i() {
		driftgl::glProgramUniform3i();
	}
		
	public static native void glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform3iv() {
		driftgl::glProgramUniform3iv();
	}
		
	public static native void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, GLint * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform3f() {
		driftgl::glProgramUniform3f();
	}
		
	public static native void glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform3fv() {
		driftgl::glProgramUniform3fv();
	}
		
	public static native void glProgramUniform3fv(GLuint program, GLint location, GLsizei count, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform3d() {
		driftgl::glProgramUniform3d();
	}
		
	public static native void glProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform3dv() {
		driftgl::glProgramUniform3dv();
	}
		
	public static native void glProgramUniform3dv(GLuint program, GLint location, GLsizei count, GLdouble * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform3ui() {
		driftgl::glProgramUniform3ui();
	}
		
	public static native void glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform3uiv() {
		driftgl::glProgramUniform3uiv();
	}
		
	public static native void glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, GLuint * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform4i() {
		driftgl::glProgramUniform4i();
	}
		
	public static native void glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform4iv() {
		driftgl::glProgramUniform4iv();
	}
		
	public static native void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, GLint * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform4f() {
		driftgl::glProgramUniform4f();
	}
		
	public static native void glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform4fv() {
		driftgl::glProgramUniform4fv();
	}
		
	public static native void glProgramUniform4fv(GLuint program, GLint location, GLsizei count, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform4d() {
		driftgl::glProgramUniform4d();
	}
		
	public static native void glProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform4dv() {
		driftgl::glProgramUniform4dv();
	}
		
	public static native void glProgramUniform4dv(GLuint program, GLint location, GLsizei count, GLdouble * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform4ui() {
		driftgl::glProgramUniform4ui();
	}
		
	public static native void glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniform4uiv() {
		driftgl::glProgramUniform4uiv();
	}
		
	public static native void glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, GLuint * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniformMatrix2fv() {
		driftgl::glProgramUniformMatrix2fv();
	}
		
	public static native void glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniformMatrix3fv() {
		driftgl::glProgramUniformMatrix3fv();
	}
		
	public static native void glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniformMatrix4fv() {
		driftgl::glProgramUniformMatrix4fv();
	}
		
	public static native void glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniformMatrix2dv() {
		driftgl::glProgramUniformMatrix2dv();
	}
		
	public static native void glProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniformMatrix3dv() {
		driftgl::glProgramUniformMatrix3dv();
	}
		
	public static native void glProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniformMatrix4dv() {
		driftgl::glProgramUniformMatrix4dv();
	}
		
	public static native void glProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniformMatrix2x3fv() {
		driftgl::glProgramUniformMatrix2x3fv();
	}
		
	public static native void glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniformMatrix3x2fv() {
		driftgl::glProgramUniformMatrix3x2fv();
	}
		
	public static native void glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniformMatrix2x4fv() {
		driftgl::glProgramUniformMatrix2x4fv();
	}
		
	public static native void glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniformMatrix4x2fv() {
		driftgl::glProgramUniformMatrix4x2fv();
	}
		
	public static native void glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniformMatrix3x4fv() {
		driftgl::glProgramUniformMatrix3x4fv();
	}
		
	public static native void glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniformMatrix4x3fv() {
		driftgl::glProgramUniformMatrix4x3fv();
	}
		
	public static native void glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniformMatrix2x3dv() {
		driftgl::glProgramUniformMatrix2x3dv();
	}
		
	public static native void glProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniformMatrix3x2dv() {
		driftgl::glProgramUniformMatrix3x2dv();
	}
		
	public static native void glProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniformMatrix2x4dv() {
		driftgl::glProgramUniformMatrix2x4dv();
	}
		
	public static native void glProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniformMatrix4x2dv() {
		driftgl::glProgramUniformMatrix4x2dv();
	}
		
	public static native void glProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniformMatrix3x4dv() {
		driftgl::glProgramUniformMatrix3x4dv();
	}
		
	public static native void glProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glProgramUniformMatrix4x3dv() {
		driftgl::glProgramUniformMatrix4x3dv();
	}
		
	public static native void glProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, GLdouble * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glValidateProgramPipeline() {
		driftgl::glValidateProgramPipeline();
	}
		
	public static native void glValidateProgramPipeline(GLuint pipeline);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetProgramPipelineInfoLog() {
		driftgl::glGetProgramPipelineInfoLog();
	}
		
	public static native void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribL1d() {
		driftgl::glVertexAttribL1d();
	}
		
	public static native void glVertexAttribL1d(GLuint index, GLdouble x);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribL2d() {
		driftgl::glVertexAttribL2d();
	}
		
	public static native void glVertexAttribL2d(GLuint index, GLdouble x, GLdouble y);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribL3d() {
		driftgl::glVertexAttribL3d();
	}
		
	public static native void glVertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribL4d() {
		driftgl::glVertexAttribL4d();
	}
		
	public static native void glVertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribL1dv() {
		driftgl::glVertexAttribL1dv();
	}
		
	public static native void glVertexAttribL1dv(GLuint index, GLdouble * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribL2dv() {
		driftgl::glVertexAttribL2dv();
	}
		
	public static native void glVertexAttribL2dv(GLuint index, GLdouble * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribL3dv() {
		driftgl::glVertexAttribL3dv();
	}
		
	public static native void glVertexAttribL3dv(GLuint index, GLdouble * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribL4dv() {
		driftgl::glVertexAttribL4dv();
	}
		
	public static native void glVertexAttribL4dv(GLuint index, GLdouble * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribLPointer() {
		driftgl::glVertexAttribLPointer();
	}
		
	public static native void glVertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetVertexAttribLdv() {
		driftgl::glGetVertexAttribLdv();
	}
		
	public static native void glGetVertexAttribLdv(GLuint index, GLenum pname, GLdouble * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glViewportArrayv() {
		driftgl::glViewportArrayv();
	}
		
	public static native void glViewportArrayv(GLuint first, GLsizei count, GLfloat * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glViewportIndexedf() {
		driftgl::glViewportIndexedf();
	}
		
	public static native void glViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glViewportIndexedfv() {
		driftgl::glViewportIndexedfv();
	}
		
	public static native void glViewportIndexedfv(GLuint index, GLfloat * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glScissorArrayv() {
		driftgl::glScissorArrayv();
	}
		
	public static native void glScissorArrayv(GLuint first, GLsizei count, GLint * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glScissorIndexed() {
		driftgl::glScissorIndexed();
	}
		
	public static native void glScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glScissorIndexedv() {
		driftgl::glScissorIndexedv();
	}
		
	public static native void glScissorIndexedv(GLuint index, GLint * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDepthRangeArrayv() {
		driftgl::glDepthRangeArrayv();
	}
		
	public static native void glDepthRangeArrayv(GLuint first, GLsizei count, GLdouble * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDepthRangeIndexed() {
		driftgl::glDepthRangeIndexed();
	}
		
	public static native void glDepthRangeIndexed(GLuint index, GLdouble n, GLdouble f);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetFloati_v() {
		driftgl::glGetFloati_v();
	}
		
	public static native void glGetFloati_v(GLenum target, GLuint index, GLfloat * data);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetDoublei_v() {
		driftgl::glGetDoublei_v();
	}
		
	public static native void glGetDoublei_v(GLenum target, GLuint index, GLdouble * data);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDrawArraysInstancedBaseInstance() {
		driftgl::glDrawArraysInstancedBaseInstance();
	}
		
	public static native void glDrawArraysInstancedBaseInstance(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDrawElementsInstancedBaseInstance() {
		driftgl::glDrawElementsInstancedBaseInstance();
	}
		
	public static native void glDrawElementsInstancedBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDrawElementsInstancedBaseVertexBaseInstance() {
		driftgl::glDrawElementsInstancedBaseVertexBaseInstance();
	}
		
	public static native void glDrawElementsInstancedBaseVertexBaseInstance(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetInternalformativ() {
		driftgl::glGetInternalformativ();
	}
		
	public static native void glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetActiveAtomicCounterBufferiv() {
		driftgl::glGetActiveAtomicCounterBufferiv();
	}
		
	public static native void glGetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBindImageTexture() {
		driftgl::glBindImageTexture();
	}
		
	public static native void glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glMemoryBarrier() {
		driftgl::glMemoryBarrier();
	}
		
	public static native void glMemoryBarrier(GLbitfield barriers);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexStorage1D() {
		driftgl::glTexStorage1D();
	}
		
	public static native void glTexStorage1D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexStorage2D() {
		driftgl::glTexStorage2D();
	}
		
	public static native void glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexStorage3D() {
		driftgl::glTexStorage3D();
	}
		
	public static native void glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDrawTransformFeedbackInstanced() {
		driftgl::glDrawTransformFeedbackInstanced();
	}
		
	public static native void glDrawTransformFeedbackInstanced(GLenum mode, GLuint id, GLsizei instancecount);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDrawTransformFeedbackStreamInstanced() {
		driftgl::glDrawTransformFeedbackStreamInstanced();
	}
		
	public static native void glDrawTransformFeedbackStreamInstanced(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glClearBufferData() {
		driftgl::glClearBufferData();
	}
		
	public static native void glClearBufferData(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glClearBufferSubData() {
		driftgl::glClearBufferSubData();
	}
		
	public static native void glClearBufferSubData(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDispatchCompute() {
		driftgl::glDispatchCompute();
	}
		
	public static native void glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDispatchComputeIndirect() {
		driftgl::glDispatchComputeIndirect();
	}
		
	public static native void glDispatchComputeIndirect(GLintptr indirect);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCopyImageSubData() {
		driftgl::glCopyImageSubData();
	}
		
	public static native void glCopyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glFramebufferParameteri() {
		driftgl::glFramebufferParameteri();
	}
		
	public static native void glFramebufferParameteri(GLenum target, GLenum pname, GLint param);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetFramebufferParameteriv() {
		driftgl::glGetFramebufferParameteriv();
	}
		
	public static native void glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetInternalformati64v() {
		driftgl::glGetInternalformati64v();
	}
		
	public static native void glGetInternalformati64v(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glInvalidateTexSubImage() {
		driftgl::glInvalidateTexSubImage();
	}
		
	public static native void glInvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glInvalidateTexImage() {
		driftgl::glInvalidateTexImage();
	}
		
	public static native void glInvalidateTexImage(GLuint texture, GLint level);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glInvalidateBufferSubData() {
		driftgl::glInvalidateBufferSubData();
	}
		
	public static native void glInvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glInvalidateBufferData() {
		driftgl::glInvalidateBufferData();
	}
		
	public static native void glInvalidateBufferData(GLuint buffer);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glInvalidateFramebuffer() {
		driftgl::glInvalidateFramebuffer();
	}
		
	public static native void glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, GLenum * attachments);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glInvalidateSubFramebuffer() {
		driftgl::glInvalidateSubFramebuffer();
	}
		
	public static native void glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glMultiDrawArraysIndirect() {
		driftgl::glMultiDrawArraysIndirect();
	}
		
	public static native void glMultiDrawArraysIndirect(GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glMultiDrawElementsIndirect() {
		driftgl::glMultiDrawElementsIndirect();
	}
		
	public static native void glMultiDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetProgramInterfaceiv() {
		driftgl::glGetProgramInterfaceiv();
	}
		
	public static native void glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ GLuint JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetProgramResourceIndex() {
		driftgl::glGetProgramResourceIndex();
	}
		
	public static native GLuint glGetProgramResourceIndex(GLuint program, GLenum programInterface, GLchar * name);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetProgramResourceName() {
		driftgl::glGetProgramResourceName();
	}
		
	public static native void glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetProgramResourceiv() {
		driftgl::glGetProgramResourceiv();
	}
		
	public static native void glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ GLint JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetProgramResourceLocation() {
		driftgl::glGetProgramResourceLocation();
	}
		
	public static native GLint glGetProgramResourceLocation(GLuint program, GLenum programInterface, GLchar * name);
	extern "C" JNIEXPORT /*TODO*/ GLint JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetProgramResourceLocationIndex() {
		driftgl::glGetProgramResourceLocationIndex();
	}
		
	public static native GLint glGetProgramResourceLocationIndex(GLuint program, GLenum programInterface, GLchar * name);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glShaderStorageBlockBinding() {
		driftgl::glShaderStorageBlockBinding();
	}
		
	public static native void glShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexBufferRange() {
		driftgl::glTexBufferRange();
	}
		
	public static native void glTexBufferRange(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexStorage2DMultisample() {
		driftgl::glTexStorage2DMultisample();
	}
		
	public static native void glTexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTexStorage3DMultisample() {
		driftgl::glTexStorage3DMultisample();
	}
		
	public static native void glTexStorage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTextureView() {
		driftgl::glTextureView();
	}
		
	public static native void glTextureView(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBindVertexBuffer() {
		driftgl::glBindVertexBuffer();
	}
		
	public static native void glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribFormat() {
		driftgl::glVertexAttribFormat();
	}
		
	public static native void glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribIFormat() {
		driftgl::glVertexAttribIFormat();
	}
		
	public static native void glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribLFormat() {
		driftgl::glVertexAttribLFormat();
	}
		
	public static native void glVertexAttribLFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexAttribBinding() {
		driftgl::glVertexAttribBinding();
	}
		
	public static native void glVertexAttribBinding(GLuint attribindex, GLuint bindingindex);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexBindingDivisor() {
		driftgl::glVertexBindingDivisor();
	}
		
	public static native void glVertexBindingDivisor(GLuint bindingindex, GLuint divisor);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDebugMessageControl() {
		driftgl::glDebugMessageControl();
	}
		
	public static native void glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, GLuint * ids, GLboolean enabled);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDebugMessageInsert() {
		driftgl::glDebugMessageInsert();
	}
		
	public static native void glDebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, GLchar * buf);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDebugMessageCallback() {
		driftgl::glDebugMessageCallback();
	}
		
	public static native void glDebugMessageCallback(GLDEBUGPROC callback, const void * userParam);
	extern "C" JNIEXPORT /*TODO*/ GLuint JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetDebugMessageLog() {
		driftgl::glGetDebugMessageLog();
	}
		
	public static native GLuint glGetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glPushDebugGroup() {
		driftgl::glPushDebugGroup();
	}
		
	public static native void glPushDebugGroup(GLenum source, GLuint id, GLsizei length, GLchar * message);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glPopDebugGroup() {
		driftgl::glPopDebugGroup();
	}
		
	public static native void glPopDebugGroup();
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glObjectLabel() {
		driftgl::glObjectLabel();
	}
		
	public static native void glObjectLabel(GLenum identifier, GLuint name, GLsizei length, GLchar * label);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetObjectLabel() {
		driftgl::glGetObjectLabel();
	}
		
	public static native void glGetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glObjectPtrLabel() {
		driftgl::glObjectPtrLabel();
	}
		
	public static native void glObjectPtrLabel(const void * ptr, GLsizei length, GLchar * label);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetObjectPtrLabel() {
		driftgl::glGetObjectPtrLabel();
	}
		
	public static native void glGetObjectPtrLabel(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetPointerv() {
		driftgl::glGetPointerv();
	}
		
	public static native void glGetPointerv(GLenum pname, void ** params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBufferStorage() {
		driftgl::glBufferStorage();
	}
		
	public static native void glBufferStorage(GLenum target, GLsizeiptr size, const void * data, GLbitfield flags);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glClearTexImage() {
		driftgl::glClearTexImage();
	}
		
	public static native void glClearTexImage(GLuint texture, GLint level, GLenum format, GLenum type, const void * data);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glClearTexSubImage() {
		driftgl::glClearTexSubImage();
	}
		
	public static native void glClearTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBindBuffersBase() {
		driftgl::glBindBuffersBase();
	}
		
	public static native void glBindBuffersBase(GLenum target, GLuint first, GLsizei count, GLuint * buffers);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBindBuffersRange() {
		driftgl::glBindBuffersRange();
	}
		
	public static native void glBindBuffersRange(GLenum target, GLuint first, GLsizei count, GLuint * buffers, GLintptr * offsets, GLsizeiptr * sizes);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBindTextures() {
		driftgl::glBindTextures();
	}
		
	public static native void glBindTextures(GLuint first, GLsizei count, GLuint * textures);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBindSamplers() {
		driftgl::glBindSamplers();
	}
		
	public static native void glBindSamplers(GLuint first, GLsizei count, GLuint * samplers);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBindImageTextures() {
		driftgl::glBindImageTextures();
	}
		
	public static native void glBindImageTextures(GLuint first, GLsizei count, GLuint * textures);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBindVertexBuffers() {
		driftgl::glBindVertexBuffers();
	}
		
	public static native void glBindVertexBuffers(GLuint first, GLsizei count, GLuint * buffers, GLintptr * offsets, GLsizei * strides);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glClipControl() {
		driftgl::glClipControl();
	}
		
	public static native void glClipControl(GLenum origin, GLenum depth);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCreateTransformFeedbacks() {
		driftgl::glCreateTransformFeedbacks();
	}
		
	public static native void glCreateTransformFeedbacks(GLsizei n, GLuint * ids);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTransformFeedbackBufferBase() {
		driftgl::glTransformFeedbackBufferBase();
	}
		
	public static native void glTransformFeedbackBufferBase(GLuint xfb, GLuint index, GLuint buffer);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTransformFeedbackBufferRange() {
		driftgl::glTransformFeedbackBufferRange();
	}
		
	public static native void glTransformFeedbackBufferRange(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetTransformFeedbackiv() {
		driftgl::glGetTransformFeedbackiv();
	}
		
	public static native void glGetTransformFeedbackiv(GLuint xfb, GLenum pname, GLint * param);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetTransformFeedbacki_v() {
		driftgl::glGetTransformFeedbacki_v();
	}
		
	public static native void glGetTransformFeedbacki_v(GLuint xfb, GLenum pname, GLuint index, GLint * param);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetTransformFeedbacki64_v() {
		driftgl::glGetTransformFeedbacki64_v();
	}
		
	public static native void glGetTransformFeedbacki64_v(GLuint xfb, GLenum pname, GLuint index, GLint64 * param);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCreateBuffers() {
		driftgl::glCreateBuffers();
	}
		
	public static native void glCreateBuffers(GLsizei n, GLuint * buffers);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glNamedBufferStorage() {
		driftgl::glNamedBufferStorage();
	}
		
	public static native void glNamedBufferStorage(GLuint buffer, GLsizeiptr size, const void * data, GLbitfield flags);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glNamedBufferData() {
		driftgl::glNamedBufferData();
	}
		
	public static native void glNamedBufferData(GLuint buffer, GLsizeiptr size, const void * data, GLenum usage);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glNamedBufferSubData() {
		driftgl::glNamedBufferSubData();
	}
		
	public static native void glNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, const void * data);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCopyNamedBufferSubData() {
		driftgl::glCopyNamedBufferSubData();
	}
		
	public static native void glCopyNamedBufferSubData(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glClearNamedBufferData() {
		driftgl::glClearNamedBufferData();
	}
		
	public static native void glClearNamedBufferData(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void * data);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glClearNamedBufferSubData() {
		driftgl::glClearNamedBufferSubData();
	}
		
	public static native void glClearNamedBufferSubData(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data);
	extern "C" JNIEXPORT /*TODO*/ void * JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glMapNamedBuffer() {
		driftgl::glMapNamedBuffer();
	}
		
	public static native void * glMapNamedBuffer(GLuint buffer, GLenum access);
	extern "C" JNIEXPORT /*TODO*/ void * JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glMapNamedBufferRange() {
		driftgl::glMapNamedBufferRange();
	}
		
	public static native void * glMapNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
	extern "C" JNIEXPORT /*TODO*/ GLboolean JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glUnmapNamedBuffer() {
		driftgl::glUnmapNamedBuffer();
	}
		
	public static native GLboolean glUnmapNamedBuffer(GLuint buffer);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glFlushMappedNamedBufferRange() {
		driftgl::glFlushMappedNamedBufferRange();
	}
		
	public static native void glFlushMappedNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetNamedBufferParameteriv() {
		driftgl::glGetNamedBufferParameteriv();
	}
		
	public static native void glGetNamedBufferParameteriv(GLuint buffer, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetNamedBufferParameteri64v() {
		driftgl::glGetNamedBufferParameteri64v();
	}
		
	public static native void glGetNamedBufferParameteri64v(GLuint buffer, GLenum pname, GLint64 * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetNamedBufferPointerv() {
		driftgl::glGetNamedBufferPointerv();
	}
		
	public static native void glGetNamedBufferPointerv(GLuint buffer, GLenum pname, void ** params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetNamedBufferSubData() {
		driftgl::glGetNamedBufferSubData();
	}
		
	public static native void glGetNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, void * data);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCreateFramebuffers() {
		driftgl::glCreateFramebuffers();
	}
		
	public static native void glCreateFramebuffers(GLsizei n, GLuint * framebuffers);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glNamedFramebufferRenderbuffer() {
		driftgl::glNamedFramebufferRenderbuffer();
	}
		
	public static native void glNamedFramebufferRenderbuffer(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glNamedFramebufferParameteri() {
		driftgl::glNamedFramebufferParameteri();
	}
		
	public static native void glNamedFramebufferParameteri(GLuint framebuffer, GLenum pname, GLint param);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glNamedFramebufferTexture() {
		driftgl::glNamedFramebufferTexture();
	}
		
	public static native void glNamedFramebufferTexture(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glNamedFramebufferTextureLayer() {
		driftgl::glNamedFramebufferTextureLayer();
	}
		
	public static native void glNamedFramebufferTextureLayer(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glNamedFramebufferDrawBuffer() {
		driftgl::glNamedFramebufferDrawBuffer();
	}
		
	public static native void glNamedFramebufferDrawBuffer(GLuint framebuffer, GLenum buf);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glNamedFramebufferDrawBuffers() {
		driftgl::glNamedFramebufferDrawBuffers();
	}
		
	public static native void glNamedFramebufferDrawBuffers(GLuint framebuffer, GLsizei n, GLenum * bufs);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glNamedFramebufferReadBuffer() {
		driftgl::glNamedFramebufferReadBuffer();
	}
		
	public static native void glNamedFramebufferReadBuffer(GLuint framebuffer, GLenum src);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glInvalidateNamedFramebufferData() {
		driftgl::glInvalidateNamedFramebufferData();
	}
		
	public static native void glInvalidateNamedFramebufferData(GLuint framebuffer, GLsizei numAttachments, GLenum * attachments);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glInvalidateNamedFramebufferSubData() {
		driftgl::glInvalidateNamedFramebufferSubData();
	}
		
	public static native void glInvalidateNamedFramebufferSubData(GLuint framebuffer, GLsizei numAttachments, GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glClearNamedFramebufferiv() {
		driftgl::glClearNamedFramebufferiv();
	}
		
	public static native void glClearNamedFramebufferiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLint * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glClearNamedFramebufferuiv() {
		driftgl::glClearNamedFramebufferuiv();
	}
		
	public static native void glClearNamedFramebufferuiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLuint * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glClearNamedFramebufferfv() {
		driftgl::glClearNamedFramebufferfv();
	}
		
	public static native void glClearNamedFramebufferfv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat * value);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glClearNamedFramebufferfi() {
		driftgl::glClearNamedFramebufferfi();
	}
		
	public static native void glClearNamedFramebufferfi(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBlitNamedFramebuffer() {
		driftgl::glBlitNamedFramebuffer();
	}
		
	public static native void glBlitNamedFramebuffer(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
	extern "C" JNIEXPORT /*TODO*/ GLenum JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCheckNamedFramebufferStatus() {
		driftgl::glCheckNamedFramebufferStatus();
	}
		
	public static native GLenum glCheckNamedFramebufferStatus(GLuint framebuffer, GLenum target);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetNamedFramebufferParameteriv() {
		driftgl::glGetNamedFramebufferParameteriv();
	}
		
	public static native void glGetNamedFramebufferParameteriv(GLuint framebuffer, GLenum pname, GLint * param);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetNamedFramebufferAttachmentParameteriv() {
		driftgl::glGetNamedFramebufferAttachmentParameteriv();
	}
		
	public static native void glGetNamedFramebufferAttachmentParameteriv(GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCreateRenderbuffers() {
		driftgl::glCreateRenderbuffers();
	}
		
	public static native void glCreateRenderbuffers(GLsizei n, GLuint * renderbuffers);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glNamedRenderbufferStorage() {
		driftgl::glNamedRenderbufferStorage();
	}
		
	public static native void glNamedRenderbufferStorage(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glNamedRenderbufferStorageMultisample() {
		driftgl::glNamedRenderbufferStorageMultisample();
	}
		
	public static native void glNamedRenderbufferStorageMultisample(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetNamedRenderbufferParameteriv() {
		driftgl::glGetNamedRenderbufferParameteriv();
	}
		
	public static native void glGetNamedRenderbufferParameteriv(GLuint renderbuffer, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCreateTextures() {
		driftgl::glCreateTextures();
	}
		
	public static native void glCreateTextures(GLenum target, GLsizei n, GLuint * textures);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTextureBuffer() {
		driftgl::glTextureBuffer();
	}
		
	public static native void glTextureBuffer(GLuint texture, GLenum internalformat, GLuint buffer);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTextureBufferRange() {
		driftgl::glTextureBufferRange();
	}
		
	public static native void glTextureBufferRange(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTextureStorage1D() {
		driftgl::glTextureStorage1D();
	}
		
	public static native void glTextureStorage1D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTextureStorage2D() {
		driftgl::glTextureStorage2D();
	}
		
	public static native void glTextureStorage2D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTextureStorage3D() {
		driftgl::glTextureStorage3D();
	}
		
	public static native void glTextureStorage3D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTextureStorage2DMultisample() {
		driftgl::glTextureStorage2DMultisample();
	}
		
	public static native void glTextureStorage2DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTextureStorage3DMultisample() {
		driftgl::glTextureStorage3DMultisample();
	}
		
	public static native void glTextureStorage3DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTextureSubImage1D() {
		driftgl::glTextureSubImage1D();
	}
		
	public static native void glTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTextureSubImage2D() {
		driftgl::glTextureSubImage2D();
	}
		
	public static native void glTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTextureSubImage3D() {
		driftgl::glTextureSubImage3D();
	}
		
	public static native void glTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCompressedTextureSubImage1D() {
		driftgl::glCompressedTextureSubImage1D();
	}
		
	public static native void glCompressedTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCompressedTextureSubImage2D() {
		driftgl::glCompressedTextureSubImage2D();
	}
		
	public static native void glCompressedTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCompressedTextureSubImage3D() {
		driftgl::glCompressedTextureSubImage3D();
	}
		
	public static native void glCompressedTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCopyTextureSubImage1D() {
		driftgl::glCopyTextureSubImage1D();
	}
		
	public static native void glCopyTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCopyTextureSubImage2D() {
		driftgl::glCopyTextureSubImage2D();
	}
		
	public static native void glCopyTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCopyTextureSubImage3D() {
		driftgl::glCopyTextureSubImage3D();
	}
		
	public static native void glCopyTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTextureParameterf() {
		driftgl::glTextureParameterf();
	}
		
	public static native void glTextureParameterf(GLuint texture, GLenum pname, GLfloat param);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTextureParameterfv() {
		driftgl::glTextureParameterfv();
	}
		
	public static native void glTextureParameterfv(GLuint texture, GLenum pname, GLfloat * param);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTextureParameteri() {
		driftgl::glTextureParameteri();
	}
		
	public static native void glTextureParameteri(GLuint texture, GLenum pname, GLint param);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTextureParameterIiv() {
		driftgl::glTextureParameterIiv();
	}
		
	public static native void glTextureParameterIiv(GLuint texture, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTextureParameterIuiv() {
		driftgl::glTextureParameterIuiv();
	}
		
	public static native void glTextureParameterIuiv(GLuint texture, GLenum pname, GLuint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTextureParameteriv() {
		driftgl::glTextureParameteriv();
	}
		
	public static native void glTextureParameteriv(GLuint texture, GLenum pname, GLint * param);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGenerateTextureMipmap() {
		driftgl::glGenerateTextureMipmap();
	}
		
	public static native void glGenerateTextureMipmap(GLuint texture);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glBindTextureUnit() {
		driftgl::glBindTextureUnit();
	}
		
	public static native void glBindTextureUnit(GLuint unit, GLuint texture);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetTextureImage() {
		driftgl::glGetTextureImage();
	}
		
	public static native void glGetTextureImage(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetCompressedTextureImage() {
		driftgl::glGetCompressedTextureImage();
	}
		
	public static native void glGetCompressedTextureImage(GLuint texture, GLint level, GLsizei bufSize, void * pixels);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetTextureLevelParameterfv() {
		driftgl::glGetTextureLevelParameterfv();
	}
		
	public static native void glGetTextureLevelParameterfv(GLuint texture, GLint level, GLenum pname, GLfloat * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetTextureLevelParameteriv() {
		driftgl::glGetTextureLevelParameteriv();
	}
		
	public static native void glGetTextureLevelParameteriv(GLuint texture, GLint level, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetTextureParameterfv() {
		driftgl::glGetTextureParameterfv();
	}
		
	public static native void glGetTextureParameterfv(GLuint texture, GLenum pname, GLfloat * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetTextureParameterIiv() {
		driftgl::glGetTextureParameterIiv();
	}
		
	public static native void glGetTextureParameterIiv(GLuint texture, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetTextureParameterIuiv() {
		driftgl::glGetTextureParameterIuiv();
	}
		
	public static native void glGetTextureParameterIuiv(GLuint texture, GLenum pname, GLuint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetTextureParameteriv() {
		driftgl::glGetTextureParameteriv();
	}
		
	public static native void glGetTextureParameteriv(GLuint texture, GLenum pname, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCreateVertexArrays() {
		driftgl::glCreateVertexArrays();
	}
		
	public static native void glCreateVertexArrays(GLsizei n, GLuint * arrays);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glDisableVertexArrayAttrib() {
		driftgl::glDisableVertexArrayAttrib();
	}
		
	public static native void glDisableVertexArrayAttrib(GLuint vaobj, GLuint index);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glEnableVertexArrayAttrib() {
		driftgl::glEnableVertexArrayAttrib();
	}
		
	public static native void glEnableVertexArrayAttrib(GLuint vaobj, GLuint index);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexArrayElementBuffer() {
		driftgl::glVertexArrayElementBuffer();
	}
		
	public static native void glVertexArrayElementBuffer(GLuint vaobj, GLuint buffer);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexArrayVertexBuffer() {
		driftgl::glVertexArrayVertexBuffer();
	}
		
	public static native void glVertexArrayVertexBuffer(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexArrayVertexBuffers() {
		driftgl::glVertexArrayVertexBuffers();
	}
		
	public static native void glVertexArrayVertexBuffers(GLuint vaobj, GLuint first, GLsizei count, GLuint * buffers, GLintptr * offsets, GLsizei * strides);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexArrayAttribBinding() {
		driftgl::glVertexArrayAttribBinding();
	}
		
	public static native void glVertexArrayAttribBinding(GLuint vaobj, GLuint attribindex, GLuint bindingindex);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexArrayAttribFormat() {
		driftgl::glVertexArrayAttribFormat();
	}
		
	public static native void glVertexArrayAttribFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexArrayAttribIFormat() {
		driftgl::glVertexArrayAttribIFormat();
	}
		
	public static native void glVertexArrayAttribIFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexArrayAttribLFormat() {
		driftgl::glVertexArrayAttribLFormat();
	}
		
	public static native void glVertexArrayAttribLFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glVertexArrayBindingDivisor() {
		driftgl::glVertexArrayBindingDivisor();
	}
		
	public static native void glVertexArrayBindingDivisor(GLuint vaobj, GLuint bindingindex, GLuint divisor);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetVertexArrayiv() {
		driftgl::glGetVertexArrayiv();
	}
		
	public static native void glGetVertexArrayiv(GLuint vaobj, GLenum pname, GLint * param);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetVertexArrayIndexediv() {
		driftgl::glGetVertexArrayIndexediv();
	}
		
	public static native void glGetVertexArrayIndexediv(GLuint vaobj, GLuint index, GLenum pname, GLint * param);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetVertexArrayIndexed64iv() {
		driftgl::glGetVertexArrayIndexed64iv();
	}
		
	public static native void glGetVertexArrayIndexed64iv(GLuint vaobj, GLuint index, GLenum pname, GLint64 * param);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCreateSamplers() {
		driftgl::glCreateSamplers();
	}
		
	public static native void glCreateSamplers(GLsizei n, GLuint * samplers);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCreateProgramPipelines() {
		driftgl::glCreateProgramPipelines();
	}
		
	public static native void glCreateProgramPipelines(GLsizei n, GLuint * pipelines);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glCreateQueries() {
		driftgl::glCreateQueries();
	}
		
	public static native void glCreateQueries(GLenum target, GLsizei n, GLuint * ids);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetQueryBufferObjecti64v() {
		driftgl::glGetQueryBufferObjecti64v();
	}
		
	public static native void glGetQueryBufferObjecti64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetQueryBufferObjectiv() {
		driftgl::glGetQueryBufferObjectiv();
	}
		
	public static native void glGetQueryBufferObjectiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetQueryBufferObjectui64v() {
		driftgl::glGetQueryBufferObjectui64v();
	}
		
	public static native void glGetQueryBufferObjectui64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetQueryBufferObjectuiv() {
		driftgl::glGetQueryBufferObjectuiv();
	}
		
	public static native void glGetQueryBufferObjectuiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glMemoryBarrierByRegion() {
		driftgl::glMemoryBarrierByRegion();
	}
		
	public static native void glMemoryBarrierByRegion(GLbitfield barriers);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetTextureSubImage() {
		driftgl::glGetTextureSubImage();
	}
		
	public static native void glGetTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void * pixels);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetCompressedTextureSubImage() {
		driftgl::glGetCompressedTextureSubImage();
	}
		
	public static native void glGetCompressedTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void * pixels);
	extern "C" JNIEXPORT /*TODO*/ GLenum JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetGraphicsResetStatus() {
		driftgl::glGetGraphicsResetStatus();
	}
		
	public static native GLenum glGetGraphicsResetStatus();
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetnCompressedTexImage() {
		driftgl::glGetnCompressedTexImage();
	}
		
	public static native void glGetnCompressedTexImage(GLenum target, GLint lod, GLsizei bufSize, void * pixels);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetnTexImage() {
		driftgl::glGetnTexImage();
	}
		
	public static native void glGetnTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void * pixels);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetnUniformdv() {
		driftgl::glGetnUniformdv();
	}
		
	public static native void glGetnUniformdv(GLuint program, GLint location, GLsizei bufSize, GLdouble * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetnUniformfv() {
		driftgl::glGetnUniformfv();
	}
		
	public static native void glGetnUniformfv(GLuint program, GLint location, GLsizei bufSize, GLfloat * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetnUniformiv() {
		driftgl::glGetnUniformiv();
	}
		
	public static native void glGetnUniformiv(GLuint program, GLint location, GLsizei bufSize, GLint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetnUniformuiv() {
		driftgl::glGetnUniformuiv();
	}
		
	public static native void glGetnUniformuiv(GLuint program, GLint location, GLsizei bufSize, GLuint * params);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glReadnPixels() {
		driftgl::glReadnPixels();
	}
		
	public static native void glReadnPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetnMapdv() {
		driftgl::glGetnMapdv();
	}
		
	public static native void glGetnMapdv(GLenum target, GLenum query, GLsizei bufSize, GLdouble * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetnMapfv() {
		driftgl::glGetnMapfv();
	}
		
	public static native void glGetnMapfv(GLenum target, GLenum query, GLsizei bufSize, GLfloat * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetnMapiv() {
		driftgl::glGetnMapiv();
	}
		
	public static native void glGetnMapiv(GLenum target, GLenum query, GLsizei bufSize, GLint * v);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetnPixelMapfv() {
		driftgl::glGetnPixelMapfv();
	}
		
	public static native void glGetnPixelMapfv(GLenum map, GLsizei bufSize, GLfloat * values);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetnPixelMapuiv() {
		driftgl::glGetnPixelMapuiv();
	}
		
	public static native void glGetnPixelMapuiv(GLenum map, GLsizei bufSize, GLuint * values);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetnPixelMapusv() {
		driftgl::glGetnPixelMapusv();
	}
		
	public static native void glGetnPixelMapusv(GLenum map, GLsizei bufSize, GLushort * values);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetnPolygonStipple() {
		driftgl::glGetnPolygonStipple();
	}
		
	public static native void glGetnPolygonStipple(GLsizei bufSize, GLubyte * pattern);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetnColorTable() {
		driftgl::glGetnColorTable();
	}
		
	public static native void glGetnColorTable(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * table);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetnConvolutionFilter() {
		driftgl::glGetnConvolutionFilter();
	}
		
	public static native void glGetnConvolutionFilter(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void * image);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetnSeparableFilter() {
		driftgl::glGetnSeparableFilter();
	}
		
	public static native void glGetnSeparableFilter(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void * row, GLsizei columnBufSize, void * column, void * span);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetnHistogram() {
		driftgl::glGetnHistogram();
	}
		
	public static native void glGetnHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glGetnMinmax() {
		driftgl::glGetnMinmax();
	}
		
	public static native void glGetnMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void * values);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glTextureBarrier() {
		driftgl::glTextureBarrier();
	}
		
	public static native void glTextureBarrier();
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glSpecializeShader() {
		driftgl::glSpecializeShader();
	}
		
	public static native void glSpecializeShader(GLuint shader, GLchar * pEntryPoint, GLuint numSpecializationConstants, GLuint * pConstantIndex, GLuint * pConstantValue);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glMultiDrawArraysIndirectCount() {
		driftgl::glMultiDrawArraysIndirectCount();
	}
		
	public static native void glMultiDrawArraysIndirectCount(GLenum mode, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glMultiDrawElementsIndirectCount() {
		driftgl::glMultiDrawElementsIndirectCount();
	}
		
	public static native void glMultiDrawElementsIndirectCount(GLenum mode, GLenum type, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
	extern "C" JNIEXPORT /*TODO*/ void JNICALL Java_org_eclipse_fx_drift_internal_driftgl_DriftGL_glPolygonOffsetClamp() {
		driftgl::glPolygonOffsetClamp();
	}
		
	public static native void glPolygonOffsetClamp(GLfloat factor, GLfloat units, GLfloat clamp);
	
}

