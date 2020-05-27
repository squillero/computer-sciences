/********************************************************************-*-c-*-*\
*               *  Class examples for Computer Sciences 2014-15              *
*    #####      *  (!) Giovanni Squillero <giovanni.squillero@polito.it>     *
*   ######      *                                                            *
*   ###   \     *  Copying and distribution of this file, with or without    *
*    ##G  c\    *  modification, are permitted in any medium without royalty *
*    #     _\   *  provided this notice is preserved.                        *
*    |   _/     *  This file is offered as-is, without any warranty.         *
*    |  _/      *                                                            *
*               *  See: http://www.cad.polito.it/staff/squillero/dida/       *
\****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    int digits;

    printf("Digits: ");
    scanf("%d", &digits);

    int val = 0;
    t = 0;
    while(t<digits) {
        int b;
        scanf("%d", &b);

        val = 2*val + b;
        t=t+1;
    }
    printf("\nVAL: %d\n", val);

    return 0;
}
