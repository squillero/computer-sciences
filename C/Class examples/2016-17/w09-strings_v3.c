// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

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
