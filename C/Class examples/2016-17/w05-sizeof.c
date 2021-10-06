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
    printf("Goodbye!\n");

    printf("Sizeof of char: %d\n", sizeof(char));
    printf("Sizeof of short int: %d\n", sizeof(short int));
    printf("Sizeof of int: %d\n", sizeof(int));
    printf("Sizeof of long int: %d\n", sizeof(long int));
    printf("Sizeof of long long int: %d\n", sizeof(long long int));

    int a = -2;
    unsigned int b = 42;
    printf("%d\n", a + b);
    printf("%u\n", a + b);

    return 0;
}
