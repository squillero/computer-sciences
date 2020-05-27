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

#define ARRAY_LENGTH 4

int main()
{
    int array1[ARRAY_LENGTH];
    int array2[ARRAY_LENGTH];

    printf("Array1: ");
    for(int t = 0; t < ARRAY_LENGTH; ++t) {
        scanf("%d", &array1[t]);
    }

    printf("Array2: ");
    for(int t = 0; t < ARRAY_LENGTH; ++t) {
        scanf("%d", &array2[t]);
    }

    int equal = 1;
    for(int t = 0; t < ARRAY_LENGTH; ++t) {
        if(array1[t] != array2[t]) {
            equal = 0;
        }
    }

    if(equal) {
        printf("The two arrays are equal\n");
    } else {
        printf("The two arrays are NOT equal\n");
    }

    return 0;
}
