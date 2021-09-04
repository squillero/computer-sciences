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

#define SIZE 1000

/*
 * Read list of # terminated by -1, print it backward
 * we assume less than SIZE numbers
 */

int main()
{
    int array[SIZE];

    int flag = 1;
    int pos = 0;
    while(flag == 1) {
        scanf("%d", &array[pos]);
        if(array[pos] == -1) {
            flag = 0;
        } else {
            pos = pos + 1;
        }
    }

    printf("Array:");
    for(int t = 0; t < pos; t = t + 1) {
        printf(" %d", array[t]);
    }
    printf("\n");

    printf("Array (rev):");
    for(int t = pos - 1; t >= 0; t = t - 1) {
        printf(" %d", array[t]);
    }
    printf("\n");



    return 0;
}
