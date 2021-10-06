/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 16

int main()
{
    char c = '\0';
    char string[] = {'M', 'a', 'm', 'a', '\0'};
    char string2[] = "Oh mama mia, mama mia...";
    char array_of_char[] = {'M', 'a', 'm', 'a'};

    char word[MAX_LENGTH];

    word[0] = 'M';
    word[1] = 'a';
    word[2] = 'm';
    word[3] = 'a';
    word[4] = '\0';

    printf("%s\n", &word[0]);
    printf("%s\n", string);
    printf("%s\n", string2);
    printf("%s\n", array_of_char); // ERROR

    return 0;
}
