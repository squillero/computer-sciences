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

int main()
{
    printf("if - else if\n");

    printf("Enter num: ");
    int n;
    scanf("%d", &n);
    if(n == 1) {
        printf("One!\n");
    } else {
        if(n == 2) {
            printf("Two!!\n");
        } else {
            if(n == 3) {
                printf("Three!!!");
            } else {
                if(n == 4) {
                    printf("Four!!!!\n");
                } else {
                    printf("Yeuch\n");
                }
            }
        }
    }

    return 0;
}
