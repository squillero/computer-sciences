// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Please, type 42: ");

    int dna;
    scanf("%d", &dna);

    if (dna == 42)
    {
        printf("Long life Douglas!\n");
    }
    else
    {
        printf("D'ho!?\n");
    }

    return 0;
}
