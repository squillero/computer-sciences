/********************************************************************-*-c-*-*\
*               *  Code example for Computer Sciences 2019-20                *
*    #####      *  (!) Giovanni Squillero <giovanni.squillero@polito.it>     *
*   ######      *                                                            *
*   ###   \     *  Copying and distribution of this file, with or without    *
*    ##G  c\    *  modification, are permitted in any medium without royalty *
*    #     _\   *  provided this notice is preserved.                        *
*    |   _/     *  This file is offered as-is, without any warranty.         *
*    |  _/      *                                                            *
*               *  See: http://staff.polito.it/giovanni.squillero/dida.php   *
\****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// protos
double week_avg(int w[]);

int main()
{
    int week[7] = {1, 2, 3, 4, 2, 5, 1};

    // printf("avg: %g\n", week_avg(&week[2]));
    printf("avg: %g\n", week_avg(week));     // week == address of week[0]
    return 0;
}

//double week_avg(int *w)
double week_avg(int w[])
{
    double sum = 0.0;
    for(int t = 0; t < 7; ++t) {
        sum += w[t];
    }
    return sum / 7.0;
}
