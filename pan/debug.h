/*
 * Copyright (c) 2000 Silicon Graphics, Inc.  All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it would be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * Further, this software is distributed without any warranty that it is
 * free of the rightful claim of any third person regarding infringement
 * or the like.  Any license provided herein, whether implied or
 * otherwise, applies only to this software file.  Patent licenses, if
 * any, provided herein do not apply to combinations of this program with
 * other software, or any other product whatsoever.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Contact information: Silicon Graphics, Inc., 1600 Amphitheatre Pkwy,
 * Mountain View, CA  94043, or:
 *
 * http://www.sgi.com
 *
 * For further information regarding this notice, see:
 *
 * http://oss.sgi.com/projects/GenInfo/NoticeExplan/
 *
 */
/* $Id: debug.h,v 1.1 2000/09/21 21:35:06 alaffin Exp $ */
#ifndef _DEBUG_H_
#define _DEBUG_H_

int set_debug( char * );

/*
 * DEBUG support
 *
 * use -DDEBUGGING with cc to enable debugging
 */
#ifdef DEBUGGING

extern int Debug[];
#define MAXDEBUG        30
#define DEBUG(a,l)      if (Debug[a] >= l)
#define DEBUGO(a,l,c)   if (Debug[a] >= l || c)

#else

#define	DEBUG(a,l)	if (0)
#define DEBUGO(a,l,c)   if (0)

#endif

#define D_INIT		1
#define D_SCAN		2
#define D_SCAN_LEX	3
#define D_SCAN_CUTS	4
#define D_REPORT	5
#define D_REP_H		6
#define D_REP_CUTS	7


#endif
