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

int main()
{
    int val;

    scanf("%d", &val);

    if(val % 2 == 1 && val > 100) {
        printf("odd AND big! Whoa!\n");
    } else if(val % 2 == 1) {
        printf("odd!\n");
    } else if(val > 100) {
        printf("big!\n");
    } else if(val == 0) {
        printf("ZERO!\n");
    } else if(val < 0) {
        printf("negative!\n");
    } else {
        printf("neither odd nor big... and not negative and not zero\n");
    }

    return 0;
}
