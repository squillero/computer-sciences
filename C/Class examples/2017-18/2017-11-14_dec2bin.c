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
    printf("dec2bin!\n");

    // char <= short int <= int <= long int <= long long int
    //   1

    int dec;
    int bin_digits[sizeof(long long int) * 8];
    int num_bin_digits;

    printf("Dec: ");
    scanf("%d", &dec);

    num_bin_digits = 0;
    while (dec != 0 /* alt: && num_bin_digits > 0 */)
    {
        bin_digits[num_bin_digits++] = dec % 2;
        dec /= 2;
    }

    printf("Bin: ");
    if (dec == 0)
    {
        printf("0\n");
    }
    else
    {
        for (int t = num_bin_digits - 1; t >= 0; --t)
        {
            printf("%d", bin_digits[t]);
        }
        printf("\n");
    }

    return 0;
}
