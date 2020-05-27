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
    int a = 7;

    printf("a / 2 = %d\n", a/2);

    double tmp = a / 2;
    printf("a / 2 = %g\n", tmp);

    // old school
    double tmp2 = a / 2.0;
    printf("a / 2 = %g\n", tmp2);

    // newer
    double tmp3 = (double)a / 2.0;
    printf("a / 2 = %g\n", tmp3);

    return 0;
}
