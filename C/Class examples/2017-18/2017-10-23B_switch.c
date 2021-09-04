/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf(": ");
    scanf("%d", &num);

    switch (num)
    {
    case 0:
        printf("Op 0!\n");
        printf("Foo\n");
        break;
    case 1:
    case 23:
    case 10:
    case 65:
    case 'A':
    {
        int t = 0;
        while (t < 4)
        {
            printf("Whoa!\n");
            t = t + 1;
        }
    }
        printf("Op 1!\n");
        printf("Bar\n");
    case 2:
        printf("Op 2!\n");
        printf("Baz\n");
        break;
    case 3:
        printf("Op 3!\n");
        printf("Gargle\n");
        break;
    case 4:
        printf("Op 4!\n");
        printf("Whiz\n");
        break;
    default:
        printf("Uh?\n");
    }

    return 0;
}
