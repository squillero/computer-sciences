// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dst[5];
    char src[] = "A Toyota is a Toyota";

    strncpy(dst, src, 4);
    printf("dst: \"%s\" src: \"%s\"\n", dst, src);

    return 0;
}
