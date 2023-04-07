// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 3
#define MAX_COL 100

// protos
int translate(int c);
int translate_alt(int c);

char Histogram[2 * N][MAX_COL + 1 + 1];

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Yeuch: Wrong number of arguments!\n");
        exit(EXIT_FAILURE);
    }
    FILE *in = fopen(argv[1], "r");
    FILE *out = fopen(argv[2], "w");
    if (in == NULL || out == NULL)
    {
        fprintf(stderr, "Yeuch: Can't open files!\n");
        exit(EXIT_FAILURE);
    }

    for (int r = 0; r < 2 * N; ++r)
    {
        fgets(Histogram[r], MAX_COL + 1 + 1, in);
        Histogram[r][strlen(Histogram[r]) - 1] = '\0'; // chomp \n
    }
    fclose(in);

    int num_columns = strlen(Histogram[0]);
    int max_val = 0;
    int max_col = -1;
    for (int c = 0; c < num_columns; ++c)
    {
        int val = translate_alt(c);
        fprintf(out, " %d", val);
        if (val > max_val || max_col == -1)
        {
            max_col = c + 1;
            max_val = val;
        }
    }
    fprintf(out, "\n");
    printf("The maximum value is %d, in position %d.\n", max_val, max_col);
    fclose(out);
}

int translate_alt(int c)
{
    int num_x = 0;
    for (int t = 0; t < 2 * N; ++t)
    {
        if (Histogram[t][c] == 'X')
        {
            ++num_x;
        }
    }
    if (Histogram[N - 1][c] == 'X')
    {
        return num_x;
    }
    else
    {
        return -num_x;
    }
}

int translate(int c)
{
    int first_x = -1;
    int last_x = -1;
    for (int t = 0; t < 2 * N; ++t)
    {
        if (first_x == -1 && Histogram[t][c] == 'X')
        {
            first_x = t;
        }
        if (Histogram[t][c] == 'X')
        {
            last_x = t;
        }
    }
    // printf("first: %d -- last: %d\n", first_x, last_x);

    if (first_x == -1 && last_x == -1)
    {
        // zero
        return 0;
    }
    else if (last_x == N - 1)
    {
        // positive
        return N - first_x;
    }
    else
    {
        // negative
        return N - last_x - 1;
    }
}
