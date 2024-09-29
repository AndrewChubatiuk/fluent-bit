/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*  Fluent Bit
 *  ==========
 *  Copyright (C) 2015-2024 The Fluent Bit Authors
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef FLB_MOTD_H
#define FLB_MOTD_H

static unsigned char flb_motd_text[] = {
    0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x5f, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x5f, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f,
    0x5f, 0x20, 0x5f, 0x20, 0x5f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x20, 0x5f,
    0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x0a, 0x7c, 0x20, 0x20, 0x5f, 0x5f, 0x5f,
    0x7c, 0x20, 0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x20,
    0x20, 0x7c, 0x20, 0x5f, 0x5f, 0x5f, 0x20, 0x28, 0x5f, 0x29, 0x20, 0x7c,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x5f, 0x5f,
    0x5f, 0x5f, 0x20, 0x7c, 0x2f, 0x20, 0x5f, 0x5f, 0x20, 0x20, 0x5c, 0x0a,
    0x7c, 0x20, 0x7c, 0x5f, 0x20, 0x20, 0x7c, 0x20, 0x7c, 0x5f, 0x20, 0x20,
    0x20, 0x5f, 0x20, 0x20, 0x5f, 0x5f, 0x5f, 0x20, 0x5f, 0x20, 0x5f, 0x5f,
    0x20, 0x7c, 0x20, 0x7c, 0x5f, 0x20, 0x20, 0x7c, 0x20, 0x7c, 0x5f, 0x2f,
    0x20, 0x2f, 0x5f, 0x7c, 0x20, 0x7c, 0x5f, 0x20, 0x20, 0x5f, 0x5f, 0x20,
    0x20, 0x20, 0x5f, 0x5f, 0x20, 0x20, 0x20, 0x2f, 0x20, 0x2f, 0x60, 0x27,
    0x20, 0x2f, 0x20, 0x2f, 0x27, 0x0a, 0x7c, 0x20, 0x20, 0x5f, 0x7c, 0x20,
    0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x2f, 0x20, 0x5f,
    0x20, 0x5c, 0x20, 0x27, 0x5f, 0x20, 0x5c, 0x7c, 0x20, 0x5f, 0x5f, 0x7c,
    0x20, 0x7c, 0x20, 0x5f, 0x5f, 0x5f, 0x20, 0x5c, 0x20, 0x7c, 0x20, 0x5f,
    0x5f, 0x7c, 0x20, 0x5c, 0x20, 0x5c, 0x20, 0x2f, 0x20, 0x2f, 0x20, 0x20,
    0x20, 0x5c, 0x20, 0x5c, 0x20, 0x20, 0x2f, 0x20, 0x2f, 0x20, 0x20, 0x0a,
    0x7c, 0x20, 0x7c, 0x20, 0x20, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x5f,
    0x7c, 0x20, 0x7c, 0x20, 0x20, 0x5f, 0x5f, 0x2f, 0x20, 0x7c, 0x20, 0x7c,
    0x20, 0x7c, 0x20, 0x7c, 0x5f, 0x20, 0x20, 0x7c, 0x20, 0x7c, 0x5f, 0x2f,
    0x20, 0x2f, 0x20, 0x7c, 0x20, 0x7c, 0x5f, 0x20, 0x20, 0x20, 0x5c, 0x20,
    0x56, 0x20, 0x2f, 0x2e, 0x5f, 0x5f, 0x5f, 0x2f, 0x20, 0x2f, 0x2e, 0x2f,
    0x20, 0x2f, 0x5f, 0x5f, 0x5f, 0x0a, 0x5c, 0x5f, 0x7c, 0x20, 0x20, 0x20,
    0x7c, 0x5f, 0x7c, 0x5c, 0x5f, 0x5f, 0x2c, 0x5f, 0x7c, 0x5c, 0x5f, 0x5f,
    0x5f, 0x7c, 0x5f, 0x7c, 0x20, 0x7c, 0x5f, 0x7c, 0x5c, 0x5f, 0x5f, 0x7c,
    0x20, 0x5c, 0x5f, 0x5f, 0x5f, 0x5f, 0x2f, 0x7c, 0x5f, 0x7c, 0x5c, 0x5f,
    0x5f, 0x7c, 0x20, 0x20, 0x20, 0x5c, 0x5f, 0x2f, 0x20, 0x5c, 0x5f, 0x5f,
    0x5f, 0x5f, 0x28, 0x5f, 0x29, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x2f, 0x0a,
    0x0a, 0x0a,
};

#endif


