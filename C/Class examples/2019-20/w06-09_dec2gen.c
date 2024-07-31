// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGIT 128

int main()
{
    int number[MAX_DIGIT];
    int value;
    int base;

    printf("Insert number: ");
    scanf("%d", &value);
    printf("Insert base: ");
    scanf("%d", &base);

    int num_digit = 0;
    do
    {
        int r = value % base;
        number[num_digit++] = r;
        value /= base;
    } while (value > 0);

    for (int i = num_digit - 1; i >= 0; --i)
    {
        if (number[i] < 10)
        {
            printf("%d", number[i]);
        }
        else if (number[i] == 10)
        {
            printf("A");
        }
        else if (number[i] == 11)
        {
            printf("B");
        }
        else if (number[i] == 12)
        {
            printf("C");
        }
        else if (number[i] == 13)
        {
            printf("D");
        }
        else if (number[i] == 14)
        {
            printf("E");
        }
        else if (number[i] == 15)
        {
            printf("F");
        }
    }

    return 0;
}
