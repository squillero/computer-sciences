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
#include <time.h>

#define DIM1 5
#define DIM2 10

// Use global!
int MyGlobalMatrix[DIM1][DIM2];

void print_matrix(void)
{
    for(int i1 = 0; i1 < DIM1; ++i1) {
        for(int i2 = 0; i2 < DIM2; ++i2) {
            printf("%4d", MyGlobalMatrix[i1][i2]);
        }
        printf("\n");
    }
}

int main()
{
    printf("Welcome to the Matrix!\n");
    srand(time(NULL));

    for(int i1 = 0; i1 < DIM1; ++i1) {
        for(int i2 = 0; i2 < DIM2; ++i2) {
            MyGlobalMatrix[i1][i2] = rand() % 100;
        }
    }
    print_matrix();

    return 0;
}
