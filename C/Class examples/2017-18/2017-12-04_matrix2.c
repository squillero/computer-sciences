// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 128

// Prototypes
int sum_row(int dim, int row);
int sum_column(int dim, int col);

// Global variables (only matrices!)
int Matrix[DIM][DIM];

int main(int argc, char *argv[])
{
    int dim;
    // required at the exam
    if (argc != 2)
    {
        printf("Yeuch! One argument required\n");
        exit(EXIT_FAILURE);
    }
    // NOT required at the exam
    if (sscanf(argv[1], "%d", &dim) != 1)
    {
        printf("Yeuch! One NUMERIC argument required\n");
        exit(EXIT_FAILURE);
    }

    srand(time(NULL));
    for (int i1 = 0; i1 < dim; ++i1)
    {
        for (int i2 = 0; i2 < dim; ++i2)
        {
            Matrix[i1][i2] = rand() % 10;
        }
    }

    // print matrix with extra column
    for (int i1 = 0; i1 < dim; ++i1)
    {
        for (int i2 = 0; i2 < dim; ++i2)
        {
            printf("%4d", Matrix[i1][i2]);
        }
        printf(" |%4d\n", sum_row(dim, i1));
    }
    // print nice line of ----
    for (int i2 = 0; i2 < dim; ++i2)
    {
        printf("----");
    }
    // print sum for columns
    printf("\n");
    for (int i2 = 0; i2 < dim; ++i2)
    {
        printf("%4d", sum_column(dim, i2));
    }
    printf("\n");

    return 0;
}

int sum_row(int dim, int row)
{
    int sum = 0;
    for (int c = 0; c < dim; ++c)
    {
        sum += Matrix[row][c];
    }
    return sum;
}

int sum_column(int dim, int col)
{
    int sum = 0;
    for (int r = 0; r < dim; ++r)
    {
        sum += Matrix[r][col];
    }
    return sum;
}
