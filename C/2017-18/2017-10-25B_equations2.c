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
#include <math.h>

int main()
{
    int a, b, c;

    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    printf("%d x**2 + %d x + %d = 0\n", a, b, c);

    if(a == 0) {
        a = b;  // I'm LAZY
        b = c;
        if(a == 0) {
            if(b == 0) {
                printf("Truism\n");
            } else {
                printf("No solutions, pal!\n");
            }
        } else {
            float x = -(float)b / (float)a;     // requires >= C99
            printf("Solution: x = %g\n", x);
        }
    } else {
        int delta = b * b - 4 * a * c;

        if(delta < 0) {
            printf("No real roots.\n");
        } else {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);

            printf("x1 = %g\n", x1);
            printf("x2 = %g\n", x2);
        }
    }


    return 0;
}
