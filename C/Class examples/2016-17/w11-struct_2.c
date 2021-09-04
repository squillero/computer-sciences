/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define FILENAME "file3.gx"
#define MAX_LINE 256

int main()
{
    FILE *input;

    input = fopen(FILENAME, "r");
    if (input == NULL)
    {
        fprintf(stderr, "Yeuch, can't read file %s...\n", FILENAME);
        exit(EXIT_FAILURE);
    }

    char buf[MAX_LINE];
    while (fgets(buf, MAX_LINE, input) != NULL)
    {
        printf("%s", buf);
    }

    fclose(input);

    return EXIT_SUCCESS;
}
