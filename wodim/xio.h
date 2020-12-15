/*
 * This file has been modified for the cdrkit suite.
 *
 * The behaviour and appearence of the program code below can differ to a major
 * extent from the version distributed by the original author(s).
 *
 * For details, see Changelog file distributed with the cdrkit package. If you
 * received this file from another source then ask the distributing person for
 * a log of modifications.
 *
 */

/* @(#)xio.h	1.2 04/03/02 Copyright 2003-2004 J. Schilling */
/*
 *	EXtended I/O functions for cdrecord
 *
 *	Copyright (c) 2003-2004 J. Schilling
 */
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; see the file COPYING.  If not, write to the Free Software
 * Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef	_XIO_H
#define	_XIO_H

#include <utypes.h>

typedef struct xio {
	struct xio	*x_next;
	char		*x_name;
	Ullong		x_off;
	int		x_file;
	int		x_refcnt;
	int		x_oflag;
	int		x_omode;
} xio_t;

#define	xfileno(p)	(((xio_t *)(p))->x_file)

extern	void	*xopen(char *name, int oflag, int mode);
extern	int	xclose(void *vp);

#endif
