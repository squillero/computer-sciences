/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("if - else if\n");

    printf("Enter num: ");
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("One!\n");
    }
    else if (n == 2)
    {
        printf("Two!!\n");
    }
    else if (n == 3)
    {
        printf("Three!!!");
    }
    else if (n == 4)
    {
        printf("Four!!!!\n");
    }
    else
    {
        printf("Yeuch\n");
    }

    return 0;
}
