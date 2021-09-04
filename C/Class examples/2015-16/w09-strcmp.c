/*  ######       /***********************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)           *
|*  ####   \     * https://github.com/squillero/computer-science             *
|*   ###G  c\    *                                                           *
|*   ##     _\   * Copyright © 2015 Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>            *
\*   |   _/      \***********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_MAX_LEN 1024 + 1

int main()
{
    char s1[STR_MAX_LEN], s2[STR_MAX_LEN];
    char s3[STR_MAX_LEN];

    printf("Insert two words: ");
    scanf("%s", s1);
    scanf("%s", s2);

    if (strcmp(s1, s2) < 0)
    {
        strcpy(s3, s1);
        strcat(s3, s2);
    }
    else if (strcmp(s1, s2) > 0)
    {
        strcpy(s3, s2);
        strcat(s3, s1);
    }
    else
    {
        strcpy(s3, "d'ho");
    }

    printf(">>>>%s\n", s3);

    if (strchr(s3, '*') != NULL)
    {
        printf("s3 contains STARS\n");
    }
    if (strchr(s3, '!') == NULL)
    {
        printf("s3 does not contain BANGS\n");
    }

    return 0;
}
