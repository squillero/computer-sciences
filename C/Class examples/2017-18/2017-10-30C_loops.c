// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

#define REQ_VALUES 5

int main()
{
    double sum;
    int cnt;

    sum = 0.0;
    cnt = 0;
    while (cnt < REQ_VALUES)
    {
        int num;
        printf("Input val %02d: ", cnt + 1);
        scanf("%d", &num);
        if (num >= 0 && num <= 10)
        {
            sum = sum + (double)num;
            cnt = cnt + 1;
        }
    }
    printf("Average: %g\n", sum / (double)REQ_VALUES);
    return 0;
}
