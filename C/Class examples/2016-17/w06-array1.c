/********************************************************************-*-c-*-*\
*               *  Code examples for Computer Sciences 2016-17               *
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

#define SIZE 10000

int main()
{
    int data[SIZE];

    srand(time(NULL));
    for(int t=0; t<SIZE; ++t) {
        data[t] = rand();
    }

    printf("Array:");
    for(int t=0; t<SIZE; ++t) {
        printf(" %d", data[t]);
    }
    printf("\n");

    int max = data[0];
    int min = data[0];
    for(int t=0; t<SIZE; ++t) {
        if(data[t] > max) {
            max = data[t];
        }
        if(data[t] < min) {
           min = data[t];
        }
    }
    printf("Max: %d, min: %d\n", max, min);

    return 0;
}
