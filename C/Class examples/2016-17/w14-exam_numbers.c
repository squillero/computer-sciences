/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 8192
#define MAX_LINE 1024
#define FILENAME "numbers.dat"

int main(int argc, char *argv[])
{
    int num;
    int list[MAX_LEN];
    int deleted[MAX_LEN] = {0};
    int list_size;

    printf("Just another exam!\n");

    // Commandline
    if (argc != 2)
    {
        fprintf(stderr, "Yeuch: One argument is required.\n");
        exit(EXIT_FAILURE);
    }
    sscanf(argv[1], "%d", &num);

    // Input
    FILE *in = fopen(FILENAME, "r");
    if (in == NULL)
    {
        fprintf(stderr, "Yeuch: Can't open \"%s\" for reading.\n", FILENAME);
        exit(EXIT_FAILURE);
    }
    char line[MAX_LINE];
    list_size = 0;
    while (fgets(line, MAX_LINE, in) != NULL)
    {
        sscanf(line, "%d", &list[list_size]);
        ++list_size;
    }
    fclose(in);

    // Debug
    printf("LIST:");
    for (int t = 0; t < list_size; ++t)
    {
        printf(" %d", list[t]);
    }
    printf("\n");

    // Core algorithm
    for (int t = 0; t < list_size; ++t)
    {
        for (int u = t + 1; u < list_size; ++u)
        {
            if (list[t] + list[u] == num)
            {
                deleted[t] = deleted[u] = 1;
            }
        }
    }

    // Debug
    printf("LIST:");
    for (int t = 0; t < list_size; ++t)
    {
        if (!deleted[t])
        {
            printf(" %d", list[t]);
        }
    }
    printf("\n");

    // Output
    FILE *out = fopen(FILENAME, "w");
    if (in == NULL)
    {
        fprintf(stderr, "Yeuch: Can't open \"%s\" for writing.\n", FILENAME);
        exit(EXIT_FAILURE);
    }
    for (int t = 0; t < list_size; ++t)
    {
        if (!deleted[t])
        {
            fprintf(out, "%d\n", list[t]);
        }
    }
    fclose(out);

    return EXIT_SUCCESS;
}
