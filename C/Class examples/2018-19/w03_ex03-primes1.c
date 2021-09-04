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

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    int counter = 0;
    int i = 1;
    while(i <= number) {
        if(number % i == 0) {
            printf(" %d", i);
            counter = counter + 1;
        }
        i = i + 1;
    }
    printf("\nFound %d factors\n", counter);
    if(counter == 2) {
        printf("%d is prime\n", number);
    }

    return 0;
}
