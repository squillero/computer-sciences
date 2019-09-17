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

#define VAL 2

/* PROTOS */
void foo(int x);
void bar(int x);

void foo(int x)
{
    int gargle;

    gargle = x * VAL;
    printf("foo: %d\n", gargle);
}

void bar(int x)
{
    int gargle;

    gargle = x / VAL;
    printf("bar: %d\n", gargle);
}

int main()
{
    printf("Hello funcs\n");
    foo(42);
    bar(42);
    return 0;
}
