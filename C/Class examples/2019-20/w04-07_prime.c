// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    scanf("%d", &number);

    int factors = 0;
    for (int n = 2; n < number; n = n + 1)
    {
        if (number % n == 0)
        {
            factors = factors + 1;
        }
    }
    if (factors == 0)
    {
        printf("%d is prime!\n", number);
    }
    else
    {
        printf("%d is not prime\n", number);
    }

    return 0;
}
