/********************************************************************-*-c-*-*\
*               *  Code examples for Computer Sciences 2015-16               *
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
    signed char s1, s2, s3;
    unsigned char u1, u2, u3;

    s1 = 87;
    u1 = 87;

    s2 = 59;
    u2 = 59;

    s3 = s1 + s2;
    u3 = u1 + u2;


    printf("signed: %d + %d = %d (overflow!)\n", s1, s2, s3);
    printf("unsigned: %d + %d = %d\n", u1, u2, u3);

    unsigned char test;

    test = -1;
    printf("Real programmer's FF: %d\n", test);

    return 0;
}
