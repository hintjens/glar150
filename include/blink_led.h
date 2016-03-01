/*  =========================================================================
    blink_led - Control server LEDs

    Copyright (c) the Contributors as noted in the AUTHORS file.       
    This file is part of the Blink Project.

    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.           
    =========================================================================
*/

#ifndef BLINK_LED_H_INCLUDED
#define BLINK_LED_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

//  @interface
//  Create a new LED instance; the valid names are "wlan" (red), "lan" (green
//  center), "wan" (green edge).
BLINK_EXPORT blink_led_t *
    blink_led_new (void);

//  Switch the LED on; returns 0 if successful, else -1.
BLINK_EXPORT int *
    blink_led_on (blink_led_t *self);

//  Switch the LED off; returns 0 if successful, else -1.
BLINK_EXPORT int *
    blink_led_off (blink_led_t *self);

//  Destroy the blink_led
BLINK_EXPORT void
    blink_led_destroy (blink_led_t **self_p);

//  Self test of this class
BLINK_EXPORT void
    blink_led_test (bool verbose);
//  @end

#ifdef __cplusplus
}
#endif

#endif
