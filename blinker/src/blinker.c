/*
 * This task prints a character each time its run function is called.
 *
 * Copyright (c) 2018 BlueZephyr
 *
 * This software may be modified and distributed under the terms
 * of the MIT license.  See the LICENSE file for details.
 *
 */

#include "blinker.h"
#include "config.h"
#include <stdio.h>

// This id is given by the scheduler when the task is added.
static uint8_t blinker_id = 0;

void blinker_init (uint8_t taskid)
{
    // Set the task id
    blinker_id = taskid;
}

void blinker_run (void)
{
    printf("*");
}

