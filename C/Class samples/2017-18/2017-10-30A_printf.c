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

#define NUM 12

/* Remember to use comments! */

int main()
{
    for(int r = 1; r <= NUM; r = r + 1) {
        // print row
        for(int c = 1; c <= NUM; c = c + 1) {
            // print cell
            printf("%5d", r * c);
        }
        // print newline
        printf("\n");
    }

    return 0;
}
