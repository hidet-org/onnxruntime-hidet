// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#include "onnxruntime_c_api.h"

struct OrtHidetProviderOptionsV2 {
  int device_id;                                           // cuda device id.
};
