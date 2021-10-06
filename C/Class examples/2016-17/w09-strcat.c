/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define BUFFER_LEN 4

int main()
{
    char str[BUFFER_LEN];

    //strcpy(str, "Hey");     // str = "Hey"
    strcat(str, " "); // str += " "
    strcat(str, "you");
    strcat(str, ", ");
    strcat(str, "out");

    printf("%s\n", str);
    return 0;
}
