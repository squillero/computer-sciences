// Copyright © 2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = '!';

    printf("%c\n", c);
    printf("%c\n", toupper(c));
    printf("%c\n", c - 'a' + 'A');

    return 0;
}
