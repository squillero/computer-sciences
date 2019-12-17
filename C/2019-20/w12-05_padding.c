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
    printf("%d vs. ", sizeof (char) + sizeof (char) + sizeof (int));

    struct foo {
        char x, y;
        int z;
    };

    printf("%d\n", sizeof (struct foo));

    struct bar {
        int x;
        double y;
        char z;
    };

    printf("%d vs. ", sizeof (int) + sizeof (double) + sizeof (char));
    printf("%d\n", sizeof (struct bar));
    //printf("%d\n", sizeof (struct bar[2]));

    return 0;
}
