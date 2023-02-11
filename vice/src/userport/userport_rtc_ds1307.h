/*
 * userport_rtc_ds1307.h: Generic userport rtc (ds1307) device emulation.
 *
 * Written by
 *  Marco van den Heuvel <blackystardust68@yahoo.com>
 *
 * This file is part of VICE, the Versatile Commodore Emulator.
 * See README for copyright notice.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 *  02111-1307  USA.
 *
 */

#ifndef VICE_USERPORT_RTC_DS1307_H
#define VICE_USERPORT_RTC_DS1307_H

#include "types.h"

extern int userport_rtc_ds1307_enable;

int userport_rtc_ds1307_resources_init(void);
int userport_rtc_ds1307_cmdline_options_init(void);
void userport_rtc_ds1307_resources_shutdown(void);

#endif
