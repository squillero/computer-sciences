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

#define FIBONACCI   10

int main()
{
    // f0 = 0, f1 = 1, ..., fn+2 = fn+1 + fn

    unsigned long long int Fn, Fn_1, Fn_2;

    Fn = 0;
    Fn_1 = 1;

    printf("%d %d", Fn, Fn_1);      // KICKSTART

    for(int t = 2; t < FIBONACCI; t = t + 1) {
        Fn_2 = Fn_1 + Fn;
        printf(" %u", Fn_2);
        Fn = Fn_1;
        Fn_1 = Fn_2;
    }

    printf("\n");
    return 0;
}
