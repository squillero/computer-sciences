// Copyright © 2019-2020 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

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
