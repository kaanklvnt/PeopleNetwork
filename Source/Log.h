#pragma once

#include <iostream>
#include <sstream>

#ifdef _WIN32
	#define WIN32_LEAN_AND_MEAN
	#include <Windows.h>
	#define LOG_ERROR(...) { std::stringstream ss; ss << __VA_ARGS__; MessageBoxA(NULL, ss.str().c_str(), "Runtime error!", MB_ICONHAND | MB_OK); }
#else
	#define LOG_ERROR(...) { std::cerr << __VA_ARGS__ << '\n'; std::system("pause"); }
#endif
