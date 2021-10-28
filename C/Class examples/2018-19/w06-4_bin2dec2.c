// Copyright © 2018-2019 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

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

    // convert! take 2
    quantity = 0;
    for (int t = 0; t < num_digits; ++t)
    {
        quantity = quantity * 2 + digit[t];
    }

    // output
    for (int t = 0; t < num_digits; ++t)
    {
        printf("%d", digit[t]);
    }
    printf(" -> %d\n", quantity);

    return 0;
}
