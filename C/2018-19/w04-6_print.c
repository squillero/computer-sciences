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
    int rows;
    printf("Enter rows: ");
    scanf("%d", &rows);

    for(int r = 0; r < rows; r = r + 1) {
        /** option1
        for(int c = 0; c < r; c = c + 1) {
            printf(" ");
        }
        for(int c = r; c < rows; c = c + 1) {
            printf("#");
        }
        **/
        for(int c = 0; c < rows; ++c) {
            if(c >= r) {
                printf("#");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
