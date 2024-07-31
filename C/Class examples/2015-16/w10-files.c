// Copyright © 2015-2016 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 512

int main(int argc, char *argv[])
{
    FILE *foo;
    char name[] = "test.qaz";

    foo = fopen(name, "w");
    if (foo == NULL)
    {
        fprintf(stderr, "Yeuch. Can't open %s\n", name);
        exit(EXIT_FAILURE);
    }
    fprintf(foo, "Hello FILE world!!!!\n");
    fclose(foo);

    FILE *bar;
    bar = fopen("input.qwe", "r");
    if (bar == NULL)
    {
        fprintf(stderr, "Yeuch, can't open bar\n");
        exit(EXIT_FAILURE);
    }

    char line[BUFFER_SIZE];
    while (fgets(line, BUFFER_SIZE, bar) != NULL)
    {
        printf(">> %s", line);
    }

    fclose(bar);

    return EXIT_SUCCESS;
}
