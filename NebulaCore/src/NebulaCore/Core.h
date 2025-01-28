#pragma once

#ifdef NC_PLATFORM_WINDOWS
	#ifdef NC_BUILD_DLL
		#define NEBULACORE_API _declspec(dllexport)
	#else
		#define NEBULACORE_API __declspec(dllimport)
	#endif
#else
	#error NebulaCore only supports Windows!
#endif