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

/* PROTO */
float AddOne(int foo);

int MyRandom(void)
{
    return rand()%42;
}

void MyDebug(int x)
{
    printf("Grand 'ma debug: %d\n", x);
    return;
}

int main(void)
{
    int baz, quz;

    baz = 42;
    quz = AddOne(baz-1);

    printf("baz: %d -- quz: %d\n", baz, quz);
    return 0;
}

float AddOne(int foo)
{
    float baz;
    baz = foo +1.0;
    return baz;
}

