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

#define SIZE 5

int main()
{
    int array1[SIZE], array2[SIZE];

    printf("Enter elem 0...%d of array I: ", SIZE);
    for(int t = 0; t < SIZE; t = t + 1) {
        scanf("%d", &array1[t]);
    }

    printf("Enter elem 0...%d of array II: ", SIZE);
    for(int t = 0; t < SIZE; t = t + 1) {
        scanf("%d", &array2[t]);
    }

    _Bool flag = 1;
    for(int t = 0; t < SIZE; t = t + 1) {
        if(array1[t] > array2[t]) {
            flag = 0;
        }
    }
    if(flag == 1) {
        printf("Whoa!\n");
    }

    // n ** 2
    _Bool all1larger = 1;
    for(int t = 0; t < SIZE; t = t + 1) {
        for(int u = 0; u < SIZE; u = u + 1) {
            if(array1[t] <= array2[u]) {
                all1larger = 0;
            }
        }
    }
    if(all1larger) {
        printf("All elements of the first array are larger than all elements in the second array!\n");
    }

    // 2 * n + 1
    int min = array1[0];
    for(int t = 1; t < SIZE; t = t + 1) {
        if(array1[t] < min) {
            min = array1[t];
        }
    }
    int max = array2[0];
    for(int t = 1; t < SIZE; t = t + 1) {
        if(array2[t] > max) {
            max = array2[t];
        }
    }
    if(min > max) {
        printf("All elem... blah blahblah\n");
    }

    return 0;
}
