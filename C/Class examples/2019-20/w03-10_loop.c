// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

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
