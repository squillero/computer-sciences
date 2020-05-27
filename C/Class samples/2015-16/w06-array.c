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

#define NUM_ELEMENTS 7

int main()
{
    double arr[NUM_ELEMENTS];
    int t;

    printf("Insert %d numbers: ", NUM_ELEMENTS);
    t = 0;
    while(t < NUM_ELEMENTS) {
        double d;
        scanf("%lf", &d); // letter "L", not ONE
        arr[t] = d;
        t = t +1;
    }

    printf("Backward 1:");
    t = 0;
    while(t < NUM_ELEMENTS) {
        printf(" %g", arr[NUM_ELEMENTS - t -1]);
        t = t +1;
    }
    printf("\n");

    printf("Backward 2:");
    t = NUM_ELEMENTS -1;
    while(t >= 0) {
        printf(" %g", arr[t]);
        t = t -1;
    }
    printf("\n");

    return 0;
}
