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
    int t;
    double d;
    int bit;
    int val;

    t = 0;
    val = 0;
    while(t < 8) {
        scanf("%d", &bit);
        val = 2*val + bit;
        t = t +1;
    }
    printf("Val: %d\n", val);

    return 0;
}
