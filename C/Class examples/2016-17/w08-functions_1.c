// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int douglas(int zaphod)
{
    int x;
    int y = 23;
    x = 22;
    printf("Beeblebrox %d\n", zaphod);
    return x + 20;
}

int main(void)
{
    int x;
    int y = 12;
    x = douglas(999);
    printf("The answer is %d\n", x);
    x = douglas(-1);
    printf("The answer is %d\n", x);
    x = douglas(23);
    printf("The answer is %d\n", x);

    return 0;
}
