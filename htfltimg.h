/* 
 *	HT Editor
 *	htfltimg.h
 *
 *	Copyright (C) 2003 Sebastian Biallas (sb@biallas.net)
 *
 *	This program is free software; you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License version 2 as
 *	published by the Free Software Foundation.
 *
 *	This program is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with this program; if not, write to the Free Software
 *	Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef __HTFLTIMG_H__
#define __HTFLTIMG_H__

#include "htanaly.h"
#include "htflt.h"
#include "formats.h"

extern format_viewer_if htfltimage_if;

/*
 *	CLASS ht_flt_aviewer
 */

class ht_flt_aviewer: public ht_aviewer {
public:
	ht_flt_shared_data *flt_shared;
		void init(Bounds *b, const char *desc, int caps, File *file, ht_format_group *format_group, Analyser *Analyser, ht_flt_shared_data *flt_shared);
	virtual void setAnalyser(Analyser *a);
};

#endif /* !__HTFLTIMG_H__ */

