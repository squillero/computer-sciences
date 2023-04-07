// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dim;
    printf("Dim: ");
    scanf("%d", &dim);

    for (int t = 0; t < dim; t = t + 1)
    {
        for (int u = 0; u < t + 1; u = u + 1)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
