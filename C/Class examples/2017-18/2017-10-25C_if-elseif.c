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
    // n can be divided by 10?
    // if not, is it even?
    // if not, is it > 1000?

    int n;
    printf(": ");
    scanf("%d", &n);

    if (n % 10 == 0)
    {
        printf("Condition 1\n");
    }
    else if (n % 2 == 0)
    {
        printf("Condition 2 (even)\n");
    }
    else if (n > 1000)
    {
        printf("Condition 3\n");
    }
    else
    {
        printf("None of the above, yeuch...\n");
    }

    if (n == 42)
        printf("DNA!\n");

    return 0;
}
