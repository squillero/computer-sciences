// Copyright © 2016-2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_LENGTH 256

int main()
{
    char name[MAX_LENGTH];

    printf("Insert your name: ");
    gets(name);
    name[0] = toupper(name[0]);
    printf("\n\nHello %s!\n", name);
    return 0;
}
