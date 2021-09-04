/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BAND_FILE_NAME "band.txt"
#define MAX_NAME_LEN 511 + 1
#define MAX_BAND_MEMBERS 64
#define MAX_LINE_SIZE 8192

struct _MEMBER
{
    char name[MAX_NAME_LEN];
    char surname[MAX_NAME_LEN];
};
typedef struct _MEMBER MEMBER;

int main()
{
    MEMBER band[MAX_BAND_MEMBERS];

    FILE *fin = fopen(BAND_FILE_NAME, "r");
    if (fin == NULL)
    {
        fprintf(stderr, "Can't read from %s\n", BAND_FILE_NAME);
        exit(EXIT_FAILURE);
    }
    int band_size = 0;
    char line[MAX_LINE_SIZE];

    while (fgets(line, MAX_LINE_SIZE, fin) != NULL)
    {
        if (sscanf(line, "%s %s", band[band_size].name, band[band_size].surname) != 2)
        {
            strcpy(band[band_size].name, "?");
            sscanf(line, "%s", band[band_size].surname);
        }
        ++band_size;
    }
    fclose(fin);
    for (int t = 0; t < band_size; ++t)
    {
        printf("%d) <%s> <%s>\n", t, band[t].name, band[t].surname);
    }

    return 0;
}
