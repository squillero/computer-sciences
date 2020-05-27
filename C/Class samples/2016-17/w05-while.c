/********************************************************************-*-c-*-*\
*               *  Code examples for Computer Sciences 2016-17               *
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
    int terminate;
    int t;
    printf("LOOPS!\n");

    terminate = 0;  // INIT
    while(terminate == 0) { // TEST
        printf("Looping...\n"); // BODY
        scanf("%d", &t);
        if(t > 10 && t < 15) {
            terminate= 1;
        }
    }

    printf("goodbye cruel world!\n");
    return 0;
}
