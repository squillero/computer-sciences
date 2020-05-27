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

// declaration (prototype!)
double avg(double x, double y);
void whoa();


// defining function whoa
void whoa()
{
    printf("Whoa!\n");
    return;
}

// int main(int argc, char *argv[])  // standard!
//void main() // don't do it!
int main(void)  // acceptable
{
    whoa();     // using whoa, discarding result

    double x = avg(4.14, 7.92);
    printf("avg: %g\n", x);

    x = avg(2 + 2.14, 8.94- 1.02);
    printf("avg: %g\n", x);
    return 0;
}

double avg(double x, double y)
{
    double useless;
    double result = x + y;
    result /= 2.0;
    return result;
}

