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
    double fa, ce;

    //printf("%c is %d %x\n", 'a', 'a', 'a');

    scanf("%c", &c);

    if(c == 'f') {
        scanf("%lg", &fa);
        ce = (fa - 32.0) * 5.0 / 9.0;
    } else if(c == 'c') {
        scanf("%lg", &ce);
        fa = ce * 9.0 / 5.0 + 32.0;
    } else if(c == '!') {
        printf("BANG!\n");
    } else {
        printf("D'ho!\n");
    }


    return 0;
}
