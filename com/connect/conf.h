/*
   *
   *	RADIUS
   *	Remote Authentication Dial In User Service
   *
   * ASCEND: @(#)conf.h	1.2 (95/07/25 00:55:28)
   *
   *
   *	Livingston Enterprises, Inc.
   *	6920 Koll Center Parkway
   *	Pleasanton, CA   94566
   *
   *	Copyright 1992 Livingston Enterprises, Inc.
   *
   *	Permission to use, copy, modify, and distribute this software for any
   *	purpose and without fee is hereby granted, provided that this
   *	copyright and permission notice appear on all copies and supporting
   *	documentation, the name of Livingston Enterprises, Inc. not be used
   *	in advertising or publicity pertaining to distribution of the
   *	program without specific prior permission, and notice be given
   *	in supporting documentation that copying and distribution is by
   *	permission of Livingston Enterprises, Inc.   
   *
   *	Livingston Enterprises, Inc. makes no representations about
   *	the suitability of this software for any purpose.  It is
   *	provided "as is" without express or implied warranty.
   *
   */
/*
   *	@(#)conf.h	1.2 12/22/94
   */
#if defined(__alpha) && defined(__osf__)
#define UINT4_IS_UINT 
typedef unsigned int    UINT4 ;
#else 
#define UINT4_IS_ULONG 
typedef unsigned long   UINT4 ;
#endif
#if defined(unixware) || defined(sys5) || defined(M_UNIX)
#include <string.h>
#else 

/* unixware */
#if defined(SOLARIS)
#include <string.h>
#else 
#if !defined(BORLAND) && !defined(BORLAND3) && !defined(VISUAL)
#include <strings.h>
#endif
#endif
#endif

/* unixware */
#if defined(BSDI)
#include <machine/inline.h>
#include <machine/endian.h>
#include <stdlib.h>
#else 

/* BSDI */
#include <malloc.h>
#endif

/* BSDI */
#if defined(aix)
#include <sys/select.h>
#endif /* aix 	*/ 
