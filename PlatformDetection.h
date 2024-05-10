/*
*   BSD 3-Clause License, see file labled 'LICENSE' for the full License.
*   Copyright (c) 2024, Peter Ferranti
*   All rights reserved.
*/

#ifndef ___PDH___
#define ___PDH___
#ifdef _WIN32
	#ifdef _WIN64
        #define _BUILD_PLATFORM_WINDOWS 1
	#else
        #define _BUILD_PLATFORM_WINDOWS 2
	#endif
#elif defined(__APPLE__) || defined(__MACH__)
	#include <TargetConditionals.h>
	#if TARGET_IPHONE_SIMULATOR == 1
        #define _BUILD_PLATFORM_APPLE 1
	#elif TARGET_OS_IPHONE == 1
        #define _BUILD_PLATFORM_APPLE 2
	#elif TARGET_OS_MAC == 1
        #define _BUILD_PLATFORM_APPLE 3
    #else
        #define _BUILD_PLATFORM_APPLE 4
	#endif
#elif defined(__ANDROID__)
    #define _BUILD_PLATFORM_ANDROID 1
#elif defined(__linux__)
    #define _BUILD_PLATFORM_LINUX 1
#else
    #define _BUILD_PLATFORM_UNKNOWN 1
#endif
#endif