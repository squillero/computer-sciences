// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char line[256];
    gets(line);

    for (int t = 0; line[t] != '\0'; ++t)
    {
        printf("%s (len: %d)\n", &line[t], strlen(&line[t]));
    }

    return 0;
}
