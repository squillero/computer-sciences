// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

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
