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

// function that gets an array
void foo1(int *x);
void foo2(int x[]);
void bar1(char *x);
void bar2(char x[]);


int main(int argc, char *argv[])
{
    printf("Hello argc/argv -- 3 points for free!\n");

    for(int t = 0; t < argc; ++t) {
        printf("argv[%d] = %p (\"%s\")\n", t, argv[t], argv[t]);
    }
    printf("argv[%d] = %p\n", argc, argv[argc]);

    // real men & women use pointers
    for(int t = 0; argv[t] != NULL; ++t) {
        printf("argv[%d] = %p (\"%s\")\n", t, argv[t], argv[t]);
    }
    printf("argv[%d] = %p\n", argc, argv[argc]);

    return 0;
}
