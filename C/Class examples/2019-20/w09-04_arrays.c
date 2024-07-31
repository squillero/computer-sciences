// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int array3d[][3][2] = {{{42, 42}, {42, 42}, {42, 42}},
                       {{42, 42}, {42, 42}, {42, 42}},
                       {{42, 42}, {42, 42}, {42, 42}},
                       {{42, 42}, {42, 42}, {42, 42}}};

void func(int a2d[][3])
{
    printf("Yeah!\n");
}

int main()
{
    int array[4] = {1, 2, 3, 4};
    int array2d[4][3] = {{0, 1, 2},
                         {0, 1, 2},
                         {0, 1, 2},
                         {0, 1, 2}};

    func(array2d);
    return 0;
}
