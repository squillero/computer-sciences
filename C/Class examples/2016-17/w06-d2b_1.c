// Copyright © 2016-2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Decimal2Binary converter!\n\n");

    unsigned long long int num;
    int binary[8 * sizeof(unsigned long long int)];

    printf("Total size of binary: %d\n", sizeof(binary));
    printf("Decimal number: ");
    scanf("%u", &num);

    int pos = 0;
    if (num == 0)
    {
        binary[pos++] = 0;
    }
    else
    {
        while (num > 0)
        {
            binary[pos++] = num % 2; // cool!
            num /= 2llu;
        }
    }
    printf("Binary number: ");
    for (int t = pos - 1; t >= 0; --t)
    {
        printf("%d", binary[t]);
    }
    printf("\n");
    return 0;
}
