/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
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
