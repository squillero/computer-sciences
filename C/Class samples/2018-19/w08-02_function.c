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

int mario(int first, int second)
{
    int sum = first + second;
    return sum;

    printf("This line is never executed!\n");
}

int main()
{
    printf("Hello function world!\n");

    int first = 20;
    int x = 22;
    int z = mario(x, first);
    printf("The answer is %d\n", z);
    mario(z, z);

    return 0;
}
