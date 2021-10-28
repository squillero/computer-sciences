// Copyright © 2018-2019 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

// protos
int sum(int v[], int n_elem);

// global variables
#define DIM_X 3
#define DIM_Y 2
int array[DIM_X][DIM_Y] = {1, 2, 3, 4, 5, 6};

int main()
{

    for (int t = 0; t < 3; ++t)
    {
        for (int u = 0; u < 2; ++u)
        {
            printf("%3d", array[t][u]);
        }
        printf("\n");
    }

    printf("Sum: %d\n", sum2d());

    return 0;
}

int sum(int v[], int n_elem)
{
    int tot = 0;
    for (int t = 0; t < n_elem; ++t)
    {
        tot += v[t];
    }
    return tot;
}

// ONLY good reason to use global variables
int sum2d()
{
    int tot = 0;
    for (int t = 0; t < DIM_X; ++t)
    {
        // array[t] is an array of int
        tot += sum(array[t], DIM_Y);
    }
    return tot;
}
