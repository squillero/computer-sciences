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

#define SIZE 10

int main()
{
    for(int r = 0; r < SIZE; r = r + 1) {
        for(int c = 0; c < r; c = c + 1) {
            printf(" ");
        }
        for(int c = 0; c < 10-r; c = c + 1) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
