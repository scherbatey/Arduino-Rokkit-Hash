/*
 * RokkitHash - Arduino port for Paul Hsieh's "SuperFastHash"
 *
 * A very quick hash function, (c) Paul Hsieh
 *
 * See http://www.azillionmonkeys.com/qed/hash.html for more information
 * about its inner workings
 *
 * - Initial Arduino version: 2014 Alex K
 * - 8-bit improvements: robtillaart
 * - Current maintainer: SukkoPera <software@sukkology.net>
 *
 * See http://forum.arduino.cc/index.php?topic=226686.0 for some talk
 * about the various improvements.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef _ROKKIT_HASH_H_
#define _ROKKIT_HASH_H_

#include <inttypes.h>

#define ROKKIT_ENABLE_8BIT_OPTIMIZATIONS
#define ROKKIT_ENABLE_FLASH_FUNCTIONS

uint32_t rokkit (const char *data, uint16_t len, uint32_t seed);
uint32_t rokkit (const char *data, uint16_t len);

#ifdef ROKKIT_ENABLE_FLASH_FUNCTIONS

#include <Arduino.h>

uint32_t rokkit (const __FlashStringHelper *data, uint16_t len, uint32_t seed);
uint32_t rokkit (const __FlashStringHelper *data, uint16_t len);

#endif

#endif
