/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

// PROTOS
int box_size(int rows, int cols);
void print_box(int rows, int cols);
void print_row(int cols, char c);
void print_frame(int rows, int cols);

int main(void)
{
    print_box(10, 42);
    printf("\n");
    print_frame(10, 42);
    return EXIT_SUCCESS;
}

void print_row(int cols, char c)
{
    for (int t = 0; t < cols; ++t)
    {
        printf("%c", c);
    }
}

void print_frame(int rows, int cols)
{
    print_row(cols, '#');
    printf("\n");
    for (int t = 0; t < rows - 2; ++t)
    {
        printf("#");
        print_row(cols - 2, ' ');
        printf("#\n");
    }
    print_row(cols, '#');
    printf("\n");
}

void print_box(int rows, int cols)
{
    for (int t = 0; t < rows; ++t)
    {
        print_row(cols, '#');
        printf("\n");
    }
}

int box_size(int rows, int cols)
{
    return rows * cols;
}
