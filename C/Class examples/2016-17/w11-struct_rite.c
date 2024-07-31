// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *output;

    output = fopen("file2.gx", "w");
    if (output == NULL)
    {
        fprintf(stderr, "Yeuch, can't write to file...\n");
        exit(EXIT_FAILURE);
    }

    fprintf(output, "It works!\n");
    fclose(output);

    return EXIT_SUCCESS;
}
