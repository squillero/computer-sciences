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
    for (int num = 0; num < 50000; num = num + 1)
    {
        if (num < 2)
        {
            continue;
        }
        _Bool prime = 1; // (boolean) flag! compile >C99
        for (int t = 2; t < num; t = t + 1)
        {
            if (num % t == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
        {
            printf("%d is prime!\n", num);
        }
    }

    printf("Boolean: %d\n", sizeof(_Bool));
    printf("Integer: %d\n", sizeof(int));

    return 0;
}
