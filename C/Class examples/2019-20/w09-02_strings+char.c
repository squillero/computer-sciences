/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

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

    char array_of_char[] = {'A', 'B', 'B', 'A'};
    char string[] = {'A', 'B', 'B', 'A', 0};
    char string2[] = {'A', 'B', 'B', 'A', '\0'}; // better

    printf(">>>%s<<<\n", array_of_char); // terrible error
    printf(">>>%s<<<\n", string);        // ok!

    return 0;
}
