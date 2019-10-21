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
    int count;
    scanf("%d", &count);

    int t = 0;                          // init
    while(t < count) {                  // cond
        printf("Whoa While!\n");        // body
        t = t + 1;                      // update
    }

    // take 1
    for(int t = 0; t < count; t = t + 1) {
        printf("Whoa For!\n");
    }

    // take 2 -- endless for
    //for(;;) {
    //    printf("Forever...\n");
    //}

    int u = 0;                          // init
    do {
        printf("Whoa Do-While!\n");     // body
        u = u + 1;                      // update
    } while(u < count);                 // cond


    return 0;
}
