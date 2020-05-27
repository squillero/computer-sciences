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
    int num;

    printf(": ");
    scanf("%d", &num);

    switch(num) {
        case 0:
            printf("Op 0!\n");
            printf("Foo\n");
            break;
        case 1:
        case 23:
        case 10:
        case 65:
        case 'A':
            {
                int t = 0;
                while(t < 4) {
                    printf("Whoa!\n");
                    t = t + 1;
                }
            }
            printf("Op 1!\n");
            printf("Bar\n");
        case 2:
            printf("Op 2!\n");
            printf("Baz\n");
            break;
        case 3:
            printf("Op 3!\n");
            printf("Gargle\n");
            break;
        case 4:
            printf("Op 4!\n");
            printf("Whiz\n");
            break;
        default:
            printf("Uh?\n");
    }


    return 0;
}
