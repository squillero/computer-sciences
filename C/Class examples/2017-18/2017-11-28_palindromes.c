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
#include <string.h>

#define MAX_STR_LEN 512

// protos
int pal1(char *str);
int pal2(char *str);
int pal3(char *str);
int pal4(char *str);

int main()
{
    char str[MAX_STR_LEN];

    gets(str);
    if (pal3(str) != 0)
    {
        printf("Oh yeah!\n");
    }
    return EXIT_SUCCESS;
}

int pal1(char *str)
{
    int pal = 1;
    for (int t = 0; str[t] != '\0'; ++t)
    {
        if (str[t] != str[strlen(str) - t - 1])
        {
            pal = 0;
        }
    }
    return pal;
}

int pal2(char *str)
{
    int i2 = strlen(str) - 1;
    int i1 = 0;
    while (i1 < i2)
    {
        if (toupper(str[i1]) != toupper(str[i2]))
        {
            return 0;
        }
        ++i1;
        --i2;
    }
    return 1;
}

int pal3(char *str)
{
    char tmp[MAX_STR_LEN];
    int tmp_index = 0;
    for (int t = 0; str[t] != '\0'; ++t)
    {
        if (isalpha(str[t]))
        {
            tmp[tmp_index++] = str[t];
        }
    }
    tmp[tmp_index] = '\0';
    return pal2(tmp);
}
