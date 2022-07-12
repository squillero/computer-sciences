// Copyright © Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN_MAXLINE 256
#define LEN_HWCODE 8
#define LEN_SWCODE 10
#define LEN_KEYWORD 20
#define LEN_DESCRIPTION 100
#define MAX_DESCRIPTIONS 50

typedef struct _SOFTWARE
{
    char swcode[LEN_SWCODE + 1];
    char description[LEN_DESCRIPTION + 1];
    char first_device[LEN_HWCODE + 1];
    int count;
} SOFTWARE;

typedef struct _DEVICE
{
    char hwcode[LEN_HWCODE + 1];
    char keyword[3][LEN_KEYWORD + 1];
    char swcode[LEN_SWCODE + 1];
} DEVICE;

// protos
int find_software(SOFTWARE *sw, char *code);

int main(int argc, char *argv[])
{
    SOFTWARE software[MAX_DESCRIPTIONS + 1];
    int num_softwares = 0;

    // boilerplate code
    if (argc != 4)
    {
        fprintf(stderr, "Three arguments required!\n");
        exit(EXIT_FAILURE);
    }

    // read & store the SECOND file
    FILE *softwares_in = fopen(argv[3], "r");
    if (softwares_in == NULL)
    {
        fprintf(stderr, "Can't read file \"%s\".\n", argv[3]);
        exit(EXIT_FAILURE);
    }
    char tmp[LEN_MAXLINE];
    while (fgets(tmp, LEN_MAXLINE, softwares_in) != NULL)
    {
        sscanf(tmp, "%s", software[num_softwares].swcode);
        fgets(tmp, LEN_MAXLINE, softwares_in);
        tmp[strlen(tmp) - 1] = '\0';
        strcpy(software[num_softwares].description, tmp);
        software[num_softwares].count = 0;
        strcpy(software[num_softwares].first_device, "");
        ++num_softwares;
    }
    fclose(softwares_in);

    // add a dummy sw (to mark the end, and handle missing ones)
    strcpy(software[num_softwares].swcode, "");
    strcpy(software[num_softwares].description, "Software not available");
    strcpy(software[num_softwares].first_device, "");
    software[num_softwares].count = 0;

    // let's roll: open the first file
    FILE *catalog_in = fopen(argv[1], "r");
    if (catalog_in == NULL)
    {
        fprintf(stderr, "Can't read file \"%s\".\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    DEVICE dev;
    while (fscanf(catalog_in, "%s %s %s %s %s", dev.hwcode,
                  dev.keyword[0], dev.keyword[1], dev.keyword[2], dev.swcode) != EOF)
    {
        int sw = find_software(software, dev.swcode);
        software[sw].count += 1;
        if (software[sw].count == 1 || strcmp(software[sw].first_device, dev.hwcode) > 0)
        {
            strcpy(software[sw].first_device, dev.hwcode);
        }

        if (strcmp(dev.keyword[0], argv[2]) == 0 || strcmp(dev.keyword[1], argv[2]) == 0 || strcmp(dev.keyword[2], argv[2]) == 0)
        {
            printf("%s %s %s\n", dev.hwcode, dev.swcode, software[sw].description);
        }
    }
    fclose(catalog_in);

    // final statistics
    printf("\nStatistics\n");
    for (int t = 0; t < num_softwares; ++t)
    {
        printf("%s ", software[t].swcode);
        if (software[t].count > 0)
        {
            printf("used by %d devices, first device: %s\n", software[t].count, software[t].first_device);
        }
        else
        {
            printf("not used by any device\n");
        }
    }

    return EXIT_SUCCESS;
}

// returns the index of a sw from its code, "" matches all
int find_software(SOFTWARE *sw, char *code)
{
    int t = 0;
    while (strcmp(sw[t].swcode, "") != 0 && strcmp(sw[t].swcode, code) != 0)
    {
        t += 1;
    }
    return t;
}