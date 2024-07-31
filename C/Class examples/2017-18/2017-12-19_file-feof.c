// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

#define FILENAME "terribe_feof.gx"

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
