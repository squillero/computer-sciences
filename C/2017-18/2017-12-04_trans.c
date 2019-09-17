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

#define DIMR 5
#define DIMC 10

int main()
{
    printf("Transpose!\n");

    int matrix[DIMR][DIMC] = { 0 };
    for(int r = 0; r < DIMR; ++r) {
        for(int c = 0; c < DIMC; ++c) {
            scanf("%d", &matrix[r][c]);
        }
    }

    for(int c = 0; c < DIMC; ++c) {
        for(int r = 0; r < DIMR; ++r) {
            printf("%5d", matrix[r][c]);
        }
        printf("\n");
    }

    return 0;
}
