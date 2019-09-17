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

/*
 * My very first C program!
 */

int main(int argc, char *argv[])
{
    printf("The first program\n=================\n\n");

    int foo;
    printf("Insert a value: ");
    scanf("%d", &foo);

    printf("%d is ", foo);
    if( foo%2 == 0 ) {
        printf("even");
    } else {
        printf("odd");
    }
    printf("\n");

    if(foo == 42) {
        printf("\n\n... long live Douglas\n");
    }

    return EXIT_SUCCESS;
}
