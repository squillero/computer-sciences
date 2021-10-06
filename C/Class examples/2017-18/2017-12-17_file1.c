/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define INPUT "2017-12-17_file_in.gx"
#define OUTPUT "2017-12-17_file_out.gx"

int main()
{
    fprintf(stdout, "Hello files!\n");

    FILE *fout = fopen(OUTPUT, "w");
    if (fout == NULL)
    {
        fprintf(stderr, "Yeuch: Can't create file \"%s\"\n", OUTPUT);
        exit(EXIT_FAILURE);
    }
    fprintf(fout, "Hello!\n");
    fprintf(fout, "This is my ");
    fprintf(fout, "first file!\n");
    fclose(fout);

    FILE *fin = fopen(INPUT, "r");
    if (fin == NULL)
    {
        fprintf(stderr, "Yeuch: Can't open file \"%s\"\n", INPUT);
        exit(EXIT_FAILURE);
    }
    int num;
    if (fscanf(fin, "%d", &num) == 1)
    {
        printf("The answer is %d\n", num);
    }
    fclose(fin);

    return EXIT_SUCCESS;
}
