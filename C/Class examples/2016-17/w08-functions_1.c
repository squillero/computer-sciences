/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

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
