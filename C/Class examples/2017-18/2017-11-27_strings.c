/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// protos
int my_string_length(char *str);

int main()
{
    char name[256];
    printf("Hello, what is your name? ");

    // Token
    // scanf("%s", name);

    // whole line!
    gets(name);

    /**
    int to_upper = 1;
    for(int t = 0; name[t] != '\0'; ++t) {
        if(name[t] >= 'A' && name[t] <= 'Z') {
            to_upper = 0;
        } else if(to_upper == 1 && name[t] >= 'a' && name[t] <= 'z') {
            name[t] = name[t] - 'a' + 'A';
            to_upper = 0;
        } else if(name[t] == ' ') {
            to_upper = 1;
        }
    }
    **/

    int to_upper = 1;
    for (int t = 0; name[t] != '\0'; ++t)
    {
        if (to_upper == 1)
        {
            name[t] = toupper(name[t]);
            to_upper = 0;
        }
        else if (isspace(name[t]))
        {
            to_upper = 1;
        }
    }

    printf("\n");

    printf("Glad to meet you %s!!!!\n", name);

    printf("Your name len is %d\n", my_string_length(name));
    printf("Your name sizeof is %d\n", sizeof(name));

    return 0;
}

int my_string_length(char *str)
{
    int l;
    for (l = 0; str[l] != '\0'; ++l)
    {
        // d'oh?
    }
    return l;
}
