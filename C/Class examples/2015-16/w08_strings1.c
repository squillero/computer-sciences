/*  ######       /***********************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)           *
|*  ####   \     * https://github.com/squillero/computer-science             *
|*   ###G  c\    *                                                           *
|*   ##     _\   * Copyright © 2015 Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>            *
\*   |   _/      \***********************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX_STR_LEN 100

int main()
{
    char name[MAX_STR_LEN + 1];

    //printf("What's your name? ");
    //scanf("%s", name);
    //printf("Hello %s, the cat is under the table.\n", name);

    printf("What's your name? ");
    gets(name);
    printf("Hello %s, the cat is under the table.\n", name);

    //int t;
    //for(t = 0; t<=MAX_STR_LEN; t+=1) {
    //    printf(" %d/%c", name[t], name[t]);
    //}
    printf("\n");

    return 0;
}
