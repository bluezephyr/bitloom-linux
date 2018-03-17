/*
 * This task prints a character each time its run function is called.
 *
 * Copyright (c) 2018 BlueZephyr
 *
 * This software may be modified and distributed under the terms
 * of the MIT license.  See the LICENSE file for details.
 *
 */
#ifndef BLINKER_H
#define BLINKER_H

#include <stdint.h>

/*
 * Init function. Must be called before the scheduler is started.
 */
void blinker_init (uint8_t taskid);

/*
 * Run function. Called by the scheduler.
 */
void blinker_run (void);

#endif // BLINKER_H
