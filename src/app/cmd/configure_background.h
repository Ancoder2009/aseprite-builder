// Aseprite
// Copyright (C) 2001-2015  David Capello
//
// This program is distributed under the terms of
// the End-User License Agreement for Aseprite.

#ifndef APP_CMD_CONFIGURE_BACKGROUND_H_INCLUDED
#define APP_CMD_CONFIGURE_BACKGROUND_H_INCLUDED
#pragma once

#include "app/cmd_sequence.h"

namespace doc {
  class Layer;
}

namespace app {
namespace cmd {
  using namespace doc;

  class ConfigureBackground : public CmdSequence {
  public:
    ConfigureBackground(Layer* layer);
  };

} // namespace cmd
} // namespace app

#endif
