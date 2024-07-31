// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double a, b;
    char op;

    if (argc != 4)
    {
        printf("Yeuch. Wrong number of arguments.\n");
        exit(EXIT_FAILURE);
    }

    sscanf(argv[1], "%lf", &a);
    op = argv[2][0];
    sscanf(argv[3], "%lf", &b);

    double result;

    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        printf("Yeuch. What the hell '%c' is???\n", op);
        exit(EXIT_FAILURE);
    }

    printf("%g %c %g = %g\n", a, op, b, result);

    return EXIT_SUCCESS;
}
