// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter = 0; // INIT
    while (counter < 100)
    {                           // CONDITION
        printf("%d ", counter); // BODY
        counter = counter + 2;  // UPDATE
    }
    printf("\n");
    return 0;
}
