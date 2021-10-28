// Copyright © 2016-2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int terminate;
    int t;
    printf("LOOPS!\n");

    terminate = 0; // INIT
    while (terminate == 0)
    {                           // TEST
        printf("Looping...\n"); // BODY
        scanf("%d", &t);
        if (t > 10 && t < 15)
        {
            terminate = 1;
        }
    }

    printf("goodbye cruel world!\n");
    return 0;
}
