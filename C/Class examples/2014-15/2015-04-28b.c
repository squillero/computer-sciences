/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 256

// PROTO: +1 @ the exam ;-)
int length(char w[]);

int main()
{
    char w1[SIZE];

    printf("Enter 1 word:");
    scanf("%s", w1);

    printf("Checking \"%s\"\n", &w1[0]);

    int flag = 0;
    int t;
    int len = length(w1);
    for (t = 0; w1[t] != '\0'; ++t)
    {
        if (w1[t] != w1[len - t - 1])
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("BOB!\n");
    }
    else
    {
        printf("no\n");
    }

    return EXIT_SUCCESS;
}

int length(char w[])
{
    int t = 0;
    while (w[t] != '\0')
    {
        ++t;
    }
    return t;
}
