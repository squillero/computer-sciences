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
    int n;

    printf("Hello: ");
    scanf("%d", &n);

    printf("Sum(%d, %d) = ", 0, n);
    int sum = 0;
    while (n >= 0)
    {
        sum = sum + n;
        n = n - 1;
    }
    printf("%d\n", sum);
    return 0;
}
