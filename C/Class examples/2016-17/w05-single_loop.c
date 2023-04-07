// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define ever (;;)

int main()
{
    printf("My very first for loop!\n");

    int rep;
    char ch;

    printf("Char: ");
    scanf("%c", &ch);
    printf("Rep: ");
    scanf("%d", &rep);

    /**
    int t;
    t = 0;
    while(t < rep) {
        printf("%c", ch);
        t = t + 1;
    }
    **/

    for (int r = 0; r < 5; r = r + 1)
    {
        for (int t = 0; t < rep; t = t + 1)
        {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
