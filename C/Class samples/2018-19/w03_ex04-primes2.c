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
    int number;

    printf("Primes:");
    number = 0;
    while(number < 10000) {
        number = number + 1;

        int cnt = 0;
        int i = 1;
        while(i <= number) {
            if(number % i == 0) {
                cnt = cnt + 1;
            }
            i = i + 1;
        }
        if(cnt == 2) {
            printf(" %d", number);
        }
    }
    printf("\n");

    return 0;
}
