// Copyright © 2019-2020 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

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
