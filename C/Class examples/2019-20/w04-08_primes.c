/********************************************************************-*-c-*-*\
*               *  Code example for Computer Sciences 2019-20                *
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
    for(int number = 2; number < 1000; number = number + 1) {
        // check if prime
        int factors = 0;
        for(int n = 2; n < number; n = n + 1) {
            if(number % n == 0) {
                factors = factors + 1;
            }
        }
        if(factors == 0) {
            printf("%d ", number);
        }
    }

    return 0;
}
