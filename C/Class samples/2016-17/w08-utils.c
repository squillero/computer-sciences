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

#define ARRAY_SIZE 20

// PROTOS
void print_array(int *array, int size);
void swap_in_place(int array[], int array_size);
void swap_copy(int array_dst[], int array_src[], int array_size);

int main()
{
    int array[ARRAY_SIZE];

    for(int t = 0; t < ARRAY_SIZE; ++t) {
        array[t] = 1 + rand() % 100;
    }
    print_array(array, ARRAY_SIZE);
    swap_in_place(array, ARRAY_SIZE);
    print_array(array, ARRAY_SIZE);

    return 0;
}

void swap_in_place(int a[], int s)
{
    for(int t = 0; t < s / 2; ++t) {
        int u = a[t];
        a[t] = a[s - t - 1];
        a[s - t - 1] = u;
    }
}

void print_array(int *a, int s)
{
    printf("%p:", a);
    for(int t = 0; t < s; ++t) {
        printf(" %d", a[t]);
    }
    printf("\n");
}
