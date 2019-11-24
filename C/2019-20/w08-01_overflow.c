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
    signed char foo;
    unsigned char bar;

    foo = 0;
    bar = 0;
    for(int t = 0; t < 500; ++t) {
        printf("foo:%d  bar:%d\n", foo, bar);
        ++foo;
        ++bar;

        if(t % 50 == 0) {
            int x;
            scanf("%d", &x);
        }
    }

    return 0;
}
