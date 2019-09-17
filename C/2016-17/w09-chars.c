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
        printf("Char '%c' (%d)", c, c);
        if(isalnum(c)) {
            printf(" ALNUM");
        }
        if(isdigit(c)) {
            printf(" IT'S A DIGIT");
        }
        if(isspace(c)) {
            printf("SPACE!");
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
