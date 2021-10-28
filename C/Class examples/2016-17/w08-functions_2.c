// Copyright © 2016-2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 8192

// PROTOS
void random_init(int blaster[], int blaster_size);
int find_number(int gargle[], int gargle_size, int s);

int main()
{
    int array_foo[ARRAY_SIZE];
    int array_bar[ARRAY_SIZE];
    int array_baz[ARRAY_SIZE];

    random_init(array_foo, ARRAY_SIZE);
    random_init(array_bar, ARRAY_SIZE);
    random_init(array_baz, ARRAY_SIZE);

    int s = 3902;
    // NOTE: arraybar <-EQUIV-> &array_bar[0]
    if (find_number(array_foo, ARRAY_SIZE, s) == 1)
    {
        printf("WHoa! The array foo contains %d\n", s);
    }
    else
    {
        printf("Yeuch, no %d in array foo.... :-(\n", s);
    }

    return EXIT_SUCCESS;
}

int find_number(int gargle[], int gargle_size, int s)
// alt: int find_number(int* gargle, int gargle_size, int s)
// alt: int find_number(int *gargle, int gargle_size, int s)
{
    int flag = 0;
    for (int t = 0; t < gargle_size; ++t)
    {
        if (gargle[t] == s)
        {
            flag = 1;
        }
    }
    return flag;
}

void random_init(int blaster[], int blaster_size)
{
    for (int t = 0; t < blaster_size; ++t)
    {
        blaster[t] = rand();
    }
}
