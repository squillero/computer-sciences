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
#include <string.h>

#define MAX_NAME 200

int main()
{
    char prof[] = "Giovanni";
    char name[MAX_NAME + 1];

    printf("What is your name? ");

    // scanf("%s", name); // MAGIC: no "&"!!!!!!!
    gets(name);

    /** long way
    if(name[0] >= 'a' && name[0] <= 'z') {
        name[0] = name[0] - 'a' + 'A';
    }
    **/
    name[0] = toupper(name[0]); // short way

    if (strcmp(name, prof) == 0)
    {
        printf("Oh yeah\n");
    }
    printf("Hello %s, how are you?\n\n", name);

    /**
    for(int t = 0; t < MAX_NAME+1; ++t) {
        printf("%d (%c)\n", name[t], name[t]);
    }
    **/

    return 0;
}
