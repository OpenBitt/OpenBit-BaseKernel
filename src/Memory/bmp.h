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


#ifndef SALERNOS_CORE_KERNEL_BMP
#define SALERNOS_CORE_KERNEL_BMP

    #include <kerntypes.h>


    typedef struct Bitmap {
        size_t   _Size;
        uint8_t* _Buffer;
    } bmp_t;

    
    /********************************************************************************
    RET TYPE        FUNCTION NAME       FUNCTION ARGUMENTS
    ********************************************************************************/
    bool_t          kernel_bmp_get      (bmp_t* __bmp, uint64_t __idx);
    void            kernel_bmp_set      (bmp_t* __bmp, uint64_t __idx, bool_t __val);

#endif
