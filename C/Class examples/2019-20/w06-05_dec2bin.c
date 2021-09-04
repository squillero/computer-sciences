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

#define MAX_DIGIT   128

int main()
{
    int binary[MAX_DIGIT];
    int value;
    printf("Insert number: ");
    scanf("%d", &value);

    int bin_digit = 0;
    do {
        int r = value % 2;
        binary[bin_digit++] = r;
        value /= 2;
    } while(value > 0);

    for(--bin_digit; bin_digit >= 0; --bin_digit) {
        printf("%d", binary[bin_digit]);
    }

    return 0;
}
