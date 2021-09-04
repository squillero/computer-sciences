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
    int dim;
    printf("Dim: ");
    scanf("%d", &dim);

    for (int t = 0; t < dim; t = t + 1)
    {
        for (int u = 0; u < t + 1; u = u + 1)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
