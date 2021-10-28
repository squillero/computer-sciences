// Copyright © 2018-2019 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int mario(int first, int second)
{
    int sum = first + second;
    return sum;

    printf("This line is never executed!\n");
}

int main()
{
    printf("Hello function world!\n");

    int first = 20;
    int x = 22;
    int z = mario(x, first);
    printf("The answer is %d\n", z);
    mario(z, z);

    return 0;
}
