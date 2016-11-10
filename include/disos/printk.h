/*
 * Copyright (c) 2016 Wuklab, Purdue University. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef _DISOS_PRINTK_H_
#define _DISOS_PRINTK_H_

#include <disos/stdarg.h>
#include <disos/linkage.h>
#include <disos/compiler.h>

asmlinkage __printf(1, 2)
int printk(const char *fmt, ...);

#endif /* _DISOS_PRINTK_H_ */