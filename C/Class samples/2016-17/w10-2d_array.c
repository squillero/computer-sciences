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

#define DIM_1 5
#define DIM_2 10

int Array2d[DIM_1][DIM_2] =
    {
        { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
        { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
        { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
        { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
        { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
    };

// PROTO!
void print_Array2d(void);
void swap(int a[], int size);

int main()
{
    print_Array2d();
    printf("\n");
    swap(Array2d[2], DIM_2);
    print_Array2d();
    printf("\n");

    for(int t = 0; t < DIM_1; ++t) {
        for(int u = 0; u < DIM_2; ++u) {
            Array2d[t][u] = rand() % 100;
        }
    }

    printf("\n");
    print_Array2d();


    return EXIT_SUCCESS;
}

void print_Array2d(void)
{
    for(int t = 0; t < DIM_1; ++t) {
        for(int u = 0; u < DIM_2; ++u) {
            printf(" %02d", Array2d[t][u]);
        }
        printf("\n");
    }
}

void swap(int a[], int size)
{
    for(int t = 0; t < size / 2; ++t) {
        int tmp = a[t];
        a[t] = a[size - t - 1];
        a[size - t - 1] = tmp;
    }
}
