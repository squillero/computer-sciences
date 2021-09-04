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

#define MAX_DIGIT   8

int main()
{
    int binary[MAX_DIGIT];
    printf("Insert number (%d digits): ", MAX_DIGIT);
    for(int d = 0; d < MAX_DIGIT; ++d) {
        scanf("%d", &binary[MAX_DIGIT - d - 1]);
    }

    int value = 0;
    int weight = 1;
    for(int d = 0; d < MAX_DIGIT; ++d) {
        value += binary[d] * weight;
        weight *= 2;
    }
    printf("Value: %d\n", value);

    return 0;
}
