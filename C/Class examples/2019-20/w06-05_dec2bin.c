/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGIT 128

int main()
{
    int binary[MAX_DIGIT];
    int value;
    printf("Insert number: ");
    scanf("%d", &value);

    int bin_digit = 0;
    do
    {
        int r = value % 2;
        binary[bin_digit++] = r;
        value /= 2;
    } while (value > 0);

    for (--bin_digit; bin_digit >= 0; --bin_digit)
    {
        printf("%d", binary[bin_digit]);
    }

    return 0;
}
