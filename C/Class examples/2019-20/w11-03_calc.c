/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("Little calculator!\n");

    // first, check argc
    if (argc != 4)
    {
        printf("Yeuch\n");
        exit(1);
    }

    // then convert
    double val1, val2, result;
    sscanf(argv[1], "%lf", &val1);
    sscanf(argv[3], "%lf", &val2);

    int valid = 1; // ie. valis is true
    switch (argv[2][0])
    {
    case '+':
        result = val1 + val2;
        break;
    case '-':
        result = val1 - val2;
        break;
    case 'x':
    case 'X':
        result = val1 * val2;
        break;
    case '/':
        result = val1 / val2;
        break;
    default:
        printf("D'ho!?\n");
        valid = 0; // ie. valis is false
    }

    if (valid)
    {
        printf("%g %c %g = %g\n", val1, argv[2][0], val2, result);
    }

    return 0;
}
