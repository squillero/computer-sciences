/********************************************************************-*-c-*-*\
*               *  Class examples for Computer Sciences 2014-15              *
*    #####      *  (!) Giovanni Squillero <giovanni.squillero@polito.it>     *
*   ######      *                                                            *
*   ###   \     *  Copying and distribution of this file, with or without    *
*    ##G  c\    *  modification, are permitted in any medium without royalty *
*    #     _\   *  provided this notice is preserved.                        *
*    |   _/     *  This file is offered as-is, without any warranty.         *
*    |  _/      *                                                            *
*               *  See: http://www.cad.polito.it/staff/squillero/dida/       *
\****************************************************************************/

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
        if (n>0)
        {
            cnt_p++; /* cnt += 1 */
            sum_p += n;
        }
        else if(n<0)
        {
            cnt_n = cnt_n + 1;
            sum_n = sum_n + n;
        }
    }
    while (n != 0);

    /* print the average */
    avg_n = (float) sum_n/cnt_n;
    avg_p = (float) sum_p/cnt_p;

    printf("avg positive: %f\n", avg_p);
    printf("avg negative: %f\n", avg_n);

    return 0;
}
