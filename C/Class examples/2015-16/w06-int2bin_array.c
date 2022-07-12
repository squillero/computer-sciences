// Copyright © 2015-2016 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define MAX_BITS 64

int main()
{
    int num_bits;
    long int num;
    int binary[MAX_BITS] = {0}; // partial init + default

    printf("Int2S+M\n");

    printf("Number of bits (1-%d): ", MAX_BITS);
    scanf("%d", &num_bits);

    printf("Number: ");
    scanf("%ld", &num);

    // SIGN BIT
    if (num < 0)
    {
        binary[num_bits - 1] = 1;
        num = -num;
    }

    int t;
    t = 0;
    while (num != 0)
    {
        binary[t] = (int)(num % 2); // explicit cast
        num = num / 2;
        t = t + 1;
    }

    printf("Binary: ");
    for (t = num_bits - 1; t >= 0; t = t - 1)
    {
        printf("%d", binary[t]);
        if (t % 4 == 0)
        {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
