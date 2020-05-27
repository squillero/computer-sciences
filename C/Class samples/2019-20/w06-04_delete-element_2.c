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
#include <time.h>

#define ARRAY_SIZE  10

int main()
{
    int array[ARRAY_SIZE];
    int array_length = ARRAY_SIZE;

    srand(time(NULL));
    for(int t = 0; t < ARRAY_SIZE; ++t) {
        array[t] = rand();
        printf("%02d) %d\n", t, array[t]);
    }

    // delete one element (shrink)
    for(;;) {
        printf("Element to delete: ");
        int index;
        scanf("%d", &index);

        // shuffling the array
        // array[index] = array[array_length - 1];

        // without shuffling
        for(int t = index; t < array_length - 1; ++t) {
            array[t] = array[t + 1];
        }

        array_length -= 1;
        for(int t = 0; t < array_length; ++t) {
            printf("%02d) %d\n", t, array[t]);
        }
        printf("------\n");
        for(int t = array_length; t < ARRAY_SIZE; ++t) {
            printf("%02d) %d\n", t, array[t]);
        }
    }

    return 0;
}
