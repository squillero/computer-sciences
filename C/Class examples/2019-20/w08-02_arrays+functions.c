// Copyright © 2019-2020 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

// protos
double week_avg(int w[]);

int main()
{
    int week[7] = {1, 2, 3, 4, 2, 5, 1};

    // printf("avg: %g\n", week_avg(&week[2]));
    printf("avg: %g\n", week_avg(week)); // week == address of week[0]
    return 0;
}

//double week_avg(int *w)
double week_avg(int w[])
{
    double sum = 0.0;
    for (int t = 0; t < 7; ++t)
    {
        sum += w[t];
    }
    return sum / 7.0;
}
