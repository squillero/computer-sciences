// Copyright © 2016-2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define REP 5

int main()
{
    int valid_inputs;
    double sum;

    sum = 0;
    valid_inputs = 0;

    for (int t = 0; t < REP; t = t + 1)
    {
        double n;
        printf("Insert value: ");
        scanf("%lg", &n);
        if (n >= 0 && n <= 30)
        {
            sum = sum + n;
            valid_inputs = valid_inputs + 1;
        }
    }

    if (valid_inputs > 0)
    {
        double avg = sum / (double)valid_inputs;
        printf("Avg: %g\n", avg);
    }
    else
    {
        printf("D'ho!?\n");
    }
    return 0;
}
