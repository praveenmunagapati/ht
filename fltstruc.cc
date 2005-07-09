/* 
 *	HT Editor
 *	fltstruc.cc
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

#include "fltstruc.h"
#include "global.h"
#include "htendian.h"

byte FLAT_HEADER_struct[]= {
	STRUCT_ENDIAN_BYTE,
	STRUCT_ENDIAN_BYTE,
	STRUCT_ENDIAN_BYTE,
	STRUCT_ENDIAN_BYTE,
	STRUCT_ENDIAN_DWORD | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_DWORD | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_DWORD | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_DWORD | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_DWORD | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_DWORD | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_DWORD | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_DWORD | STRUCT_ENDIAN_HOST,

	STRUCT_ENDIAN_DWORD | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_DWORD | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_DWORD | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_DWORD | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_DWORD | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_DWORD | STRUCT_ENDIAN_HOST,
	STRUCT_ENDIAN_DWORD | STRUCT_ENDIAN_HOST,
	0
};


