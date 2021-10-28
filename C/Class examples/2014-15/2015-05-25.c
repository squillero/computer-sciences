// Copyright © 2015 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_STR 256

int main(int argc, char *argv[])
{
    FILE *out;
    char mode[3];
    int fileNameIndex;

    if (argc < 2)
    {
        fprintf(stderr, "At least one arg required!\n");
        exit(EXIT_FAILURE);
    }

    // defaults
    strcpy(mode, "w");
    fileNameIndex = 1;
    if (argv[1][0] == '-')
    {
        ++fileNameIndex;
        switch (argv[1][1])
        {
        case 'a':
        case 'A':
            // append!
            strcpy(mode, "a");
            break;
        case 'h':
        case '?':
            fprintf(stderr, "Usage:\n\t%s [-a] filename\n", argv[0]);
            exit(EXIT_SUCCESS);
        default:
            fprintf(stderr, "D'ho!?\n");
            exit(EXIT_FAILURE);
        }
    }

    if (argc == fileNameIndex)
    {
        fprintf(stderr, "The file should be specified!!\n");
        exit(EXIT_FAILURE);
    }

    out = fopen(argv[fileNameIndex], mode);
    if (out == NULL)
    {
        fprintf(stderr, "Yeuch, can't open the file!\n");
        exit(EXIT_FAILURE);
    }

    printf("Creating/writing file \"%s\"\n", argv[fileNameIndex]);
    fprintf(out, "Summer is coming\n");

    fclose(out);

    return 0;
}
