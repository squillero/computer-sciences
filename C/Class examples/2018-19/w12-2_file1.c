/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE 1024

int main()
{
    fprintf(stdout, "My first program using files!!!!\n");

    // token by token
    printf("Read token by token\n");
    FILE *fin = fopen("x.dat", "r");
    if (fin == NULL)
    {
        fprintf(stderr, "Oh dear, we had a problem...\n");
        exit(EXIT_FAILURE);
    }
    int t;
    while (fscanf(fin, "%d", &t) != EOF)
    { // READ N' CHECK
        printf("Got %d!\n", t);
    }
    fclose(fin);

    // line by line
    printf("Read line by line\n");
    fin = fopen("x.dat", "r");
    if (fin == NULL)
    {
        fprintf(stderr, "Oh dear, we had a problem...\n");
        exit(EXIT_FAILURE);
    }
    char line[MAX_LINE];
    while (fgets(line, MAX_LINE, fin) != NULL)
    {
        line[strlen(line) - 1] = '\0'; // chomp!
        printf("Got \"%s\"\n", line);
    }
    fclose(fin);

    // and now output
    FILE *fout = fopen("y.dat", "w");
    if (fout == NULL)
    {
        fprintf(stderr, "Oh dear, we had a problem...\n");
        exit(EXIT_FAILURE);
    }
    fprintf(fout, "Something...\n");
    fprintf(fout, "... something else.\n");
    fclose(fout);

    // finally, appending
    fout = fopen("y.dat", "a");
    if (fout == NULL)
    {
        fprintf(stderr, "Oh dear, we had a problem...\n");
        exit(EXIT_FAILURE);
    }
    fprintf(fout, "\n\n\nhe he he :-)");
    fclose(fout);

    return 0;
}
