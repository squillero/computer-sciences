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

#define REQ_VALUES 5

int main()
{
    double sum;
    int cnt;

    sum = 0.0;
    cnt = 0;
    while(cnt < REQ_VALUES) {
        int num;
        printf("Input val %02d: ", cnt + 1);
        scanf("%d", &num);
        if(num >= 0 && num <= 10) {
            sum = sum + (double)num;
            cnt = cnt + 1;
        }
    }
    printf("Average: %g\n", sum / (double)REQ_VALUES);
    return 0;
}
