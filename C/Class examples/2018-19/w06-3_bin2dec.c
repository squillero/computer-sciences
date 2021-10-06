/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGITS 128

int main()
{
    int num_digits;
    int digit[MAX_DIGITS];
    int quantity;

    printf("Digits? ");
    scanf("%d", &num_digits);

    printf("Number? ");
    for (int t = 0; t < num_digits; ++t)
    {
        scanf("%d", &digit[t]);
    }

    // convert! take 1
    quantity = 0;
    int weight = 1;
    for (int t = num_digits - 1; t >= 0; --t)
    {
        quantity += digit[t] * weight;
        weight *= 2;
    }

    // output
    for (int t = 0; t < num_digits; ++t)
    {
        printf("%d", digit[t]);
    }
    printf(" -> %d\n", quantity);

    return 0;
}
