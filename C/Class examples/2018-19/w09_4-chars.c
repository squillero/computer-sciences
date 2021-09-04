/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_STR 4096

// proto
void print_chars(char string[]);
int count_tokens(char string[]);

int main()
{
    char str[MAX_STR];

    gets(str);
    print_chars(str);
    printf("Found %d tokens\n", count_tokens(str));

    return 0;
}

int count_tokens(char string[])
{
    int tokens = 0;
    for (int p = 0; string[p] != '\0'; ++p)
    {
        if (!isspace(string[p]) &&
            (string[p + 1] == '\0' || isspace(string[p + 1])))
        {
            ++tokens;
        }
    }
    return tokens;
}

void print_chars(char string[])
{
    for (int p = 0; string[p] != '\0'; ++p)
    {
        printf("%d (%c)\n", string[p], string[p]);
    }
}
