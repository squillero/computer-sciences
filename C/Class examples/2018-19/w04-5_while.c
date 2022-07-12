// Copyright © 2018-2019 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define TABLE_MAX 10

int main()
{
    /**
    int bob = 0;                // init
    while(bob < 10) {           // condition
        printf(" %d", bob);     // body
        bob = bob + 1;          // closing (update)
    }
    printf("\n");
    **/

    for (int alice = 0; alice < TABLE_MAX; alice = alice + 1)
    {
        for (int bob = 0; bob < TABLE_MAX; bob = bob + 1)
        {
            printf(" %4d", (1 + alice) * (1 + bob));
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
