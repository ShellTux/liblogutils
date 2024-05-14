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

#include "liblogutils/log.h"

#include "liblogutils/ansi-colors.h"
#include "liblogutils/levels.h"

#include <stdarg.h>
#include <stdio.h>

int logfprintf(FILE *file, const Level level, const char *const format, ...)
{
	va_list va_args;
	va_start(va_args, format);
	const int written = fprintf(file, LEVEL_FORMAT(level), ANSI_RESET)
	                    + vfprintf(file, format, va_args)
	                    + fprintf(file, "\n");
	va_end(va_args);

	return written;
}

int logprintf(const Level level, const char *const format, ...)
{
	va_list va_args;
	va_start(va_args, format);
	const int written = fprintf(stdout, LEVEL_FORMAT(level), ANSI_RESET)
	                    + vfprintf(stdout, format, va_args)
	                    + fprintf(stdout, "\n");
	va_end(va_args);

	return written;
}
