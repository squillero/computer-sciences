/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

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
