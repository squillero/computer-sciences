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
    int res;
    int min = 1;
    int max = 101;
    int b_correct = 0;
    int n;

    while (b_correct == 0)
    {
        n = (min + max) / 2;
        printf("I guess it is %d. Is it correct? ", n);
        scanf("%d", &res);
        printf("\n");
        if (res == 0)
            b_correct = 1;
        else
        {
            if (res == 1)
                max = n;
            else
                min = n;
        }
    }
    return 0;
}
