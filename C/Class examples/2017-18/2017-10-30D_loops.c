/********************************************************************-*-c-*-*\
*               *  Code examples for Computer Sciences 2017-18               *
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

/*
 * cal avg(n1, n2, ..., nN)
 * N is unknown, but list is terminated by -1
 */

int main()
{
    int flag_sorry;
    double sum;
    double cnt;

    sum = 0.0;
    cnt = 0.0;
    flag_sorry = 1;
    while(flag_sorry == 1) {
        double num;
        scanf("%lg", &num);
        if(num < 0) {
            flag_sorry = 0;
        } else {
            sum = sum + num;
            cnt = cnt + 1.0;
        }
    }
    if(cnt == 0.0) {
        printf("D'ho!\n");
    } else {
        printf("Avg: %g\n", sum / cnt);
    }
    return 0;
}
