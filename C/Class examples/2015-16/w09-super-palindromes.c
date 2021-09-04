/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGITS 32

// PROTOS!
int Convert(int num, int base, int *digits);
int Palindrome(int *digits);
void Print(int *d);

int main()
{
    int number;
    int digits[MAX_DIGITS];

    printf("Enter a number: ");
    scanf("%d", &number);

    int base;
    for (base = 2; base <= number; base += 1)
    {
        Convert(number, base, digits);
        if (Palindrome(digits))
        {
            printf("Base %d: ", base);
            Print(digits);
        }
    }

    return 0;
}

void Print(int *d)
{
    int t;
    for (t = 0; d[t] != -1; ++t)
    {
        printf(" %d", d[t]);
    }
    printf("\n");
}

int Convert(int num, int base, int *digits)
{
    int num_digits;
    num_digits = 0;

    while (num > 0 || num_digits == 0)
    {
        digits[num_digits] = num % base;
        num /= base;
        num_digits += 1;
    }
    digits[num_digits] = -1;
    // reverse it!
    int u;
    for (u = 0; u < num_digits / 2; u += 1)
    {
        int tmp;
        tmp = digits[u];
        digits[u] = digits[num_digits - u - 1];
        digits[num_digits - u - 1] = tmp;
    }
    return num_digits;
}

int Palindrome(int *digits)
{
    int len;
    for (len = 0; digits[len] != -1; len += 1)
        ;
    int flag;
    flag = 1;
    int t;
    for (t = 0; t < len / 2; t += 1)
    {
        if (digits[t] != digits[len - t - 1])
        {
            flag = 0;
        }
    }
    return flag;
}
