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

#define BITS 8

int main()
{
    printf("Hello world!\n");

    int binary[BITS];

    printf("Binary number (8 bit): ");
    for(int t = 0; t < BITS; ++t) {
        scanf("%d", &binary[t]);
    }
    int decimal = 0;
    int weight = 1;
    for(int t = BITS - 1; t >= 0; --t) {
        decimal += binary[t] * weight;
        weight *= 2;
    }
    printf("Decimal: %d\n", decimal);
    return 0;
}
