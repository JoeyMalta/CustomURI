#pragma once

#include <iostream>

#ifdef VRMBAUTH_EXPORTS
#define VRMBALIBRARY_API __declspec(dllexport)
#else
#define VRMBALIBRARY_API __declspec(dllimport)
#endif

typedef void (*callback)(void* cb_arg, const wchar_t*, const wchar_t*);

extern "C" VRMBALIBRARY_API void getGoogleToken(const wchar_t* APIKey, const wchar_t* APISecret, void* cb_arg, callback externalCallback );