/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("out.txt", "w");
    if (file == NULL)
    {
        printf("Yeuch, can't open 'out.txt'\n");
        exit(1);
    }
    for (int t = 0; t < 999; ++t)
    {
        fprintf(file, "Hello world!\n");
    }
    fclose(file);

    int number;
    FILE *read = fopen("input.txt", "r");
    if (read == NULL)
    {
        printf("Yeuch, can't open 'input.txt'\n");
        exit(1);
    }
    fscanf(read, "%d", &number);
    printf("> %d\n", number);
    fclose(read);

    return 0;
}
