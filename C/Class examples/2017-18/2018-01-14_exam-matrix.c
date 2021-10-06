/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

// N is rows
#define N 4
// M is columns
#define M 3

#define MAX_FILENAME_LEN 20

// PROTOS
void read_matrix(char *filename);
int count(int value, int start, int end);

// GLOBAL VARS
int Matrix[N * M];

int count(int value, int start, int end)
{
    int cnt = 0;
    for (int p = start; p < end; ++p)
    {
        if (Matrix[p] == value)
        {
            ++cnt;
        }
    }
    return cnt;
}

void read_matrix(char *filename)
{
    FILE *in = fopen(filename, "r");
    if (in == NULL)
    {
        fprintf(stderr, "Yeuch. Can't open file \"%s\"\n", filename);
        exit(EXIT_FAILURE);
    }
    for (int r = 0; r < N; ++r)
        for (int c = 0; c < M; ++c)
            fscanf(in, "%d", &Matrix[r * M + c]);
    fclose(in);
}

int main()
{
    printf("Hello! This exam is SO SIMPLE!!!!\n");

    char filename[MAX_FILENAME_LEN + 1];
    printf("File name: ");
    scanf("%s", filename);

    read_matrix(filename);

    for (int r = 0; r < N; ++r)
    {
        for (int c = 0; c < M; ++c)
        {
            printf("%8d", Matrix[r * M + c]);
        }
        printf("\n");
    }

    for (int p = 0; p < N * M; ++p)
    {
        if (count(Matrix[p], 0, p) == 0)
        {
            printf("%d: %d\n", Matrix[p], count(Matrix[p], p, N * M));
        }
    }

    return 0;

    {
        r = start_row;
        c = start_col;
        while (r < last_row && c < last_col)
        {
            if (Matrix[r][c] == value)
                ++cnt;
            c += 1;
            if (c == M)
            {
                c = 0;
                r += 1;
            }
        }
    }

    {
        for (int p = start_row * M + start_col; p < ....; ++p)
        {
            Matrix[p / M][p % M]
        }
    }
