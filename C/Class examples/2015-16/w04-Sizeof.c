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
    printf("The size of a \"char\" on my system is: %d\n", sizeof(char));
    printf("The size of a \"short int\" on my system is: %d\n", sizeof(short int));
    printf("The size of a \"int\" on my system is: %d\n", sizeof(int));
    printf("The size of a \"long int\" on my system is: %d\n", sizeof(long int));
    printf("The size of a \"long long int\" on my system is: %d\n", sizeof(long long int));

    printf("The size of a \"float\" on my system is: %d\n", sizeof(float));
    printf("The size of a \"double\" on my system is: %d\n", sizeof(double));
    printf("The size of a \"long double\" on my system is: %d\n", sizeof(long double));

    return 0;
}
