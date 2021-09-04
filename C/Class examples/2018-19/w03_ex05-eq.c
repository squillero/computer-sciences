/********************************************************************-*-c-*-*\
*               *  Code example for Computer Sciences 2018-19                *
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
    double b, c;

    scanf("%lg", &b);
    scanf("%lg", &c);
    printf("Solving %gx + %g == 0\n", b, c);
    if(b == 0) {
        if(c == 0) {
            printf("Indeterminate\n");
        } else {
            printf("Impossible\n");
        }
    } else {
        double x = -c / b;
        printf("Solution: x = %g\n", x);
    }
    return 0;
}
