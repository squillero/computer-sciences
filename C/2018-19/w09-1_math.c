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
#include <math.h>

// proto (functions declaration)
double log2(double x);
double abba_zabba(double x, double y); // non existing function, ok...

int main(void)
{
    double x = 512.0;
    printf("log2(%g) = %g\n", x, log2(x));
}

// function definition
double log2(double x)
{
    double res = log(x)/log(2.0);
    return res;
}
