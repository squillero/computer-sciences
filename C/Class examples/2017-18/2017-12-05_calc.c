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
    printf("Calculator!\n");
    double op1, op2;
    double result;

    if (argc != 4)
    {
        printf("Yeuch\n");
        exit(EXIT_FAILURE);
    }
    sscanf(argv[1], "%lf", &op1);
    sscanf(argv[3], "%lf", &op2);

    switch (argv[2][0])
    {
    case '+':
        result = op1 + op2;
        break;
    case '-':
        result = op1 - op2;
        break;
    default:
        printf("Can't understand %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    printf("%g %c %g = %g\n",
           op1, argv[2][0], op2, result);

    return EXIT_SUCCESS;
}
