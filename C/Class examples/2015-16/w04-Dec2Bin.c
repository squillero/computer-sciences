// Author: Giovanni Squillero <giovanni.squillero@polito.it>
// Copyright © 2016 Giovanni Squillero / Politecnico di Torino
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Tell me a number: ");
    scanf("%d", &num);

    while (num > 0)
    {

        printf("%d", num % 2);
        num = num / 2;
    }
    printf("\n\nHey ho! Now read right to left...\n");

    return 0;
}
