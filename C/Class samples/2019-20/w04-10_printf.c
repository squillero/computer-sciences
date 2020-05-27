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
    int i = 42;
    int i2 = -42;
    double d = 0.007;

    // integers
    printf("[%d]\n", i);
    printf("[%8d]\n", i);
    printf("[%08d]\n", i);
    // negative
    printf("[%8d]\n", i2);
    printf("[%08d]\n", i2);
    // positive
    printf("[%+8d]\n", i);
    printf("[%-8d]\n", i);
    printf("[%+08d]\n", i);

    printf("[%---------------8d] **\n", i);
    printf("[%+-8d]\n", i);
    printf("[%+-8d]\n", i2);

    // floating point
    printf("[----------]\n");
    printf("[%+10.4f]\n", d);
    printf("[%+10.4f]\n", 0.0);
    printf("[%+.4f]\n", 0.0);
    printf("[%-+10.4f]\n", 0.33333333);
    printf("[%-+10.4f]\n", 0.77777777);
    printf("[%+-10.4f]\n", 0.77777777);

    printf("%g\n", 98457345.0 * 98457345.0);
    printf("[%e]\n", d);
    printf("[%.2E]\n", d);


    return 0;
}
