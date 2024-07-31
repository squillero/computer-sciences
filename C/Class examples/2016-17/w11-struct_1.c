// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE file_information;
    FILE *file_info_pointer;

    // fprintf(file_info_pointer, "Let's crash everything\n");

    printf("Sizeof FILE: %d\n", sizeof(FILE));
    printf("Sizeof FILE *: %d\n", sizeof(FILE *));

    fprintf(stdout, "Hello STDOUT!\n");
    fprintf(stderr, "Hello STDERR!\n");

    int num;
    fscanf(stdin, "%d", &num);
    printf("==> %d\n", num);

    return 0;
}
