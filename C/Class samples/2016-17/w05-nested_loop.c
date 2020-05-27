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

#define ROWS        10
#define COLUMNS     50

int main()
{
    for(int r = 0; r < ROWS; r = r + 1) {
        for(int c = 0; c < COLUMNS; c = c + 1) {
            if(r == 0 || r == ROWS - 1 ||
               c == 0 || c == COLUMNS - 1 ||
               (r + c) % 3 == 0 ) {
                printf("#");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
