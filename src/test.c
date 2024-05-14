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
#include "liblogutils/log.h"

int main(void)
{
#define LEVEL(ENUM, COLOR) logprintf(ENUM, "0b%b = %d", 0b101, 0b101);
	LEVELS
#undef LEVEL
	return 0;
}
