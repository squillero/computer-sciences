// Copyright © 2016-2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define ARRAY1_SIZE 10
#define ARRAY2_SIZE 3

// PROTOS
int array_equal(int array1[], int array2[], int size);
int array_same_elements(int array1[], int array2[]);
int array_array(int array1[], int array2[]);
void print_array(int *a, int size);

void print_array(int *a, int size)
{
    printf("Array at %p:", a);
    for (int t = 0; t < size; ++t)
    {
        printf(" %d", a[t]);
    }
    printf("\n");
}

int main()
{
    int array1[ARRAY1_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[ARRAY2_SIZE] = {3, 4, 5};

    if (array_array(array1, array2) == 1)
    {
        printf("Whoa! Array2 is part of Array1\n");
    }
    else
    {
        printf("D'ho\n");
    }
    return 0;
}

int array_array(int array[], int sub[])
{
    int found = 0;
    // array: 1 2 1 2 1
    // sub:       1 2 1
    for (int offset = 0; offset < ARRAY1_SIZE - ARRAY2_SIZE + 1; ++offset)
    {
        // check array[t + 0] vs. sub[0]
        // check array[t + 1] vs. sub[1]
        // check array[t + 2] vs. sub[2]
        // check array[t + 3] vs. sub[3]
        int flag = 1;
        for (u = 0; u < ARRAY2_SIZE; ++u)
        {
            if (array[offset + u] != sub[u])
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            ++found;
        }
    }
    return found;
}

int array_array_take2(int array1[], int array2[])
{
    int found = 0;
    for (int t = 0; t < ARRAY1_SIZE - ARRAY2_SIZE; ++t)
    {
        int temp[ARRAY2_SIZE];
        for (int u = 0; u < ARRAY2_SIZE; ++u)
        {
            temp[u] = array1[t + u];
        }
        if (array_equal(temp, array2, ARRAY2_SIZE))
        {
            found = 1;
        }
    }
    return found;
}

int array_equal(int a[], int b[], int size)
{
    int equal = 1;
    for (int t = 0; t < size; ++t)
    {
        if (a[t] != b[t])
        {
            equal = 0;
        }
    }
    return equal;
}

int array_cmp(int a[], int b[])
{
    int i = 0;
    int ret;

    while (a[i] == b[i] && i < ARRAY1_SIZE - 1)
    {
        ++i;
    }

    if (a[i] > b[i])
    {
        ret = 1;
    }
    else if (a[i] < b[i])
    {
        ret = -1;
    }
    else
    {
        ret = 0;
    }
    return ret;

    // ie. return a[t] - b[t];
}
