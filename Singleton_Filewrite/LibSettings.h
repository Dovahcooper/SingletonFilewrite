#pragma once

#ifdef SINGLETON_WRITE_EXPORTS
#define LIB_API __declspec(dllexport)
#elif SINGLETON_WRITE_IMPORTS
#define LIB_API __declspec(dllimport)
#else
#define LIB_API
#endif