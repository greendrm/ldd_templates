/* arch/arm/mach-xxx/board-xxx.c
 *
 * Copyright (C) 2011 Dojip Kim, inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that is will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABLILITY of FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Genernal Public License for more details.
 *
 */

#include <linux/kernel.h>
#include <linux/init.h>

#include <asm/mach-types.h>

static void __init xxx_reserve(void)
{
	// TODO
}

static void __init xxx_map_io(void)
{
	// TODO
}

static void __init xxx_init_early(void)
{
	// TODO
}

static void __init xxx_init_irq(void)
{
	// TODO
}

static void __init xxx_init(void)
{
	// TODO
}

// Generally, it is defined at timer.c
struct sys_timer xxx_timer = {
	.init  = xxx_timer_init,
};

MACHINE_START(XXX, "XXX board")
	/* Maintainer: Dojip Kim */
	// TODO: fix the boot_params
	.boot_params   = 0x80000100,
	.reserve       = xxx_reserve,
	.map_io        = xxx_map_io,
	.init_early    = xxx_init_early,
	.init_irq      = xxx_init_irq,
	.init_machine  = xxx_init,
	.timer         = &xxx_timer,
MACHINE_END
