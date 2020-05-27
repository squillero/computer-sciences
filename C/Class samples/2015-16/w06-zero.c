/********************************************************************-*-c-*-*\
*               *  Code examples for Computer Sciences 2015-16               *
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
#include <math.h>

int main()
{
    double x_neg, x_pos;
    double x_zero;
    double val;

    printf("Insert x where f(x) < 0: ");
    scanf("%lf", &x_neg);
    printf("Insert x where f(x) > 0: ");
    scanf("%lf", &x_pos);

    printf("%.10f - %.10f\n", x_neg, x_pos);
    x_zero = ( x_pos + x_neg ) / 2.0;
    val = atan(pow(x_zero, 3.0) + 3*x_zero + 1);
    while(fabs(val) > 1e-10) {
        // I need "floating point" abs
        if(val > 0.0) {
            x_pos = x_zero;
        } else {
            x_neg = x_zero;
        }
        printf("%.10f - %.10f\n", x_neg, x_pos);
        x_zero = ( x_pos + x_neg ) / 2.0;
        val = atan(pow(x_zero, 3.0) + 3*x_zero + 1);
    }
    printf("f(%g) = %g\n", x_zero, val);
    return 0;
}
