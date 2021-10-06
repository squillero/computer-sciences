/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

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
