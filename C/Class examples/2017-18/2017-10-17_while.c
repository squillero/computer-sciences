/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define NUM_VOTES 5

int main()
{
    int sum;
    int t;
    int valid_votes;

    sum = 0;
    valid_votes = 0;
    t = 0;
    while (t < NUM_VOTES)
    {
        int n;
        scanf("%d", &n);

        if (n >= 18 && n <= 30)
        {
            sum = sum + n;
            valid_votes = valid_votes + 1;
        }

        t = t + 1;
    }
    double avg = (double)sum;
    printf("Average: %g\n", avg / valid_votes);

    return 0;
}
