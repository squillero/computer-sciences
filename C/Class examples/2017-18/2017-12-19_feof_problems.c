/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define FILENAME "2017-12-19_feof_problems.gx"

int main()
{
    printf("The EOF problem!\n");

    FILE *f = fopen(FILENAME, "r");
    if (f == NULL)
    {
        fprintf(stderr, "Yeuch!\n");
        exit(EXIT_FAILURE);
    }

    // don't use feof before scanf!
    while (!feof(f))
    {
        int n;
        fscanf(f, "%d", &n);
        if (feof(f))
        {
            continue; // terrible patch!
        }
        printf(">>> %d <<<\n", n);
    }
    fclose(f);

    return EXIT_SUCCESS;
}
