// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * COPY COMMAND
 *
 * USAGE:
 *   copy [-a] SOURCE DESTINATION
 *
 * DESCRIPTION
 *   Copy (or append if -a) the source to the destination
 */

int main(int argc, char *argv[])
{
    if (argc != 3 && argc != 4)
    {
        fprintf(stderr, "Wrong number of args!\n");
        exit(EXIT_FAILURE);
    }

    FILE *in;
    FILE *out;

    char operation[256] = "copied";
    if (strcmp(argv[1], "-a") == 0)
    {
        in = fopen(argv[2], "r");
        if (in == NULL)
        {
            fprintf(stderr, "Can't read from %s\n", argv[2]);
            exit(EXIT_FAILURE);
        }
        out = fopen(argv[3], "a");
        if (in == NULL)
        {
            fprintf(stderr, "Can't append to %s\n", argv[3]);
            exit(EXIT_FAILURE);
        }
        strcpy(operation, "appended");
    }
    else
    {
        in = fopen(argv[1], "r");
        if (in == NULL)
        {
            fprintf(stderr, "Can't read from %s\n", argv[1]);
            exit(EXIT_FAILURE);
        }
        out = fopen(argv[2], "w");
        if (in == NULL)
        {
            fprintf(stderr, "Can't write to %s\n", argv[2]);
            exit(EXIT_FAILURE);
        }
    }

    int cnt = 0;
    int c;
    while ((c = fgetc(in)) != EOF)
    {
        fputc(c, out);
        ++cnt;
    }
    printf("Done (%s %d bytes)\n", operation, cnt);

    fclose(in);
    fclose(out);

    return EXIT_SUCCESS;
}
