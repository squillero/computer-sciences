// Copyright © 2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int t = 0; t < 20; t = t + 1)
    {
        if (t == 3)
        {
            continue;
        }
        printf("Hello world %d\n", t);
    }
    return 0;
}
