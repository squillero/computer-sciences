// Copyright © 2018-2019 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

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
