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

// proto (functions declaration)
double log2(double x);
double abba_zabba(double x, double y); // non existing function, ok...

int main(void)
{
    double x = 512.0;
    printf("log2(%g) = %g\n", x, log2(x));
}

// function definition
double log2(double x)
{
    double res = log(x) / log(2.0);
    return res;
}
