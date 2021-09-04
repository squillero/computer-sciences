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

#define BUFFER_SIZE 4096
#define MAX_LEN_KEYWORD 20
#define MAX_LEN_SWCODE 10
#define MAX_LEN_DESCRIPtION 100
#define MAX_VERSIONS 50

typedef struct _HARDWARE
{
    int code;
    char keyword[3][MAX_LEN_KEYWORD + 1];
    char sw[MAX_LEN_SWCODE + 1];
} HARDWARE;

typedef struct _SOFTWARE
{
    char code[MAX_LEN_SWCODE + 1];
    char descr[MAX_LEN_DESCRIPtION + 1];
    int num_devices;
    int first_device;
} SOFTWARE;

// protos
int find_version(char *sw, SOFTWARE *version, int num_versions);

int main(int argc, char *argv[])
{
    char keyword[MAX_LEN_KEYWORD + 1];
    SOFTWARE version[MAX_VERSIONS];
    int num_versions;

    if (argc != 4)
    {
        fprintf(stderr, "Yeuch! Need 3 args\n");
        exit(EXIT_FAILURE);
    }
    strcpy(keyword, argv[2]);
    num_versions = 0;
    FILE *vin = fopen(argv[3], "r");
    if (vin == NULL)
    {
        fprintf(stderr, "Yeuch! Can't open file \"%s\"\n", argv[3]);
        exit(EXIT_FAILURE);
    }
    char buffer[BUFFER_SIZE];
    while (fgets(buffer, BUFFER_SIZE, vin))
    {
        sscanf(buffer, "%s", version[num_versions].code);
        fgets(buffer, BUFFER_SIZE, vin);
        buffer[strlen(buffer) - 1] = '\0'; // chomp final \n
        strcpy(version[num_versions].descr, buffer);
        version[num_versions].num_devices = 0;
        version[num_versions].first_device = -1;
        ++num_versions;
    }
    fclose(vin);

    FILE *catalog = fopen(argv[1], "r");
    if (catalog == NULL)
    {
        fprintf(stderr, "Yeuch! Can't open file \"%s\"\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    HARDWARE hw;
    while (fscanf(catalog, "%s", buffer) != EOF)
    {
        sscanf(buffer, "HW%d", &hw.code);
        fscanf(catalog, "%s %s %s %s",
               hw.keyword[0], hw.keyword[1], hw.keyword[2], hw.sw);
        int v = find_version(hw.sw, version, num_versions);
        if (v >= 0)
        {
            if (version[v].first_device > hw.code || !version[v].num_devices)
            {
                version[v].first_device = hw.code;
            }
            ++version[v].num_devices;
        }
        if (!strcmp(keyword, hw.keyword[0]) || !strcmp(keyword, hw.keyword[1]) || !strcmp(keyword, hw.keyword[2]))
        {
            if (v == -1)
            {
                printf("HW%d %s software description not available\n", hw.code, hw.sw);
            }
            else
            {
                printf("HW%d %s %s\n", hw.code, hw.sw, version[v].descr);
            }
        }
    }
    fclose(catalog);

    for (int v = 0; v < num_versions; ++v)
    {
        if (version[v].num_devices == 0)
        {
            printf("%s not used by any device\n", version[v].code);
        }
        else if (version[v].num_devices == 1)
        {
            printf("%s used by 1 device, first: HW%d\n",
                   version[v].code, version[v].first_device);
        }
        else
        {
            printf("%s used by %d devices, first: HW%d\n",
                   version[v].code, version[v].num_devices, version[v].first_device);
        }
    }

    return 0;
}

int find_version(char *sw, SOFTWARE *version, int num_versions)
{
    for (int t = 0; t < num_versions; ++t)
    {
        if (!strcmp(sw, version[t].code))
        {
            return t;
        }
    }
    return -1;
}
