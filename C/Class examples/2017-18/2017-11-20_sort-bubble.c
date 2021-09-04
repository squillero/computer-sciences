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

#define ARRAY_SIZE  10

int main()
{
    int array[ARRAY_SIZE];

    for(int t = 0; t < ARRAY_SIZE; ++t) {
        array[t] = rand() % 100;
    }
    printf("Array:");
    for(int t = 0; t < ARRAY_SIZE; ++t) {
        printf(" %d", array[t]);
    }
    printf("\n");

    int swapped = 1;
    while(swapped == 1) {
        swapped = 0;
        for(int t = 1; t < ARRAY_SIZE; ++t) {
            if(array[t] < array[t-1]) {
                swapped = 1;
                printf("Swap: %d <-> %d\n", array[t-1], array[t]);
                int tmp = array[t];
                array[t] = array[t-1];
                array[t-1] = tmp;
            }
        }
    }

    printf("Array:");
    for(int t = 0; t < ARRAY_SIZE; ++t) {
        printf(" %d", array[t]);
    }
    printf("\n");

    return 0;
}
