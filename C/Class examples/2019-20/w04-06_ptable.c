// Copyright © 2019-2020 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int t = 1; t < 13; t = t + 1)
    {
        // row
        for (int u = 1; u < 13; u = u + 1)
        {
            printf("%6d ", t * u);
        }

        printf("\n");
    }
    return 0;
}
