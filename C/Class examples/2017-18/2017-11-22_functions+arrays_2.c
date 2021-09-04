/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

// protos
int len(int *a);
void print_array(int a[]);
int find_sub_squence(int array[], int *sub);

int main()
{
    int array[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sub[] = {3, 4, -1};
    int pos;
    int t;

    /*
    for(t = 0; t < ARRAY_SIZE; ++t) {
        array[t] = rand() % 5;
    }
    */
    print_array(array);

    pos = find_sub_squence(array, sub);
    if (pos == -1)
    {
        printf("Yeuch, can't find sub seq...\n");
    }
    else
    {
        printf("Whoa! Found sub seq at position %d!!!!\n", pos);
    }

    return 0;
}

void print_array(int a[])
{
    int t;
    for (t = 0; t < ARRAY_SIZE; ++t)
    {
        printf("%d ", a[t]);
    }
    printf("\n");
}

// 4 5 3 1 1 3 1 1 2 3 2
//       1 1 2 *
int find_sub_squence(int array[], int *sub)
{
    int i, j;
    int different;
    int found;

    found = -1;
    for (j = 0; found == -1 && j < ARRAY_SIZE - len(sub); ++j)
    {
        different = 0;
        for (i = 0; sub[i] != -1; ++i)
        {
            if (array[i + j] != sub[i])
            {
                different = 1;
            }
        }
        if (different == 0)
        {
            found = j;
        }
    }
    return found;
}

int len(int *a)
{
    int t = 0;
    while (a[t] != -1)
    {
        ++t;
    }
    return t;
}
