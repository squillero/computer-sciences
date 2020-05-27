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

int main()
{
    int t;
    int bit;
    int weight;
    int num;

    num = 0;
    weight = 128;
    t = 0;
    while(t < 8) {
        scanf("%d", &bit);
        num = num + weight*bit;

        weight = weight /2;
        t = t +1;
    }

    printf("Value: %d\n", num);


    return 0;
}
