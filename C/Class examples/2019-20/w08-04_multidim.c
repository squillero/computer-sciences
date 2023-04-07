// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

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
