// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    while (i < 3)
    {
        printf("Whoa!\n");
        i = i + 1;
    }

    while (i < 2)
    {
        printf("d'ho!?\n");
        i = i + 1;
    }

    return 0;
}
