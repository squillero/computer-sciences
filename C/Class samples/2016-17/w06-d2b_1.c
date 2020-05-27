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

int main()
{
    printf("Decimal2Binary converter!\n\n");

    unsigned long long int num;
    int binary[8 * sizeof (unsigned long long int)];

    printf("Total size of binary: %d\n", sizeof (binary));
    printf("Decimal number: ");
    scanf("%u", &num);


    int pos = 0;
    if(num == 0) {
        binary[pos++] = 0;
    } else {
        while(num > 0) {
            binary[pos++] = num % 2;    // cool!
            num /= 2llu;
        }
    }
    printf("Binary number: ");
    for(int t = pos - 1; t >= 0; --t) {
        printf("%d", binary[t]);
    }
    printf("\n");
    return 0;
}
