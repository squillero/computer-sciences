/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
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

    switch (n)
    {
    case 1:
    case 10:
        printf("One, or Ten?!\n");
        break;
    case 2:
        printf("Two!!\n");
        break;
    case 3:
        printf("Three!!!");
        break;
    case 4:
        printf("Four!!!!\n");
        break;
    default:
        printf("Yeuch\n");
    }

    return 0;
}
