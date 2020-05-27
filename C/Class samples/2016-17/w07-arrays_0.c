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

#define ARRAY_SIZE  8
#define TRUE    1
#define FALSE   0

int main()
{
    int array1[ARRAY_SIZE] = { 0 };
    int array2[ARRAY_SIZE] = { -1, 42, 23, -42 };


    printf("Array1 @ %p:", array1);
    for(int t = 0; t < ARRAY_SIZE; ++t) {
        printf(" %d", array1[t]);
    }
    printf("\n");
    printf("Array2 @ %p:", array2);
    for(int t = 0; t < ARRAY_SIZE; ++t) {
        printf(" %d", array2[t]);
    }
    printf("\n");

    int arrays_equal = TRUE;
    for(int t = 0; t < ARRAY_SIZE; ++t) {
        if(array1[t] != array2[t]) {
            arrays_equal = FALSE;
        }
    }

    if(arrays_equal) {
        printf("Whoa!\n");
    } else {
        printf("Yeuch -- Not equal...\n");
        for(int t = 0; t < ARRAY_SIZE; ++t) {
            array2[t] = array1[t];
        }
    }

    printf("Array1 @ %p:", array1);
    for(int t = 0; t < ARRAY_SIZE; ++t) {
        printf(" %d", array1[t]);
    }
    printf("\n");
    printf("Array2 @ %p:", array2);
    for(int t = 0; t < ARRAY_SIZE; ++t) {
        printf(" %d", array2[t]);
    }
    printf("\n");
    return 0;
}
