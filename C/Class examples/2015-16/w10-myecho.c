/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 256

#define NONE 0
#define UPPERCASE 1
#define LOWERCASE 2

void MyToLower(char *s);
void MyToUpper(char *s);

int main(int argc, char *argv[])
{
    int FirstArgument;
    int Conversion = NONE;
    int t;

    FirstArgument = 1;
    while (argv[FirstArgument][0] == '-')
    {
        switch (argv[FirstArgument][1])
        {
        case 'l':
            Conversion = LOWERCASE;
            break;
        case 'u':
            Conversion = UPPERCASE;
            break;
        default:
            printf("Wrong option %s!\n", argv[FirstArgument]);
            exit(EXIT_FAILURE);
        }
        FirstArgument += 1;
    }

    for (t = FirstArgument; t < argc; t += 1)
    {
        char w[MAX_LEN];
        strcpy(w, argv[t]);
        if (Conversion == UPPERCASE)
        {
            MyToUpper(w);
        }
        else if (Conversion == LOWERCASE)
        {
            MyToLower(w);
        }
        printf("%s ", w);
    }
    printf("\n");
    return EXIT_SUCCESS;
}

void MyToUpper(char *s)
{
    int t;
    for (t = 0; s[t] != '\0'; t += 1)
    {
        s[t] = toupper(s[t]);
    }
}

void MyToLower(char *s)
{
    int t;
    for (t = 0; s[t] != '\0'; t += 1)
    {
        s[t] = tolower(s[t]);
    }
}