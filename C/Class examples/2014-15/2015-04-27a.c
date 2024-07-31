// Copyright © 2015 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int cs[5] = {31, 27, 5, 2, 18};
    int t;
    char w[64];

    for (t = 0; t < 5; ++t)
    {
        if (cs[t] < 18)
        {
            sprintf(w, "ins");
        }
        else if (cs[t] > 30)
        {
            sprintf(w, "30 cum laude");
        }
        else
        {
            sprintf(w, "%d", cs[t]);
        }

        printf("Student %d: %s\n", t + 1, w);
    }

    return EXIT_SUCCESS;
}
