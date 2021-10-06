/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BAND_FILE_NAME "band.txt"
#define MAX_NAME_LEN 511 + 1
#define MAX_BAND_MEMBERS 64

int main()
{
    // take 1
    FILE *f1 = fopen(BAND_FILE_NAME, "r");
    if (f1 == NULL)
    {
        fprintf(stderr, "Can't read from %s\n", BAND_FILE_NAME);
        exit(EXIT_FAILURE);
    }
    char band1[MAX_BAND_MEMBERS][MAX_NAME_LEN];
    int bs1 = 0;
    while (fgets(band1[bs1], MAX_NAME_LEN, f1) != NULL)
    {
        band1[bs1][strlen(band1[bs1]) - 1] = '\0';
        ++bs1;
    }
    fclose(f1);
    for (int t = 0; t < bs1; ++t)
    {
        printf("%d) %s\n", t, band1[t]);
    }

    // take 2 -- really bad code
    FILE *f2 = fopen(BAND_FILE_NAME, "r");
    if (f2 == NULL)
    {
        fprintf(stderr, "Can't read from %s\n", BAND_FILE_NAME);
        exit(EXIT_FAILURE);
    }
    char band2[MAX_BAND_MEMBERS][2][MAX_NAME_LEN];
    int bs2 = 0;
    while (fscanf(f2, "%s %s", band2[bs2][0], band2[bs2][1]) != EOF)
    {
        ++bs2;
    }
    fclose(f2);
    for (int t = 0; t < bs2; ++t)
    {
        printf("%d) <%s> <%s>\n", t, band2[t][0], band2[t][1]);
    }

    // take 3
    FILE *f3 = fopen(BAND_FILE_NAME, "r");
    if (f3 == NULL)
    {
        fprintf(stderr, "Can't read from %s\n", BAND_FILE_NAME);
        exit(EXIT_FAILURE);
    }
    struct _MEMBER
    {
        char name[MAX_NAME_LEN];
        char surname[MAX_NAME_LEN];
    };
    typedef struct _MEMBER MEMBER;
    MEMBER band3[MAX_BAND_MEMBERS];
    int bs3 = 0;
    while (fscanf(f3, "%s %s", band3[bs3].name, band3[bs3].surname) != EOF)
    {
        ++bs3;
    }
    fclose(f3);
    for (int t = 0; t < bs2; ++t)
    {
        printf("%d) <%s> <%s>\n", t, band3[t].name, band3[t].surname);
    }

    return 0;
}
