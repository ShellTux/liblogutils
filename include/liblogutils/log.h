#ifndef LIBLOGUTILS_PRINT_H
#define LIBLOGUTILS_PRINT_H

/*******************************************************************************
 * Project                            _ _ _     _                   _   _ _
 *                                   | (_) |   | |                 | | (_) |
 *                                   | |_| |__ | | ___   __ _ _   _| |_ _| |___
 *                                   | | | '_ \| |/ _ \ / _` | | | | __| | / __|
 *                                   | | | |_) | | (_) | (_| | |_| | |_| | \__ \
 *                                   |_|_|_.__/|_|\___/ \__, |\__,_|\__|_|_|___/
 *                                                       __/ |
 *                                                      |___/
 *
 *
 * Author: Luís Góis
 *
 * This software is licensed as described in the file LICENSE, which
 * you should have received as part of this distribution.
 *
 * You may opt to use, copy, modify, merge, publish, distribute and/or sell
 * copies of the Software, and permit persons to whom the Software is
 * furnished to do so, under the terms of the LICENSE file.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ***************************************************************************/

#include "liblogutils/levels.h"

#include <stdio.h>

int logfprintf(FILE *file, const Level level, const char *const format, ...);
int logprintf(const Level level, const char *const format, ...);
int logsprintf(char *string, const Level level, const char *const format, ...);
int logsnprintf(char *string, const size_t size, const Level level, const char *const format, ...);

#endif // !LIBLOGUTILS_PRINT_H
