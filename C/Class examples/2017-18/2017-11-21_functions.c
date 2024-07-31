// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

// protos
void square(int size);
void draw_line(int n, char c);

int main()
{
    square(20);
}

void square(int size)
{
    for (int t = 0; t < size; ++t)
    {
        draw_line(t + 1, '!');
        draw_line(size - t, '-');
        printf("\n");
    }
}

void draw_line(int n, char c)
{
    for (int t = 0; t < n; ++t)
    {
        printf("%c", c);
    }
}
