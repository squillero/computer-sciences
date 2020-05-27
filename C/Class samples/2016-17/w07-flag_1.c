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

#define LENGTH 10

int main()
{
    int array[LENGTH];

    for(int t = 0; t < LENGTH; ++t) {
        scanf("%d", &array[t]);
    }

    int at_least_one_neg = 0;
    for(int t = 0; t < LENGTH; ++t) {
        if(array[t] < 0) {
            at_least_one_neg = 1;
        }
    }

    if(at_least_one_neg == 0) {
        printf("WHOA!!!!!\n");
    }
    return 0;
}
