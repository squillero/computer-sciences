/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

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
