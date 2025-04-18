// Copyright 2017 The Ray Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#pragma once

#include <cstddef>
#include <string>
namespace ray {
namespace asio {
namespace testing {

/*
 * Get the random delay to be injected
 * for the given asio post event.
 */
int64_t GetDelayUs(const std::string &name);

/*
 * Initialize the asio delay chaos framework (i.e. DelayManager).
 * Should be called once before any asio posts.
 */
void Init();
}  // namespace testing
}  // namespace asio
}  // namespace ray
