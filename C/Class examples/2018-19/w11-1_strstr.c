/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

// proto
// Check if second appears in first at position pos
// false == 0
// true != 0
int str_in_str_at_pos(char *first, char *second, int pos);

// Check if second appears in first
// false == 0
// true != 0
int str_in_str(char *first, char *second);

int main()
{
    if (str_in_str("barfoobaarbazba!", "bar"))
    {
        printf("Oh yeah!\n");
    }
    else
    {
        printf("no....\n");
    }
    return 0;
}

int str_in_str_at_pos(char *first, char *second, int pos)
{
    int found = 1;
    for (int t = 0; found && second[t] != '\0'; ++t)
    {
        if (first[pos + t] != second[t])
        {
            found = 0; // kick the flag!
        }
    }
    return found;
}

int str_in_str(char *first, char *second)
{
    int found = 0;
    int num = strlen(first) - strlen(second) + 1;
    for (int p = 0; !found && p < num; ++p)
    {
        if (str_in_str_at_pos(first, second, p))
        {
            found = 1;
        }
    }
    return found;
}

int str_in_str_mel(char *first, char *second)
{
    int num = strlen(first) - strlen(second) + 1;
    for (int p = 0; p < num; ++p)
    {
        if (str_in_str_at_pos(first, second, p))
        {
            return 1;
        }
    }
    return 0;
}
