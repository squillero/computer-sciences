/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 1024

// PROTOS
int Equal(char u[], char q[]);
// or even: int Equal(char *u, char *q);

int main()
{
    char w1[MAX_LEN], w2[MAX_LEN];

    printf("Enter first word: ");
    scanf("%s", w1);
    printf("Enter second word: ");
    scanf("%s", w2);

    if (Equal(w1, w2))
    {
        printf("Whoa!\n");
    }

    return EXIT_SUCCESS;
}

int Equal(char u[], char q[])
{
    int eq;
    int t;

    eq = 1;
    t = 0;
    while (u[t] != '\0' && q[t] != '\0')
    {
        if (u[t] != q[t])
        {
            eq = 0;
        }
        t += 1;
    }
    if (u[t] != '\0' || q[t] != '\0')
    {
        eq = 0;
    }

    return eq;
}
