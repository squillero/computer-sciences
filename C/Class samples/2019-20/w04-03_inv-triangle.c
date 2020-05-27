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
    int dim;
    printf("Dim: ");
    scanf("%d", &dim);
    for(int r = 0; r < dim; r = r + 1) {
        // line
        for(int s = 0; s < r; s = s + 1) {
            printf(" ");
        }
        for(int h = 0; h < dim - r; h = h + 1) {
            printf("#");
        }

        printf("\n");
    }

}
