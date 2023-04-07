// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;

    t = 0;
    while (t < 1000)
    {
        printf("%d Whoa!\n", t);
        if (t == 3)
        {
            printf("I'm failing the exam :-)\n");
            break;
        }
        t = t + 1;
    }
    return 0;
}
