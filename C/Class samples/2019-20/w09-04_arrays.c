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

int array3d[][3][2] = {{ { 42, 42 }, { 42, 42 }, { 42, 42 } },
                        { { 42, 42 }, { 42, 42 }, { 42, 42 } },
                        { { 42, 42 }, { 42, 42 }, { 42, 42 } },
                        { { 42, 42 }, { 42, 42 }, { 42, 42 } }};

void func(int a2d[][3])
{
    printf("Yeah!\n");
}

int main()
{
    int array[4] = {1, 2, 3, 4};
    int array2d[4][3] = {{ 0, 1, 2 },
                         { 0, 1, 2 },
                         { 0, 1, 2 },
                         { 0, 1, 2 }};


    func(array2d);
    return 0;
}
