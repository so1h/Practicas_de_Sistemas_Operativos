/* ----------------------------------------------------------------------- */
/*                               e9_system.h                               */  
/* ----------------------------------------------------------------------- */
/*                   definicion modulo/unidad/biblioteca                   */
/* ----------------------------------------------------------------------- */
/*                                                                         */
/* [Qemu-devel] [PATCH] Port E9 hack, for debugging purposes:              */
/*                                                                         */
/*   https://lists.gnu.org/archive/html/qemu-devel/2005-01/msg00169.html   */
/*                                                                         */

#ifndef H_E9_SYSTEM
#define H_E9_SYSTEM

void e9_hack ( char car ) ;               /* escribe car en el puerto 0xE9 */

void e9_hackstr ( char * str ) ;         /* escribe str por el puerto 0xE9 */

void e9_hackint ( int n ) ;                /* escribe n por el puerto 0xE9 */

void e9_hackhex ( unsigned n, unsigned ancho ) ;    /* escribe n en hexad. */

int  e9_printf ( const char * format, ... ) ;           /* printf por 0xE9 */

#endif /* H_E9_SYSTEM */
