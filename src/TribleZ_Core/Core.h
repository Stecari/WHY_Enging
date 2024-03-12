#pragma once


#ifdef TZ_PLATFORM_WINDOWS	//定义平台，只为Windows设计
	#ifdef TZ_BUILD_DLL			//假如这个文件是DLL文件，就定义这个
		#define TZ_API __declspec(dllexport)
	#else						//不然定义这个
		#define TZ_API __declspec(dllimport)
	#endif TZ_BUILD_DLL
#else						//平台错误或者未定义会报错
	#error TribleZ only build for windows!
#endif TZ_PLATFORM_WINDOWS
