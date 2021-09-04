/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NATIONS_NUM 207

enum
{
    GOLD = 1,
    SILVER = 2,
    BRONZE = 3
};

typedef struct _NATION
{
    char code[4];
    float medals;
} NATION;

int SeekNation(NATION *NatList, char *code);

int main(int argc, char *argv[])
{
    FILE *input;
    NATION NationList[MAX_NATIONS_NUM] = {0};

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: %s file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    input = fopen(argv[1], "r");
    if (input == NULL)
    {
        fprintf(stderr, "Can't open file: \"%s\". Aborting...\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    char code[4];
    int medal;
    while (fscanf(input, "%*s %*s %s %d", code, &medal) != EOF)
    {
        int nation = SeekNation(NationList, code);
        switch (medal)
        {
        case GOLD:
            NationList[nation].medals += 1.0;
            break;
        case SILVER:
            NationList[nation].medals += 1.0 / 10.0;
            break;
        case BRONZE:
            NationList[nation].medals += 1.0 / 20.0;
            break;
        }
    }
    fclose(input);

    int first, second, third;
    printf("Golden medal fractions:\n");
    first = second = third = -1;
    int n = 0;
    while (NationList[n].code[0])
    {
        printf("%s: %g\n", NationList[n].code, NationList[n].medals);
        if (first == -1 || NationList[n].medals > NationList[first].medals)
        {
            third = second;
            second = first;
            first = n;
        }
        else if (second == -1 || NationList[n].medals > NationList[second].medals)
        {
            third = second;
            second = n;
        }
        else if (third == -1 || NationList[n].medals > NationList[third].medals)
        {
            third = n;
        }
        ++n;
    }

    printf("\nTop three nations:\n* %s\n* %s\n* %s\n", NationList[first].code, NationList[second].code, NationList[third].code);

    return EXIT_SUCCESS;
}

int SeekNation(NATION *NatList, char *code)
{
    int n = 0;

    while (NatList[n].code[0] != 0 && strcmp(code, NatList[n].code) != 0)
        ++n;
    if (NatList[n].code[0] == 0)
        strcpy(NatList[n].code, code);
    return n;
}