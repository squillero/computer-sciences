/********************************************************************-*-c-*-*\
*               *  Code examples for Computer Sciences 2017-18               *
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
    printf("dec2bin!\n");

    // char <= short int <= int <= long int <= long long int
    //   1

    int dec;
    int bin_digits[sizeof (long long int) * 8];
    int num_bin_digits;

    printf("Dec: ");
    scanf("%d", &dec);

    num_bin_digits = 0;
    while(dec != 0 /* alt: && num_bin_digits > 0 */ ) {
        bin_digits[num_bin_digits++] = dec % 2;
        dec /= 2;
    }

    printf("Bin: ");
    if(dec == 0) {
        printf("0\n");
    } else {
        for(int t = num_bin_digits - 1; t >= 0; --t) {
            printf("%d", bin_digits[t]);
        }
        printf("\n");
    }

    return 0;
}
