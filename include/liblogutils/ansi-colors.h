#ifndef LIBLOGUTILS_ANSI_COLORS_H
#define LIBLOGUTILS_ANSI_COLORS_H

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

#define ANSI_RESET        "\033[0m"
#define ANSI_BLUE         "\033[34m"
#define ANSI_GREEN        "\033[32m"
#define ANSI_YELLOW       "\033[33m"
#define ANSI_RED          "\033[31m"
#define ANSI_PURPLE       "\033[35m"
#define ANSI_CYAN         "\033[36m"
#define ANSI_WHITE        "\033[37m"
#define ANSI_BOLD(x)      "\033[1m" x
#define ANSI_UNDERLINE(x) "\033[4m" x
#define ANSI_BLINK(x)     "\033[5m" x
#define ANSI_INVERT(x)    "\033[7m" x
#define ANSI_HIDDEN(x)    "\033[8m" x
#define ANSI_DIM(x)       "\033[2m" x

#endif // !LIBLOGUTILS_ANSI_COLORS_H
