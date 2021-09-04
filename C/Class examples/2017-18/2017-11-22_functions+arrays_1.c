/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 20

// protos
void print_array_global(int *a);
void print_array_len(int *a, int array_len);
void print_array_terminator(int *a);

int main()
{
    int array[ARRAY_SIZE] = {0};
    int *p; // type: int *

    print_array_global(array);

    p = array; // ie. p = &array[0]
    // printf("\np=%p vs. array=%p \n\n", p, array);
    p[0] = 23; // array[0] = 23
    array[1] = 10;
    p[13] = -1;

    print_array_len(array, ARRAY_SIZE);
    print_array_terminator(array);

    return 0;
}

void print_array_global(int *a)
{
    int t;
    for (t = 0; t < ARRAY_SIZE; ++t)
    {
        printf(" %d", a[t]);
    }
    printf("\n");
}
void print_array_len(int *a, int array_len)
{
    int t;
    for (t = 0; t < array_len; ++t)
    {
        printf(" %d", a[t]);
    }
    printf("\n");
}
void print_array_terminator(int *a)
{
    int t;
    for (t = 0; a[t] != -1; ++t)
    {
        printf(" %d", a[t]);
    }
    printf("\n");
}
