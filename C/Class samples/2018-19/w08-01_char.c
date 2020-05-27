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
#include <ctype.h>

int main()
{
    printf("Hello ASCII world!\n");

    char c;
    printf("Insert a char: ");
    scanf("%c", &c);

    printf("Char: %c\n", c);
    printf("Char: %d (as decimal)\n", c);

    // if(c >= '0' && c <= '9') {
    if(isdigit(c)) {
        printf("Hey, it's a number!\n");
    }

    // if((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
    if(isalnum(c)) {
        printf("Hey, it's ALNUM!\n");
    }

    return 0;
}
