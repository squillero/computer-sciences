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
    int circular_array[ARRAY_SIZE];
    int pos;

    srand(time(NULL));

    printf("Let's roll!\n");
    for(int t = 0; t < ARRAY_SIZE; ++t) {
        circular_array[t] = rand() % 10000;
    }
    for(int t = 0; t < ARRAY_SIZE; ++t) {
        printf("%2d) %d\n", t, circular_array[t]);
    }

    printf("\nEnter index: ");
    scanf("%d", &pos);
    for(int t = 0; t < 5; ++t) {
        printf("%2d) %d\n", pos, circular_array[pos]);
        pos = (pos + 1) % ARRAY_SIZE;       // ++pos;
    }

    printf("\nEnter index: ");
    scanf("%d", &pos);
    for(int t = 0; t < 5; ++t) {
        printf("%2d) %d\n", pos, circular_array[pos]);
        pos = (ARRAY_SIZE + pos - 1) % ARRAY_SIZE;
    }

    return 0;
}
