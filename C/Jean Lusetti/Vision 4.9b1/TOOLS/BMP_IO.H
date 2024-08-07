/***********************/
/* Header de BMP_IO.C */
/***********************/
#ifndef __BMP
#define __BMP

#if !defined(__IMAGE_IO_H)
#include "..\tools\image_io.h"
#endif

int  bmp_identify(char *nom, INFO_IMAGE *inf) ;
int  bmp_load(INFO_IMAGE* inf) ;
int  bmp_sauve(char *name, MFDB *img, INFO_IMAGE *info, GEM_WINDOW* wprog) ;
void bmp_getdrvcaps(INFO_IMAGE_DRIVER *caps) ;


#endif