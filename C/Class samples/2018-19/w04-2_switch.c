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
    char c;
    scanf("%c", &c);

    double fa, ce;
    switch(c) {
    case 'f':
    case 'F':
        scanf("%lg", &fa);
        ce = (fa - 32.0) * 5.0 / 9.0;
        break;
    case 'c':
    case 'C':
        scanf("%lg", &ce);
        fa = ce * 9.0 / 5.0 + 32.0;
        break;
    default:
        printf("D'ho!\n");
    }

    return 0;
}
