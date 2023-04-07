// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

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
