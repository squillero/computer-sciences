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

/*
 * Simplistic binary 2 decimal converter
 * Challenge: rewrite it without if & without the variable weight
 */

int main()
{
    int t;
    int val, weight;

    val = 0;
    weight = 128;
    t = 0;
    while(t < 8) {
        int b;

        scanf("%d", &b);
        if(b==1) {
            val = val + weight;
        }

        weight = weight /2;
        t = t +1;
    }
    printf("Val = %d\n", val);


    return 0;
}
