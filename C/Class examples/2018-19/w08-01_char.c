/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

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
    if (isdigit(c))
    {
        printf("Hey, it's a number!\n");
    }

    // if((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
    if (isalnum(c))
    {
        printf("Hey, it's ALNUM!\n");
    }

    return 0;
}
