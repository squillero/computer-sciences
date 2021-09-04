/********************************************************************-*-c-*-*\
*               *  Class examples for Computer Sciences 2014-15              *
*    #####      *  (!) Giovanni Squillero <giovanni.squillero@polito.it>     *
*   ######      *                                                            *
*   ###   \     *  Copying and distribution of this file, with or without    *
*    ##G  c\    *  modification, are permitted in any medium without royalty *
*    #     _\   *  provided this notice is preserved.                        *
*    |   _/     *  This file is offered as-is, without any warranty.         *
*    |  _/      *                                                            *
*               *  See: http://www.cad.polito.it/staff/squillero/dida/       *
\****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define SIZE    1000

int main()
{
    unsigned long int num;
    int bit[SIZE];
    int bit_copy[SIZE];
    int bitCount;

    printf("DEC: ");
    scanf("%lu", &num);
    printf("Converting %lu...\n", num);
    bit[0] = 0;
    bitCount = 0;
    while(num > 0) {
        bit[bitCount] = num%2;
        bitCount += 1;

        num /= 2;   // same as: num = num / 2
    }

    int t;
    if(bitCount == 0 ) {
        bitCount = 1;
    }
    t = bitCount -1;
    while(t >= 0) {
        printf("%d", bit[t]);
        t -= 1;
    }
    printf("\n");

    // COPY
    t = 0;
    while(t < bitCount) {
        bit_copy[t] = bit[t];
        t += 1;
    }

    return EXIT_SUCCESS;
}
