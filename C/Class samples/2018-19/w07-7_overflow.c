/********************************************************************-*-c-*-*\
*               *  Code example for Computer Sciences 2018-19                *
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
    unsigned char c1, c2;
    unsigned char s;

    c1 = 99;
    c2 = 123;
    s = c1 - c2;

    printf("%d - %d = %d\n", c1, c2, s);

    // char test = 'a';
    // char test = 70 + 9;
    // printf("%d %c\n", test, test);

    return 0;
}
