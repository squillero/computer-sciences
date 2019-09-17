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
    for(t=0; t<NUM_ELEMENTS; t=t+1) {
        scanf("%lf", &arr[t]); // letter "L", not ONE
    }

    printf("Backward 1:");
    for(t=0; t<NUM_ELEMENTS; t=t+1) {
        printf(" %g", arr[NUM_ELEMENTS - t -1]);
    }
    printf("\n");

    printf("Backward 2:");
    for(t=NUM_ELEMENTS-1; t>=0; t=t-1) {
        printf(" %g", arr[t]);
    }
    printf("\n");

    return 0;
}
