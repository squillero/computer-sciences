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

#define MAX_P_TABLE 10

int main()
{
    for(int t = 1; t <= MAX_P_TABLE; t = t + 1) {
        // row
        for(int u = 1; u <= MAX_P_TABLE; u = u + 1) {
            printf("%6d ", t * u);
        }

        printf("\n");
    }
    return 0;
}
