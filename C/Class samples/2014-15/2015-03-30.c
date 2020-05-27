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

int main()
{
    long int num;

    int foo;

    foo = 42;   // DECIMAL
    printf("%d\n", foo);
    foo = 042;  // OCTAL!
    printf("%d\n", foo);
    foo = 0x42;  // HEX!!
    printf("%d\n", foo);


    printf("Enter number: ");
    scanf("%ld", &num);

    do {
        printf("%ld", num%2);
        num = num /2;
    } while(num > 0);

    printf("  <== read backwards\n");

    return 0;
}
