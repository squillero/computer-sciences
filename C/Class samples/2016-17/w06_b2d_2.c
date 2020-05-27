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

    printf("Binary number (8 bit): ");
    int decimal = 0;
    for(int t = 0; t < BITS; ++t) {
        int bit;
        scanf("%d", &bit);
        decimal = decimal * 2 + bit;
    }
    printf("Decimal: %d\n", decimal);
    return 0;
}
