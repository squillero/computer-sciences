/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define SIZE_X 60
#define SIZE_Y 20

char Map[SIZE_Y][SIZE_X + 2];

int main(int argc, char *argv[])
{
    printf("Map-O-Matic!\n");

    if (argc != 3)
    {
        fprintf(stderr, "Yeuch\n");
        exit(EXIT_FAILURE);
    }
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        fprintf(stderr, "Yeuch\n");
        exit(EXIT_FAILURE);
    }
    for (int t = 0; t < SIZE_Y; ++t)
    {
        fgets(Map[t], SIZE_X + 2, input);
    }
    fclose(input);

    int posx, posy;
    sscanf(argv[2], "%d", &posy);
    posx = 0;

    int finish = 0;
    while (finish == 0)
    {
        printf("(%d,%d) -> ", posx, posy);
        if (posx == SIZE_X - 1)
        {
            printf("Hip hip hooray!\n");
            finish = 1;
        }
        else if (posy > 0 && Map[posy - 1][posx + 1] == '#')
        {
            posy -= 1;
            posx += 1;
        }
        else if (Map[posy][posx + 1] == '#')
        {
            posx += 1;
        }
        else if (posy < SIZE_X - 1 && Map[posy + 1][posx + 1] == '#')
        {
            posy += 1;
            posx += 1;
        }
        else
        {
            printf("D'ho\n");
            finish = 1;
        }
    }

    return EXIT_SUCCESS;
}
