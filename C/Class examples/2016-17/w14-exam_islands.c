/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAP_FILE_NAME "map.gx"
#define MAP_SIZE_X 60
#define MAP_SIZE_Y 15

struct _POINT
{
    int x, y;
};
typedef struct _POINT POINT;

char Map[MAP_SIZE_Y][MAP_SIZE_X + 1 + 1];

int main(int argc, char *argv[])
{
    POINT p1, p2;

    if (argc != 3)
    {
        fprintf(stderr, "ERROR; Two points are required.\n");
        exit(EXIT_FAILURE);
    }
    sscanf(argv[1], "(%d,%d)", &p1.x, &p1.y);
    sscanf(argv[2], "(%d,%d)", &p2.x, &p2.y);

    FILE *in = fopen(MAP_FILE_NAME, "r");
    if (in == NULL)
    {
        fprintf(stderr, "ERROR: Can't open file \"%s\"\n", MAP_FILE_NAME);
        exit(EXIT_FAILURE);
    }
    for (int y = 0; y < MAP_SIZE_Y; ++y)
    {
        fgets(Map[y], MAP_SIZE_X + 1 + 1, in);
    }
    fclose(in);

    if (Map[p1.y][p1.x] == '.')
    {
        fprintf(stderr, "Splash!\n");
        exit(EXIT_FAILURE);
    }

    for (int y = 0; y < MAP_SIZE_Y; ++y)
    {
        printf("%s", Map[y]);
    }

    Map[p1.y][p1.x] = '1';
    int finish = 0;
    while (!finish)
    {
        finish = 1;
        // FLOOD FILL
        for (int x = 0; x < MAP_SIZE_X; ++x)
        {
            for (int y = 0; y < MAP_SIZE_Y; ++y)
            {
                if (Map[y][x] == '1')
                {
                    if (x < MAP_SIZE_X - 1 && Map[y][x + 1] == '#')
                    {
                        Map[y][x + 1] = '1';
                        finish = 0;
                    }
                    if (x > 0 && Map[y][x - 1] == '#')
                    {
                        Map[y][x - 1] = '1';
                        finish = 0;
                    }
                    if (y < MAP_SIZE_Y - 1 && Map[y + 1][x] == '#')
                    {
                        Map[y + 1][x] = '1';
                        finish = 0;
                    }
                    if (y > 0 && Map[y - 1][x] == '#')
                    {
                        Map[y - 1][x] = '1';
                        finish = 0;
                    }
                }
            }
        }
    }

    if (Map[p2.y][p2.x] == '1')
    {
        printf("Whoa!!!! On the same island!\n");
    }
    Map[p2.y][p2.x] = '2';
    for (int y = 0; y < MAP_SIZE_Y; ++y)
    {
        printf("%s", Map[y]);
    }

    return EXIT_SUCCESS;
}
