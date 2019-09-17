/********************************************************************-*-c-*-*\
*               *  Code examples for Computer Sciences 2017-18               *
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

#define LENGTH 40

int main()
{
    printf("Hello arrays!!\n");

    int foo;
    int bar[LENGTH] = { 0 };
    int baz[LENGTH];

    // INIT
    // bar <- {42, ..., 42}
    for(int t = 0; t < LENGTH; t = t + 1) {
        bar[t] = 42;
    }

    // COPY SINGLE ELEMENT
    bar[13] = baz[13];

    // COPY WHOLE ARRAY
    // bar <- baz
    for(int t = 0; t < LENGTH; t = t + 1) {
        bar[t] = baz[t];    // single element copy
    }

    // print
    printf("bar =");
    for(int t = 0; t < LENGTH; t = t + 1) {
        printf(" %d", bar[t]);
    }
    printf("\n");

    // CHECK bar == baz
    int equal = 1;
    for(int t = 0; t < LENGTH; t = t + 1) {
        if(bar[t] != baz[t]) {
            equal = 0;
        }
    }
    if(equal == 1) {
        printf("bar == baz!\n");
    }

    // CHECK NOT EQL (ELEM BY ELEM)
    int ebeeq = 1;
    for(int t = 0; t < LENGTH; t = t + 1) {
        if(bar[t] == baz[t]) {
            ebeeq = 0;
        }
    }
    if(ebeeq == 1) {
        printf("bar[t] is NEVER equal to baz[t]!\n");
    }

    return 0;
}
