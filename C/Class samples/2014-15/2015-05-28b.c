/********************************************************************-*-c-*-*\
*               *  Class examples for Computer Sciences 2014-15              *
*    #####      *  (!) Giovanni Squillero <giovanni.squillero@polito.it>     *
*   ######      *                                                            *
*   ###   \     *  Copying and distribution of this file, with or without    *
*    ##G  c\    *  modification, are permitted in any medium without royalty *
*    #     _\   *  provided this notice is preserved.                        *
*    |   _/     *  This file is offered as-is, without any warranty.         *
*    |  _/      *                                                            *
*               *  See: http://www.cad.polito.it/staff/squillero/dida/       *
\****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define DIM 1024

typedef struct _FOO {
    int x;
    int y;
} FOO;

void func(FOO x)
{
    x.x = x.y = 23;
}

int main(int argc, char *argv[])
{
    FOO x;

    x.x = x.y = 42;
    printf("%d/%d\n", x.x, x.y);
    func(x);
    printf("%d/%d\n", x.x, x.y);

    return EXIT_FAILURE;
}
