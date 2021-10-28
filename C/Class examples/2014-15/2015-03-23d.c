// Copyright © 2015 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cnt_p = 0, cnt_n = 0, sum_p = 0, sum_n = 0;
    int n;
    float avg_n, avg_p;
    do
    {
        scanf("%d", &n);
        if (n > 0)
        {
            cnt_p++; /* cnt += 1 */
            sum_p += n;
        }
        else if (n < 0)
        {
            cnt_n = cnt_n + 1;
            sum_n = sum_n + n;
        }
    } while (n != 0);

    /* print the average */
    avg_n = (float)sum_n / cnt_n;
    avg_p = (float)sum_p / cnt_p;

    printf("avg positive: %f\n", avg_p);
    printf("avg negative: %f\n", avg_n);

    return 0;
}
