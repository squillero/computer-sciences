// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

enum
{
    ADDITION,
    SUBTRACTION,
    MULTIPLICATION,
    DIVISION
};

int main(int argc, char *argv[])
{
    int operation;

    if (argc < 4)
    {
        fprintf(stderr, "Wrong number of arguments!\n");
        exit(EXIT_FAILURE);
    }

    switch (argv[1][0])
    {
    case '+':
        operation = ADDITION;
        break;
    case '-':
        operation = SUBTRACTION;
        break;
    case '/':
        operation = DIVISION;
        break;
    case '*':
    case 'x':
    case 'X':
        operation = MULTIPLICATION;
        break;
    default:
        fprintf(stderr, "Unknown operation '%c'\n", argv[1][0]);
        exit(EXIT_FAILURE);
    }

    double result = atof(argv[2]);
    for (int t = 3; t < argc; ++t)
    {
        switch (operation)
        {
        case ADDITION:
            result += atof(argv[t]);
            break;
        case SUBTRACTION:
            result -= atof(argv[t]);
            break;
        case MULTIPLICATION:
            result *= atof(argv[t]);
            break;
        case DIVISION:
            result /= atof(argv[t]);
            break;
        }
    }
    printf("Result: %g\n", result);

    return 0;
}
