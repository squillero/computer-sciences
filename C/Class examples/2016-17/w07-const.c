/********************************************************************-*-c-*-*\
*               *  Code examples for Computer Sciences 2016-17               *
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
    int t = 42;
    printf("The answer is %d\n", t);

    t = 042;
    printf("The answer is %d\n", t);

    t = 0x42;
    printf("The answer is %d\n", t);

    unsigned long int a;
    a = 1;
    while(a != 0) {
        printf("%lu * 2", a);
        a *= 2;
        printf(" = %lu\n", a);
    }

    return 0;
}
