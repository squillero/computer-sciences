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
    printf("How many bits in a unsigned short int!\n");

    // easy
    printf("Size: %d\n", 8 * sizeof(unsigned short int));

    // 00000001 value: 1
    // 00000010 value: 2
    // 00000100 value: 4

    // 00110110 value: 54
    // 01101100 value: 2 * 54 = 108

    unsigned short int num = 1;
    int counter = 0;
    while (num != 0)
    {
        // multiplying by 2 is pushing the 1 toward the msb
        num *= 2;
        ++counter;
    }
    printf("Size: %d\n", counter);

    return 0;
}
