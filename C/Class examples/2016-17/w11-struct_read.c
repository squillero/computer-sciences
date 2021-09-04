/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *input;
    input = fopen("file1.gx", "r");

    int num;

    /**
    // OK, BUT UGLY
    fscanf(input, "%d", &num);
    while(!feof(input)) {
        printf("=> %d\n", num);
        fscanf(input, "%d", &num);
    }
    **/

    /**
    // NOT OK!
    while(!feof(input)) {
        fscanf(input, "%d", &num);
        printf("=> %d\n", num);
    }
    **/

    /**
    // NOT OK & UGLY
    do {
        fscanf(input, "%d", &num);
        printf("=> %d\n", num);

    } while(!feof(input));
    **/

    while (fscanf(input, "%d", &num) != EOF)
    {
        printf("=> %d\n", num);
    }

    fclose(input);
    return EXIT_SUCCESS;
}
