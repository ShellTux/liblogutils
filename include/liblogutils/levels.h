#ifndef LIBLOGUTILS_LEVELS_H
#define LIBLOGUTILS_LEVELS_H

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

#include "liblogutils/ansi-colors.h"

#define LEVELS                      \
	LEVEL(OK, ANSI_GREEN)       \
	LEVEL(INFO, ANSI_BLUE)      \
	LEVEL(WARNING, ANSI_YELLOW) \
	LEVEL(ERROR, ANSI_RED)      \
	LEVEL(FATAL, ANSI_RED)      \
	LEVEL(DEBUG, ANSI_WHITE)    \
	LEVEL(TRACE, ANSI_WHITE)

typedef enum {
#define LEVEL(ENUM, COLOR) ENUM,
	LEVELS
#undef LEVEL
} Level;

char *levelString(const Level level);
char *levelColor(const Level level);

#define LEVEL_FORMAT(LEVEL) \
	"%s%-2s%-8s%s%s ", levelColor(level), "[", levelString(level), "]"


#endif // !LIBLOGUTILS_LEVELS_H
