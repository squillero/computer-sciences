/********************************************************************-*-c-*-*\
*               *  Class examples for Computer Sciences 2014-15              *
*    #####      *  (!) Giovanni Squillero <giovanni.squillero@polito.it>     *
*   ######      *                                                            *
*   ###   \     *  Copying and distribution of this file, with or without    *
*    ##G  c\    *  modification, are permitted in any medium without royalty *
*    #     _\   *  provided this notice is preserved.                        *
*    |   _/     *  This file is offered as-is, without any warranty.         *
*    |  _/      *                                                            *
*               *  See: http://www.cad.polito.it/staff/squillero/dida/       *
\****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    num = 0;
    while(num != 42) {
        printf("Tell me the answer of the question about life, universe ");
        printf("and everything else:");
        scanf("%d", &num);
        if(num != 42) {
            if(num > 42) {
                printf("TOO BIG\n");
            } else {
                printf("TOO SMALL\n");
            }
        }
    }
    printf("ok!\n");

    return EXIT_SUCCESS;
}
