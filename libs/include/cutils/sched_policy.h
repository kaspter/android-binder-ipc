/*
 * Copyright (C) 2007 The Android Open Source Project
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

#ifndef __CUTILS_SCHED_POLICY_H
#define __CUTILS_SCHED_POLICY_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    SP_BACKGROUND = 0,
    SP_FOREGROUND = 1,
} SchedPolicy;

inline int set_sched_policy(int tid, SchedPolicy policy) {}
inline int get_sched_policy(int tid, SchedPolicy *policy) { return -1; }

#ifdef __cplusplus
}
#endif

#endif /* __CUTILS_SCHED_POLICY_H */ 
