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

#define ARRAY_SIZE  16
#define LARGE_ARRAY_SIZE  8192

int main()
{
    int array1[ARRAY_SIZE];
    int array2[ARRAY_SIZE] = { 1, 2, 3, 4, 5, 6, -7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
    int array3[ARRAY_SIZE] = { -1, -2, -3 };
    int array4[] = {1, 2, 3, 4, 5};

    int array5[LARGE_ARRAY_SIZE] = { 0 };   // 0 0 0 ... 0
    int array6[LARGE_ARRAY_SIZE] = { 1 };   // 1 0 0 ... 0

    printf("That's all folks...");

    return 0;
}
