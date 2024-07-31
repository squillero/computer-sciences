// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    fprintf(stdout, "Tell me a number: ");
    fscanf(stdin, "%d", &number);
    fprintf(stdout, "You said %d\n", number);

    return 0;
}
