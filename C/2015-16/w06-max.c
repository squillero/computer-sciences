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

#define SIZE 1000

int main()
{
    int array[SIZE];
    int t;

    // seed with seconds from the epoch
    srand(time(NULL));

    for(t=0; t<SIZE; t=t+1) {
        array[t] = rand();
    }

    int max;
    max = array[0];
    for(t=1; t<SIZE; t=t+1) {
        if(max < array[t]) {
            max = array[t];
        }
    }

    printf("Max: %d\n", max);

    return 0;
}
