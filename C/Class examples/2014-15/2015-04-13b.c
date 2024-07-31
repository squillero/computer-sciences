// Copyright © 2015 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000

int main()
{
    unsigned long int num;
    int bit[SIZE];
    int bit_copy[SIZE];
    int bitCount;

    printf("DEC: ");
    scanf("%lu", &num);
    printf("Converting %lu...\n", num);
    bit[0] = 0;
    bitCount = 0;
    while (num > 0)
    {
        bit[bitCount] = num % 2;
        bitCount += 1;

        num /= 2; // same as: num = num / 2
    }

    int t;
    if (bitCount == 0)
    {
        bitCount = 1;
    }
    t = bitCount - 1;
    while (t >= 0)
    {
        printf("%d", bit[t]);
        t -= 1;
    }
    printf("\n");

    // COPY
    t = 0;
    while (t < bitCount)
    {
        bit_copy[t] = bit[t];
        t += 1;
    }

    return EXIT_SUCCESS;
}
