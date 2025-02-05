/**********************************************************************
SalernOS Kernel
Copyright (C) 2021 - 2022 Alessandro Salerno

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
**********************************************************************/


#include "GDT/gdt.h"


__attribute__((__aligned__(0x1000)))
gdt_t gdt = {
    { 0, 0, 0, 0x00, 0x00, 0 }, // Null Segment
    { 0, 0, 0, 0x9A, 0xA0, 0 }, // Kernel Code Segment
    { 0, 0, 0, 0x92, 0xA0, 0 }, // Kernel Data Segment
    { 0, 0, 0, 0x00, 0x00, 0 }, // User Null Segment
    { 0, 0, 0, 0x9A, 0xA0, 0 }, // User Code Segment
    { 0, 0, 0, 0x92, 0xA0, 0 }, // User Data Segment
};
