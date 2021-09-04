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
#include <math.h>

int main()
{
    double a, b, c;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    printf("Solving: %g*x^2 + %g*x + %g == 0\n", a, b, c);

    if(a == 0.0) {
        if(b == 0.0) {
            if(c == 0.0) {
                printf("Indeterminate\n");
            } else {
                printf("Impossible\n");
            }
        } else {
            double x = -c / b;
            printf("x = %g\n", x);
        }
    } else {
        double delta = b*b - 4*a*c;
        if(delta >= 0.0) {
            double x1 = ( -b + sqrt(delta) ) / (2.0 * a);
            double x2 = ( -b - sqrt(delta) ) / (2.0 * a);
            printf("x1 = %g\nx2 = %g\n", x1, x2);
        } else {
            printf("D'ho!?\n");
        }
    }


    /*
    */
    // take 2
    //if(b == 0.0 && c == 0.0) {
    //    printf("Indeterminate\n");
    //} else {
    //    if(b == 0.0 && c != 0.0) {
    //        printf("Impossible\n");
    //    } else {
    //        x = -c / b;
    //        printf("x = %g\n", x);
    //    }
    //}


    return 0;
}
