/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* prototypes */
int crazy_sum(int a, int b);
void bar(void);

int main(int argc, char *argv[])
{
    bar(); // int bar(boid)
    int c;
    c = crazy_sum(10, 11);
    printf("c: %d\n", c);
    c = crazy_sum(c, c / 10);
    printf("c: %d\n", c);

    return EXIT_SUCCESS;
}

int crazy_sum(int a, int b)
{
    int c;
    c = a * b + b;
    return c;
}

void bar(void)
{
    printf("D'ho\n");
    return; // optional
    printf("exam_result -= 5\n");
}
