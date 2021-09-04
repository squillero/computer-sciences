/********************************************************************-*-c-*-*\
*               *  Code example for Computer Sciences 2019-20                *
*    #####      *  (!) Giovanni Squillero <giovanni.squillero@polito.it>     *
*   ######      *                                                            *
*   ###   \     *  Copying and distribution of this file, with or without    *
*    ##G  c\    *  modification, are permitted in any medium without royalty *
*    #     _\   *  provided this notice is preserved.                        *
*    |   _/     *  This file is offered as-is, without any warranty.         *
*    |  _/      *                                                            *
*               *  See: http://staff.polito.it/giovanni.squillero/dida.php   *
\****************************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    a = 42;
    b = 23;

    printf("&a = 0x%x\n", &a);

    printf("a: %d  --  b: %d\n", a, b);
    printf("a: %d  --  b: %d\n", &a, &b);   // cast ptr to int, yeuch
    printf("a: %x  --  b: %x\n", &a, &b);   // cast ptr to int, yeuch
    printf("a: %p  --  b: %p\n", &a, &b);   // correct, but not portable
    return 0;
}
