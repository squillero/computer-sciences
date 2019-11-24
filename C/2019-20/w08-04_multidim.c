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

int Array2d[5][2] = {1, 2, 3, 4};

int main()
{
    for(int t =0; t < 5; ++t) {
        for(int u = 0; u < 2; ++u) {
            printf("%4d", Array2d[t][u]);
        }
        printf("\n");
    }

    return 0;
}
