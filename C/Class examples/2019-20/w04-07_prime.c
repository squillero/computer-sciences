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
    int number;
    scanf("%d", &number);

    int factors = 0;
    for (int n = 2; n < number; n = n + 1)
    {
        if (number % n == 0)
        {
            factors = factors + 1;
        }
    }
    if (factors == 0)
    {
        printf("%d is prime!\n", number);
    }
    else
    {
        printf("%d is not prime\n", number);
    }

    return 0;
}
