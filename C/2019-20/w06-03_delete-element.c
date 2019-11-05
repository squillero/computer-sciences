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

#define ARRAY_SIZE  20

int main()
{
    int array[ARRAY_SIZE];

    srand(time(NULL));
    for(int t = 0; t < ARRAY_SIZE; ++t) {
        array[t] = rand();
        printf("%02d) %d\n", t, array[t]);
    }

    // delete one element (flag)
    int deleted[ARRAY_SIZE] = { 0 };

    for(;;) {
        printf("Element to delete: ");
        int index;
        scanf("%d", &index);
        deleted[index] = 1;
        for(int t = 0; t < ARRAY_SIZE; ++t) {
            if(deleted[t] == 0) {
                printf("%02d) %d\n", t, array[t]);
            } else {
                printf("%02d)\n", t);
            }
        }
    }


    return 0;
}
