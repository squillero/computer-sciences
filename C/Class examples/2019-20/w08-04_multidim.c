// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int Array2d[5][2] = {1, 2, 3, 4};

int main()
{
    for (int t = 0; t < 5; ++t)
    {
        for (int u = 0; u < 2; ++u)
        {
            printf("%4d", Array2d[t][u]);
        }
        printf("\n");
    }

    return 0;
}
