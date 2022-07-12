// Copyright © 2018-2019 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Insert a date (dd-mm-yyyy)\n");
    char date[256];
    scanf("%s", date);

    // parser!
    int d, m, y;
    if (sscanf(date, "%d-%d-%d", &d, &m, &y) == 3)
    {
        // oh yeah, it worked!
    }
    else
    {
        char month[3 + 1];
        sscanf(date, "%d-%3s-%d", &d, month, &y);
        if (stricmp(month, "jan") == 0)
        {
            m = 1;
        }
        else
        {
            ;
        }
    }
    printf("Day: %d\n", d);
    printf("Month: %d\n", m);
    printf("Year: %d\n", y);
    return 0;
}
