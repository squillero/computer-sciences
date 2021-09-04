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

#define FRIENDS_NUM 5
#define NAME_LENGTH 42 + 1

char Friend[FRIENDS_NUM][NAME_LENGTH];

int main()
{
    printf("Enter names\n");
    for (int t = 0; t < FRIENDS_NUM; ++t)
    {
        scanf("%s", Friend[t]);
    }

    for (int t = 0; t < FRIENDS_NUM; ++t)
    {
        Friend[t][0] = toupper(Friend[t][0]);
    }

    printf("My good friends\n");
    for (int t = 0; t < FRIENDS_NUM; ++t)
    {
        printf("%d: %s\n", t, Friend[t]);
    }
}
