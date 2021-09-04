/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double n1, n2;
    double result;

    if (argc != 4)
    {
        printf("Yeuch!\n");
        exit(EXIT_FAILURE);
    }

    sscanf(argv[1], "%lf", &n1);
    sscanf(argv[3], "%lf", &n2);

    //if(strcmp(argv[2], "+")==0) {
    //    ...
    //} else if(strcmp(argv[2], "/")==0) {
    //    ...
    //}

    switch (argv[2][0])
    {
    case '+':
        result = n1 + n2;
        break;
    case '-':
        result = n1 - n2;
        break;
    case '*':
        result = n1 * n2;
        break;
    case '/':
        result = n1 / n2;
        break;
    default:
        printf("D'ho\n");
        exit(EXIT_FAILURE);
    }

    printf("%g %s %g = %g\n", n1, argv[2], n2, result);

    return EXIT_SUCCESS;
}
