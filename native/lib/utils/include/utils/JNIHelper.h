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
#ifndef JNIHELPER_H_
#define JNIHELPER_H_

#include <jni.h>


class JNIHelper {

public:
	static void Initialize(JavaVM* jvm);

	static bool IsThreadAttached();
	static void AttachThread();
	static void ReleaseThread();

	static JNIEnv* GetJNIEnv(bool autoAttach);

private:
	static JavaVM* jvm;
	
};


#endif /* JNIHELPER_H_ */
