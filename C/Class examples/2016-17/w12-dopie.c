/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define LINE_LENGTH 1024

int main(int argc, char *argv[])
{
    printf("MY FIRST SERIOUS PROGRAM\n");

    if (argc != 2)
    {
        fprintf(stderr, "Yeuch: Exactly one argument required\n");
        exit(EXIT_FAILURE);
    }

    FILE *input;
    input = fopen(argv[1], "r");
    if (input == NULL)
    {
        fprintf(stderr, "Yeuch: Can't open \"%s\"\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    char line[LINE_LENGTH];
    char out[LINE_LENGTH];
    while (fgets(line, LINE_LENGTH, input) != NULL)
    {
        int o = 0;
        for (int l = 0; line[l] != '\0'; ++l)
        {
            if (!isalpha(line[l]) || line[l] != line[l + 1])
            {
                out[o] = line[l];
                o += 1;
            }
        }
        out[o] = '\0';
        printf("%s", out);
    }

    fclose(input);
    return EXIT_SUCCESS;
}
