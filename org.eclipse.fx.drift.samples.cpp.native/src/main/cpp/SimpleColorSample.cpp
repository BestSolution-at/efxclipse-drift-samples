
#include <jni.h>

#include <sstream>
#include <string>
#include <cstring>
#include <iostream>
#include <thread>
#include <mutex>


#include <GL/glew.h>

#include <minctx.h>

#include <driftcpp.h>


namespace SimpleColorSample {

	struct RendererInstance {
		JavaVM* vm;
		jobject javaRenderer;
		bool running;
		std::mutex mutex;
		std::thread* thread;

		minctx::Context* glContext;

		driftfx::Renderer* renderer;
		driftfx::Swapchain* swapchain;

		driftfx::TransferType* txType;

		GLuint fb;


		int widths[10];
		int heights[10];
		int idx = 0;
	};


	void beforeLoop(RendererInstance* instance) {
		std::cout << "beforeLoop for " << instance << std::endl;

		instance->glContext = minctx::CreateContext(nullptr, 4, 2);

		std::cout << "glContext = " << instance->glContext << std::endl;

		bool contextIsCurrent = minctx::MakeContextCurrent(instance->glContext);
        
        if (contextIsCurrent) {
            if (GLEW_OK == glewInit()) {
                
                glGenFramebuffers(1, &instance->fb);
                
                
            } else {
                std::cerr << "Failed to initialize glew - exect application to die." << std::endl << std::flush;
            }
        } else {
            std::cerr << "Failed to make opengl context " << instance->glContext << " current - expect application to die." << std::endl << std::flush;
        }
	}

	void afterLoop(RendererInstance* instance) {
		std::cout << "afterLoop for " << instance << std::endl;
	
        delete instance->swapchain;
        instance->swapchain = nullptr;
        
		glDeleteFramebuffers(1, &instance->fb);

		minctx::DestroyContext(instance->glContext);

	}

	void recreateSwapchain(RendererInstance* instance) {
		std::cout << "recreateSwapchain for " << instance << std::endl;
		if (instance->swapchain != nullptr) {
			delete instance->swapchain;
			instance->swapchain = nullptr;
		}

		driftfx::SwapchainConfig cfg;
		cfg.imageCount = 2;
		cfg.size = instance->renderer->getSize();
		std::cout << " using size " << cfg.size.x << " / " << cfg.size.y << std::endl;
		std::cout << " using txmode " << instance->txType->getId() << std::endl;
		cfg.transferType = instance->txType;

		instance->swapchain = instance->renderer->createSwapchain(cfg);
	}

	bool isSameSize(driftfx::Renderer* renderer, driftfx::Swapchain* swapchain) {
		auto cfg = swapchain->getConfig();
		auto surface = renderer->getSize();
		return surface.x == cfg.size.x && surface.y == cfg.size.y;
	}


	// uses the last 10 frames size data to prevent permanent recreation of a swapchain during resizing
	bool needsResize(RendererInstance* instance) {
		auto size = instance->renderer->getSize();

		instance->widths[instance->idx] = size.x;
		instance->heights[instance->idx] = size.y;

		instance->idx++;
		instance->idx = instance->idx % 10;

		bool noChange = true;
		for (int i = 0; i < 10; i++) {
			if (size.x != instance->widths[i]) {
				noChange = false;
				break;
			}
			if (size.y != instance->heights[i]) {
				noChange = false;
				break;
			}
		}

		if (noChange) {
			auto cfg = instance->swapchain->getConfig();
			if (cfg.size.x != size.x || cfg.size.y != size.y) {
				return true;
			}
		}

		return false;
	}


	void checkFb() {
		GLenum status = glCheckFramebufferStatus(GL_FRAMEBUFFER);
		if (status != GL_FRAMEBUFFER_COMPLETE) {
			std::cout << "Framebuffer incomplete!" << std::endl;

			switch (status) {
			case GL_FRAMEBUFFER_COMPLETE: break;
			case GL_FRAMEBUFFER_UNDEFINED: std::cout << "GL_FRAMEBUFFER_UNDEFINED" << std::endl; break;
			case GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT: std::cout << "GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT" << std::endl; break;
			case GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT: std::cout << "GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT" << std::endl; break;
			case GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER: std::cout << "GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER" << std::endl; break;
			case GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER: std::cout << "GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER" << std::endl; break;
			case GL_FRAMEBUFFER_UNSUPPORTED: std::cout << "GL_FRAMEBUFFER_UNSUPPORTED" << std::endl; break;
			case GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE: std::cout << "GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE" << std::endl; break;
			case GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS: std::cout << "GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS" << std::endl; break;
			default: std::cout << "Unknown framebuffer issue " << status << std::endl; break;
			}

		}
	}

	void onLoop(RendererInstance* instance) {
		if (instance->swapchain == nullptr || needsResize(instance) || instance->txType != instance->swapchain->getConfig().transferType) {
			recreateSwapchain(instance);
		}

		driftfx::RenderTarget* target = instance->swapchain->acquire();

		glBindFramebuffer(GL_FRAMEBUFFER, instance->fb);
		glFramebufferTexture(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, driftfx::GLRenderer::getGLTextureId(target), 0);

		checkFb();

		glClearColor(0.506, 0.588, 0.561, 1);
		glClear(GL_COLOR_BUFFER_BIT);

		// three color check rects
		glEnable(GL_SCISSOR_TEST);
		glScissor(10, 10, 50, 50);
		glViewport(10, 10, 50, 50);
		glClearColor(1, 0, 0, 1);
		glClear(GL_COLOR_BUFFER_BIT);

		glScissor(70, 10, 50, 50);
		glViewport(10, 10, 50, 50);
		glClearColor(0, 1, 0, 1);
		glClear(GL_COLOR_BUFFER_BIT);

		glScissor(130, 10, 50, 50);
		glViewport(10, 10, 50, 50);
		glClearColor(0, 0, 1, 1);
		glClear(GL_COLOR_BUFFER_BIT);
		glDisable(GL_SCISSOR_TEST);


		glFlush();

		glBindFramebuffer(GL_FRAMEBUFFER, 0);

		instance->swapchain->present(target);
	}

	void mainLoop(RendererInstance* instance) {
		std::cout << "Starting mainLoop for " << instance << std::endl;

		JNIEnv* env;

		// first we need to attach the thread to the jvm
		jint stat = instance->vm->GetEnv((void**)&env, JNI_VERSION_1_6);
		std::cout << "stat = " << stat << std::endl;
		if (stat == JNI_EDETACHED) {
			std::cout << "attaching thread to jvm" << std::endl;
			// attach
			std::ostringstream os;
			os << "C++ Thread id: " << std::this_thread::get_id();
			JavaVMAttachArgs args;
			args.version = JNI_VERSION_1_6;
			// copy the string
			auto strSize = os.str().size() + 1;
			char* buf = new char[strSize];
			memcpy(buf, os.str().c_str(), strSize);
			args.name = buf;
			args.group = NULL;
			jint attachResult = instance->vm->AttachCurrentThreadAsDaemon((void**)&env, &args);
			if (attachResult != JNI_OK) {
				std::cerr << "Could not attach thread to jvm!!" << std::endl;
			}
		}
		std::cout << "done attaching thread" << std::endl;

		std::cout << " calling driftfx::initializeRenderer(" << env << ", " << instance->javaRenderer << ")" << std::endl;
		
		instance->renderer = driftfx::initializeRenderer(env, instance->javaRenderer);

		auto size = instance->renderer->getSize();
		std::cout << "* Renderer#getSize(): " << size.x << " / " << size.y << std::endl;
		auto logicalSize = instance->renderer->getLogicalSize();
		std::cout << "* Renderer#getLogicalSize(): " << logicalSize.x << " / " << logicalSize.y << std::endl;
		auto screenScale = instance->renderer->getScreenScale();
		std::cout << "* Renderer#getScreenScale(): " << screenScale.x << " / " << screenScale.y << std::endl;
		auto userScale = instance->renderer->getUserScale();
		std::cout << "* Renderer#getUserScale(): " << userScale.x << " / " << userScale.y << std::endl;

		beforeLoop(instance);

		while (instance->running) {


			onLoop(instance);

			std::this_thread::sleep_for(std::chrono::milliseconds(10));
		}

		afterLoop(instance);

		delete instance->renderer;

		// we need to detach the thread from the jvm
		if (stat == JNI_EDETACHED) {
			// if it was not attached by us we wont detach it!
			jint detachResult = instance->vm->DetachCurrentThread();
			if (detachResult != JNI_OK) {
				std::cerr << "Could not detach thread from jvm!!!" << std::endl;
			}
		}

		std::cout << "Exiting mainLoop for " << instance << std::endl;
	}


    void start(RendererInstance* instance) {
        std::cout << "start for " << instance << std::endl;
        instance->mutex.lock();
        if (!instance->running) {
            instance->running = true;
            if (instance->thread != nullptr) {
                std::cout << "tread->join()" << std::endl;
                instance->thread->join();
            }
            instance->thread = new std::thread(mainLoop, instance);
        }
        instance->mutex.unlock();
    }

	void stop(RendererInstance* instance) {
        std::cout << "stop for " << instance << std::endl;
		instance->mutex.lock();
		instance->running = false;
        instance->mutex.unlock();
	}
}


extern "C" JNIEXPORT jlong JNICALL Java_org_eclipse_fx_drift_samples_cpp_SimpleColorSample_nInitialize(JNIEnv * env, jclass cls, jobject _renderer) {
	JavaVM* vm;
	env->GetJavaVM(&vm);

	auto instance = new SimpleColorSample::RendererInstance();
	instance->vm = vm;
	instance->javaRenderer = env->NewGlobalRef(_renderer);

	return (jlong) instance;
}

extern "C" JNIEXPORT void JNICALL Java_org_eclipse_fx_drift_samples_cpp_SimpleColorSample_nDispose(JNIEnv * env, jclass cls, jlong _instance) {
	auto instance = (SimpleColorSample::RendererInstance*) _instance;

	std::cout << "nDispose" << std::endl;

	delete instance;
}

extern "C" JNIEXPORT void JNICALL Java_org_eclipse_fx_drift_samples_cpp_SimpleColorSample_nStart(JNIEnv * env, jclass cls, jlong _instance, jobject _javaTransferType) {
	auto instance = (SimpleColorSample::RendererInstance*)_instance;

	instance->txType = driftfx::getTransferType(env, _javaTransferType);

	std::cout << "using txmode " << instance->txType->getId() << std::endl;

	if(!instance->txType->isAvailable()) {
		std::cout << "TransferMode " << instance->txType->getId() << " is not available!" << std::endl;
		return;
	}

	std::cout << "nStart" << std::endl;

	SimpleColorSample::start(instance);
}

extern "C" JNIEXPORT void JNICALL Java_org_eclipse_fx_drift_samples_cpp_SimpleColorSample_nStop(JNIEnv * env, jclass cls, jlong _instance) {
	auto instance = (SimpleColorSample::RendererInstance*)_instance;

	SimpleColorSample::stop(instance);
	std::cout << "nStop" << std::endl;
}

extern "C" JNIEXPORT void JNICALL Java_org_eclipse_fx_drift_samples_cpp_SimpleColorSample_nInit(JNIEnv * env, jclass cls, jobject _classLoader) {
	std::cout << "nInit " << _classLoader << std::endl;
	driftfx::initialize(env, _classLoader);
}
