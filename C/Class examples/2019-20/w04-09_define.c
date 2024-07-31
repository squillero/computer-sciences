// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

#define MAX_P_TABLE 10

int main()
{
    for (int t = 1; t <= MAX_P_TABLE; t = t + 1)
    {
        // row
        for (int u = 1; u <= MAX_P_TABLE; u = u + 1)
        {
            printf("%6d ", t * u);
        }

        printf("\n");
    }
    return 0;
}
