/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int num;

    int foo;

    foo = 42; // DECIMAL
    printf("%d\n", foo);
    foo = 042; // OCTAL!
    printf("%d\n", foo);
    foo = 0x42; // HEX!!
    printf("%d\n", foo);

    printf("Enter number: ");
    scanf("%ld", &num);

    do
    {
        printf("%ld", num % 2);
        num = num / 2;
    } while (num > 0);

    printf("  <== read backwards\n");

    return 0;
}
