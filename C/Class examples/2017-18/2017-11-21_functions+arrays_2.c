/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 256

// protos
// get the index of the max element
int get_max_index(int *a);
void print_array(int *b, int len);
void fill_with_zero(int arr[], int len);

int main()
{
    printf("Hello arrays!\n");

    int array[ARRAY_SIZE];
    srand(time(NULL));
    for (int t = 0; t < ARRAY_SIZE; ++t)
    {
        array[t] = rand() % 1000;
    }

    fill_with_zero(array, 50);
    print_array(array, 100);
    int i = get_max_index(array);
    printf("Max @ position %d: %d\n", i, array[i]);

    return 0;
}

// int *a -> int* a
int get_max_index(int *a)
{
    printf("a: %p\n", a);

    int max_pos = 0;
    for (int t = 1; t < ARRAY_SIZE; ++t)
    {
        if (a[t] > a[max_pos])
        {
            max_pos = t;
        }
    }
    return max_pos;
}

void print_array(int *b, int len)
{
    for (int t = 0; t < len; ++t)
    {
        printf(" %d", b[t]);
    }
    printf("\n");
}

void fill_with_zero(int arr[], int len)
{
    for (int t = 0; t < len; ++t)
    {
        arr[t] = 0;
    }
}
