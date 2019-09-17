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

#define NUM_WHOAS 5
#define FOO 'x'
#define BAR(X) (X*X)

int loosing_point_at_the_exam = 10;

int main()
{
    int x = 42;
    int y = 42;

    printf("Test: %d\n", x + y);

    if(x == y) {
        int z = 21;
        if(z % 2 == 1) {
            printf("Test: %d\n", x + y - z);
        }
    }


    return 0;
}
