// Aseprite
// Copyright (C) 2018-2020  Igara Studio S.A.
// Copyright (C) 2001-2018  David Capello
//
// This program is distributed under the terms of
// the End-User License Agreement for Aseprite.

#ifdef __ASEPRITE_CONFIG_H
#error You cannot use config.h two times
#endif

#define __ASEPRITE_CONFIG_H

// In MSVC
#ifdef _MSC_VER
  // Avoid warnings about insecure standard C++ functions
  #ifndef _CRT_SECURE_NO_WARNINGS
  #define _CRT_SECURE_NO_WARNINGS
  #endif

  // Disable warning C4355 in MSVC: 'this' used in base member initializer list
  #pragma warning(disable:4355)

  // Disable warning C4710 in MSVC: function not inlined (generated by MSVC header files)
  // https://docs.microsoft.com/en-us/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4710
  #pragma warning(disable:4710)
#endif

#include "base/base.h"
#include "base/debug.h"
#include "base/log.h"