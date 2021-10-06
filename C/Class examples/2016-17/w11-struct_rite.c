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
