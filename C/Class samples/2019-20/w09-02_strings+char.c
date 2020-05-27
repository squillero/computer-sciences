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

int main()
{
    char x1 = 65;   // const starting with 1-9 are decimal
    char x2 = 0x41; // const starting with 0x are hexadecimal
    char x3 = 0101; // const starting with 0 are octal
    char x4 = 'A';  // ASCII table lookup

    printf("%c %c %c %c\n", x1, x2, x3, x4);
    printf("%d %d %d %d\n", x1, x2, x3, x4);

    char array_of_char[] = { 'A', 'B', 'B', 'A' };
    char string[] = { 'A', 'B', 'B', 'A', 0 };
    char string2[] = { 'A', 'B', 'B', 'A', '\0' };  // better

    printf(">>>%s<<<\n", array_of_char);    // terrible error
    printf(">>>%s<<<\n", string);           // ok!

    return 0;
}
