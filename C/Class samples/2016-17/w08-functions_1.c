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

int douglas(int zaphod)
{
    int x;
    int y = 23;
    x = 22;
    printf("Beeblebrox %d\n", zaphod);
    return x + 20;
}

int main(void)
{
    int x;
    int y = 12;
    x = douglas(999);
    printf("The answer is %d\n", x);
    x = douglas(-1);
    printf("The answer is %d\n", x);
    x = douglas(23);
    printf("The answer is %d\n", x);


    return 0;
}
