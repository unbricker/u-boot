/*
 * (C) Copyright 2012-2013 Henrik Nordstrom <henrik@henriknordstrom.net>
 * (C) Copyright 2013 Luke Kenneth Casson Leighton <lkcl@lkcl.net>
 *
 * Configuration settings for the Allwinner A20 (sun7i) CPU
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#ifndef __CONFIG_H
#define __CONFIG_H

/*
 * A20 specific configuration
 */
#define CONFIG_SUN7I		/* sun7i SoC generation */

#define CONFIG_SYS_PROMPT		"sun7i# "
#define CONFIG_MACH_TYPE		4283

#if defined(CONFIG_SYS_SECONDARY_ON)
#define CONFIG_BOARD_POSTCLK_INIT 1
#endif

#define CONFIG_ARMV7_VIRT		1
#define CONFIG_ARMV7_NONSEC		1
#define CONFIG_ARMV7_PSCI		1
#define CONFIG_ARMV7_PSCI_NR_CPUS	2
#define CONFIG_ARMV7_SECURE_BASE	SUNXI_SRAM_B_BASE
#define CONFIG_SYS_CLK_FREQ		24000000

/*
 * Include common sunxi configuration where most the settings are
 */
#include <configs/sunxi-common.h>

#endif /* __CONFIG_H */
