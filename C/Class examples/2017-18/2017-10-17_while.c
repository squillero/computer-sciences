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

#define NUM_VOTES 5

int main()
{
    int sum;
    int t;
    int valid_votes;

    sum = 0;
    valid_votes = 0;
    t = 0;
    while(t < NUM_VOTES) {
        int n;
        scanf("%d", &n);

        if(n >= 18 && n <= 30) {
            sum = sum + n;
            valid_votes = valid_votes + 1;
        }

        t = t + 1;
    }
    double avg = (double)sum;
    printf("Average: %g\n", avg / valid_votes);

    return 0;
}
