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

struct FOO {
    int a;
    short int b;
    char c;
};

union BAR {
    int a;
    short int b;
    char c;
};

struct element{
    char n[60];
    int m;
    float p;
};

int main()
{
    prontf("%d\n", sizeof (struct element));
    /*
    printf("%d\n", sizeof (struct FOO));
    printf("%d\n", sizeof (union BAR));

    union BAR b;
    b.a = 42;
    printf("%d\n", b.a);
    b.c = '!';
    printf("%d\n", b.a);
    */
    return 0;
}
