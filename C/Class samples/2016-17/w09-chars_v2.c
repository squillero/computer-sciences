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
#include <ctype.h>

int main()
{
    for(int t = 0; t < 10; ++t) {
        int c = getchar();
        if(c >= 'a' && c <= 'z') {
            int pos = c - 'a';
            printf("%c: position: %d\n", c, pos);
            printf("===> %c (%d)\n", 'A' + pos, 'A' + pos);
        } else {
            printf("%c\n", c);
        }
    }
    return EXIT_SUCCESS;
}
