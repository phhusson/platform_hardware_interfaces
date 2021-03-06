/*
 * Copyright (C) 2020 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#define LOG_TAG "android.hardware.boot@1.2-service"

#include <android/hardware/boot/1.2/IBootControl.h>
#include <hidl/LegacySupport.h>

using android::hardware::defaultPassthroughServiceImplementation;
using IBootControl_V1_0 = android::hardware::boot::V1_0::IBootControl;
using IBootControl_V1_2 = android::hardware::boot::V1_2::IBootControl;

int main(int /* argc */, char* /* argv */[]) {
    return defaultPassthroughServiceImplementation<IBootControl_V1_0, IBootControl_V1_2>();
}
