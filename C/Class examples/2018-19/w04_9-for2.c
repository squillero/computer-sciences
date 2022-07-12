// Copyright © 2018-2019 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int t = 0; t < 10; t = t + 1)
    {
        if (t % 2 == 1)
            continue;
        printf("%d) Loosing points at the exam!\n", t);
    }
    return 0;
}
