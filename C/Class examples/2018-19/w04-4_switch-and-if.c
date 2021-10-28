// Copyright © 2018-2019 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val;

    scanf("%d", &val);

    if (val % 2 == 1 && val > 100)
    {
        printf("odd AND big! Whoa!\n");
    }
    else if (val % 2 == 1)
    {
        printf("odd!\n");
    }
    else if (val > 100)
    {
        printf("big!\n");
    }
    else if (val == 0)
    {
        printf("ZERO!\n");
    }
    else if (val < 0)
    {
        printf("negative!\n");
    }
    else
    {
        printf("neither odd nor big... and not negative and not zero\n");
    }

    return 0;
}
