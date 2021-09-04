/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

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
