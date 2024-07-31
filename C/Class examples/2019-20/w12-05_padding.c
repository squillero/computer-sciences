// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%d vs. ", sizeof(char) + sizeof(char) + sizeof(int));

    struct foo
    {
        char x, y;
        int z;
    };

    printf("%d\n", sizeof(struct foo));

    struct bar
    {
        int x;
        double y;
        char z;
    };

    printf("%d vs. ", sizeof(int) + sizeof(double) + sizeof(char));
    printf("%d\n", sizeof(struct bar));
    //printf("%d\n", sizeof (struct bar[2]));

    return 0;
}
