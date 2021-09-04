/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int my_string_length(char s[])
int my_string_length(char *s)
{
    int t = 0;
    while (s[t] != '\0')
    {
        ++t;
    }
    return t;
}

int main()
{
    char string[] = "La la la la la la la la la la la la la";

    printf("Len: %d\n", my_string_length(string));
    printf("Len: %d\n", strlen(string));
    return 0;
}
