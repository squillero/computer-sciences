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

#define ever (;;)

int main()
{
    printf("My very first for loop!\n");

    int rep;
    char ch;

    printf("Char: ");
    scanf("%c", &ch);
    printf("Rep: ");
    scanf("%d", &rep);

    /**
    int t;
    t = 0;
    while(t < rep) {
        printf("%c", ch);
        t = t + 1;
    }
    **/

    for(int r = 0; r < 5; r = r + 1) {
        for(int t = 0; t < rep; t = t + 1) {
            printf("%c", ch);
        }
        printf("\n");
    }


    return 0;
}
