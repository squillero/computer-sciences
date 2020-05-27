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
    for(int num = 0; num < 50000; num = num + 1) {
        if(num < 2) {
            continue;
        }
        _Bool prime = 1;  // (boolean) flag! compile >C99
        for(int t = 2; t < num; t = t + 1) {
            if(num % t == 0) {
                prime = 0;
                break;
            }
        }
        if(prime == 1) {
            printf("%d is prime!\n", num);
        }
    }

    printf("Boolean: %d\n", sizeof (_Bool));
    printf("Integer: %d\n", sizeof (int));

    return 0;
}
