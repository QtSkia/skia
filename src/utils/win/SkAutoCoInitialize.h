/*
 * Copyright 2011 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef SkAutoCo_DEFINED
#define SkAutoCo_DEFINED

#include "include/core/SkTypes.h"

#ifdef SK_BUILD_FOR_WIN

#include "include/private/SkNoncopyable.h"
#include "src/core/SkLeanWindows.h"

#pragma comment(lib, "FontSub.lib")
#pragma comment(lib, "Ole32.lib")
#pragma comment(lib, "OleAut32.lib")
#pragma comment(lib, "User32.lib")
#pragma comment(lib, "Usp10.lib")
#pragma comment(lib, "OpenGL32.lib")
#pragma comment(lib, "Advapi32.lib")
#pragma comment(lib, "Gdi32.lib")
/**
 * An instance of this class initializes COM on creation
 * and closes the COM library on destruction.
 */
class SkAutoCoInitialize : SkNoncopyable {
private:
    HRESULT fHR;
public:
    SkAutoCoInitialize();
    ~SkAutoCoInitialize();
    bool succeeded();
};

#endif  // SK_BUILD_FOR_WIN
#endif  // SkAutoCo_DEFINED
