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

#define MAX_DIGITS  128

int main()
{
    int num_digits;
    int digit[MAX_DIGITS];
    int quantity;

    printf("Digits? ");
    scanf("%d", &num_digits);

    printf("Number? ");
    for(int t = 0; t < num_digits; ++t) {
        scanf("%d", &digit[t]);
    }

    // convert! take 1
    quantity = 0;
    int weight = 1;
    for(int t = num_digits-1; t >= 0; --t) {
        quantity += digit[t] * weight;
        weight *= 2;
    }

    // output
    for(int t = 0; t < num_digits; ++t) {
        printf("%d", digit[t]);
    }
    printf(" -> %d\n", quantity);

    return 0;
}
