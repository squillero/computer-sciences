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

#define MAX_DIGIT   12

int main()
{
    int binary[MAX_DIGIT];
    printf("Insert number (%d digits): ", MAX_DIGIT);
    for(int d = 0; d < MAX_DIGIT; ++d) {
        scanf("%d", &binary[d]);
    }

    int value = 0;
    for(int d = 0; d < MAX_DIGIT; ++d) {
        value = value * 2 + binary[d];
    }
    printf("Value: %d\n", value);

    return 0;
}
