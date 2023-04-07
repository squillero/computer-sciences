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
    for (int r = 0; r < dim; r = r + 1)
    {
        // line
        for (int s = 0; s < r; s = s + 1)
        {
            printf(" ");
        }
        for (int h = 0; h < dim - r; h = h + 1)
        {
            printf("#");
        }

        printf("\n");
    }
}
