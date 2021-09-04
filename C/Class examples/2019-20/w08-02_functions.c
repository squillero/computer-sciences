/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

// declaration (prototype!)
double avg(double x, double y);
void whoa();

// defining function whoa
void whoa()
{
    printf("Whoa!\n");
    return;
}

// int main(int argc, char *argv[])  // standard!
//void main() // don't do it!
int main(void) // acceptable
{
    whoa(); // using whoa, discarding result

    double x = avg(4.14, 7.92);
    printf("avg: %g\n", x);

    x = avg(2 + 2.14, 8.94 - 1.02);
    printf("avg: %g\n", x);
    return 0;
}

double avg(double x, double y)
{
    double useless;
    double result = x + y;
    result /= 2.0;
    return result;
}
