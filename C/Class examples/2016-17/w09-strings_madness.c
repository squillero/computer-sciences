/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_LENGTH 256

int main()
{
    char string[] = "         23       janua    ";
    int day, month;

    char w1[MAX_LENGTH], w2[MAX_LENGTH];
    sscanf(string, "%s %s", w1, w2);
    printf("%s %s\n", w1, w2);
    sscanf(w1, "%d", &day);
    if (isdigit(w2[0]))
    {
        sscanf(w2, "%d", &month);
    }
    else
    {
        switch (tolower(w2[0]))
        {
        case 'j':
            if (w2[3] == 'u')
            {
                month = 1;
            }
            else if (w2[2] == 'e')
            {
                month = 6;
            }
            else
            {
                month = 7;
            }
            break;
        case 'f':
            month = 2;
            break;
        case 'm':
            if (w2[2] == 'r')
            {
                month = 3;
            }
            else
            {
                month = 5;
            }
            break;
        case 'a':
            month = 4;
            break;
        }
    }
    printf(">>>> %d %d\n", day, month);
    return 0;
}
