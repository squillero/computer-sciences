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

    a = 10;
    b = 20;

    printf("a: %d / b: %d\n", a, b);

    b = a++ * 100;

    printf("a: %d / b: %d\n", a, b);

    // no
    a = a + 1;

    // almost
    a += 1;

    // good
    ++a;

    for(int t = 0; t < 10; ++t) {

    }

    return 0;
}
