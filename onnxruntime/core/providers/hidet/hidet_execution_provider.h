// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef HIDET_EXECUTION_PROVIDER_H
#define HIDET_EXECUTION_PROVIDER_H

#include <string>
#include <vector>
#include <memory>
#include <unordered_map>

#include "core/common/logging/logging.h"
#include "core/framework/execution_provider.h"
#include "core/platform/ort_mutex.h"

namespace onnxruntime {
class Graph;
class NodeArg;

namespace hidet {

class HidetExecutionProvider : public IExecutionProvider {
 public:

};

}  // namespace hidet
}  // namespace onnxruntime

#endif  // HIDET_EXECUTION_PROVIDER_H
