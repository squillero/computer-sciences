// Copyright © 2018-2019 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define DIMX 20
#define DIMY 10
#define FILE_NAME "map.gx"

struct _POINT
{
    int x, y;
};
typedef struct _POINT POINT;

// PROTOS
void read_map(char *filename);
void print_map(void);
POINT find_first(char type);
int add_one_star();

char Map[DIMY][DIMX + 1 + 1];

int main()
{
    printf("Hello map!\n");
    read_map(FILE_NAME);
    print_map();

    POINT p = find_first('#');
    printf("Found land @ (%d, %d)\n", p.x, p.y);
    Map[p.y][p.x] = '*';
    print_map();

    while (add_one_star())
    {
        printf("\n\n");
        print_map();
    }
    printf("\n\nEND\n\n");
    print_map();

    p = find_first('#');
    if (p.x == -1 && p.y == -1)
    {
        printf("Whoa! All land connected!!!!!!!\n");
    }
    else
    {
        printf("2+ islands...\n");
    }

    return 0;
}

void read_map(char *filename)
{
    FILE *in = fopen(filename, "r");
    if (in == NULL)
    {
        fprintf(stderr, "Can't open \"%s\"\n", filename);
        exit(EXIT_FAILURE);
    }
    for (int t = 0; t < DIMY; ++t)
    {
        fgets(Map[t], DIMX + 1 + 1, in);
    }
    fclose(in);
}

void print_map(void)
{
    for (int y = 0; y < DIMY; ++y)
    {
        for (int x = 0; x < DIMX; ++x)
        {
            printf("%c", Map[y][x]);
        }
        printf("\n");
    }
}

POINT find_first(char type)
{
    POINT p;
    for (p.x = 0; p.x < DIMX; ++p.x)
    {
        for (p.y = 0; p.y < DIMY; ++p.y)
        {
            if (Map[p.y][p.x] == type)
            {
                return p;
            }
        }
    }
    p.x = p.y = -1;
    return p;
}

int add_one_star()
{
    int found = 0;
    for (int y = 0; !found && y < DIMY; ++y)
    {
        for (int x = 0; !found && x < DIMX; ++x)
        {
            if (Map[y][x] == '*')
            {
                if (y > 0 && Map[y - 1][x] == '#')
                {
                    Map[y - 1][x] = '*';
                    found = 1;
                }
                if (y < DIMY - 1 && Map[y + 1][x] == '#')
                {
                    Map[y + 1][x] = '*';
                    found = 1;
                }
                if (x > 0 && Map[y][x - 1] == '#')
                {
                    Map[y][x - 1] = '*';
                    found = 1;
                }
                if (x < DIMX - 1 && Map[y][x + 1] == '#')
                {
                    Map[y][x + 1] = '*';
                    found = 1;
                }
            }
        }
    }
    return found;
}
