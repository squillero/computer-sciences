/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

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
