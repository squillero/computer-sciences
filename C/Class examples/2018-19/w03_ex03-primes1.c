// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    int counter = 0;
    int i = 1;
    while (i <= number)
    {
        if (number % i == 0)
        {
            printf(" %d", i);
            counter = counter + 1;
        }
        i = i + 1;
    }
    printf("\nFound %d factors\n", counter);
    if (counter == 2)
    {
        printf("%d is prime\n", number);
    }

    return 0;
}
