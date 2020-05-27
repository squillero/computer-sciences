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

#define TABLE_MAX   10

int main()
{
    /**
    int bob = 0;                // init
    while(bob < 10) {           // condition
        printf(" %d", bob);     // body
        bob = bob + 1;          // closing (update)
    }
    printf("\n");
    **/

    for(int alice = 0; alice < TABLE_MAX; alice = alice + 1) {
        for(int bob = 0; bob < TABLE_MAX; bob = bob + 1) {
            printf(" %4d", (1+alice)*(1+bob));
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
