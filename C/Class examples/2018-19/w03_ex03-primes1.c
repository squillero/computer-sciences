// Copyright © 2018-2019 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

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
