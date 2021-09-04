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
    int rows;
    printf("Enter rows: ");
    scanf("%d", &rows);

    for (int r = 0; r < rows; r = r + 1)
    {
        /** option1
        for(int c = 0; c < r; c = c + 1) {
            printf(" ");
        }
        for(int c = r; c < rows; c = c + 1) {
            printf("#");
        }
        **/
        for (int c = 0; c < rows; ++c)
        {
            if (c >= r)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
