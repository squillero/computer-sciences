// Copyright © 2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

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
