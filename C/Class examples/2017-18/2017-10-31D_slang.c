/********************************************************************-*-c-*-*\
*               *  Code examples for Computer Sciences 2017-18               *
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
    printf("Hello slang!\n");

    int t = 0;

    t += 4;         // t = t + 4;
    t *= 10;        // t = t * 10;
    t -= 8;         // t = t - 8;


    int foo;
    int bar;

    foo = 42;
    bar = foo-- * 10;

    foo = 42;
    bar = --foo * foo++;






    return 0;
}
