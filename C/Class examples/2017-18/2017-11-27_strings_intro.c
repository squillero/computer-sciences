/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char my_first_string[16] = {'C', 'i', 'a', 'o', '!', '\0', 'x'};
    char my_second_string[] = "Oh, mamma mia mamma mia";
    char *my_third_string = "mamma mia let me go";
    char stop[] = "";
    char stop2[3] = {'!', 0, '!'};

    printf("%s\n", my_first_string);
    printf("%s\n", my_second_string);
    printf("%s\n", my_third_string);
    return 0;
}
