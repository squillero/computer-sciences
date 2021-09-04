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
    printf("The answer is %d!\n", 42);
    printf("%d + %d = ?\n", 12, 23);
    printf("%d + %d = %d\n", 12, 23, 12+23);

    int i = 42;
    float f = 2.3;
    char c = 65;
    printf("i: %d / f: %f / c: %c\n", i, f, c);
    printf("i: %d / f: %f / c: %d\n", i, f, c);
    printf("i: %c / f: %d / c: %f\n", i, f, c); // last one is bad


    return 0;
}
