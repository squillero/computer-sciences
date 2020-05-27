/********************************************************************-*-c-*-*\
*               *  Code examples for Computer Sciences 2015-16               *
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

#define MAX_BITS 64

int main()
{
    int num_bits;
    long int num;
    int binary[MAX_BITS] = { 0 }; // partial init + default

    printf("Int2S+M\n");

    printf("Number of bits (1-%d): ", MAX_BITS);
    scanf("%d", &num_bits);

    printf("Number: ");
    scanf("%ld", &num);

    // SIGN BIT
    if(num < 0) {
        binary[num_bits -1] = 1;
        num = -num;
    }

    int t;
    t = 0;
    while(num != 0) {
        binary[t] = (int)(num % 2); // explicit cast
        num = num /2;
        t = t+1;
    }

    printf("Binary: ");
    for(t=num_bits-1; t>=0; t=t-1) {
        printf("%d", binary[t]);
        if(t%4==0) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
