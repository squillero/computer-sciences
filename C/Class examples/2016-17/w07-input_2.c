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

#define MAX_SIZE 10

int main()
{
    int array[MAX_SIZE];
    int index = 0;

    while(index < MAX_SIZE) {
        scanf("%d", &array[index]);
        if(array[index] >= 1 && array[index] <= 30) {
            ++index;
        } else {
            printf("Yeuch!?\n");
        }
    }

    for(int t = 0; t < MAX_SIZE; ++t) {
        printf("%d) %d\n", t, array[t]);
    }

    return 0;
}
