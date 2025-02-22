#pragma once
// SPDX-License-Identifier: MIT
// Copyright 2020 Andy Maloney <asmaloney@gmail.com>

#include <cstdint>

namespace e57
{
   /// The file format major version number. The value shall be 1.
   /// @remark E57 Standard Table 1 - Format of the E57 File Header Section
   constexpr uint32_t E57_FORMAT_MAJOR = 1;

   /// The file format minor version number. The value shall be 0.
   /// @remark E57 Standard Table 1 - Format of the E57 File Header Section
   constexpr uint32_t E57_FORMAT_MINOR = 0;
}
