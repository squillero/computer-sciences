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

int main()
{
    // integer expression 3
    // integer expression 1 + 2 / 4
    // double expression 3.0
    // double expression 3.0 + 4.2
    // double expression 3 - 2 * 2.3

    double x;
    int y;

    printf("Tell me the value: ");
    scanf("%lf", &x);

    if(x >= 0.0) {
        printf("The number %g is positive\n", x);
        y = (int)x;
        if((double)y == x) {
            printf("The number %g is integer!!!!!\n", x);
        }
    } else {
        printf("The number %g is negative\n", x);
    }


    return 0;
}
