/*
 * Simple bitloom example project for Linux.
 *
 * Copyright (c) 2018 BlueZephyr
 *
 * This software may be modified and distributed under the terms
 * of the MIT license.  See the LICENSE file for details.
 *
 */

#include "scheduler.h"
#include "blinker.h"

#include <stdio.h>
#include <sys/select.h>


int main (void)
{
    struct timeval tv;

    schedule_init();
    blinker_init(schedule_add_task(250, 0, blinker_run));
    schedule_start();

    for(;;)
    {
        int retval;

        // Schedule a tick every ms
        tv.tv_sec = 0;
        tv.tv_usec = 1000;

        retval = select(0, NULL, NULL, NULL, &tv);
        if (retval != -1)
        {
            schedule_timer_tick();
            schedule_run();
        }
        else
        {
            printf("E");
        }
        fflush(stdout);
    }
}

