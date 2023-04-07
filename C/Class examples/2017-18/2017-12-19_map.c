// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define MAP_FILE "map.dat"
#define MAP_DIM_X 60
#define MAP_DIM_Y 20

// protos
void ReadMap(void);
void PrintMap(void);
int FloodFill(void);
int Count(char c);
void Replace(char c1, char c2);
int GotIsland(int x, int y);

char Map[MAP_DIM_Y][MAP_DIM_X];

int GotIsland(int x, int y)
{
    Map[y][x] = '!';
    while (FloodFill())
    {
        // fillin' up :-)
    }
    int size = Count('!');
    printf("Island size: %d\n", size);
    Replace('!', '*');
    return size;
}

int main(int argc, char *argv[])
{
    int biggest;

    ReadMap();

    biggest = -1;
    PrintMap();
    for (int y = 0; y < MAP_DIM_Y; ++y)
    {
        for (int x = 0; x < MAP_DIM_X; ++x)
        {
            if (Map[y][x] == '#')
            {
                int size = GotIsland(x, y);
                if (size > biggest)
                {
                    biggest = size;
                }
                PrintMap();
            }
        }
    }
    printf("Biggest island; %d!\n", biggest);

    return EXIT_SUCCESS;
}

void ReadMap(void)
{
    FILE *f = fopen(MAP_FILE, "r");
    if (f == NULL)
    {
        fprintf(stderr, "Yeuch\n");
        exit(EXIT_FAILURE);
    }
    for (int y = 0; y < MAP_DIM_Y; ++y)
    {
        for (int x = 0; x < MAP_DIM_X; ++x)
        {
            fscanf(f, "%c", &Map[y][x]);
        }
        char c;
        fscanf(f, "%c", &c);
        if (c != '\n')
        {
            fprintf(stderr, "D'ho\n");
            exit(EXIT_FAILURE);
        }
    }
    fclose(f);
}

void PrintMap(void)
{
    for (int y = 0; y < MAP_DIM_Y; ++y)
    {
        for (int x = 0; x < MAP_DIM_X; ++x)
        {
            printf("%c", Map[y][x]);
        }
        printf("\n");
    }
}

int FloodFill(void)
{
    int added = 0;
    for (int y = 0; y < MAP_DIM_Y; ++y)
    {
        for (int x = 0; x < MAP_DIM_X; ++x)
        {
            if (y > 0 && Map[y][x] == '!' && Map[y - 1][x] == '#')
            {
                added = 1;
                Map[y - 1][x] = '!';
            }
            if (y < MAP_DIM_Y - 1 && Map[y][x] == '!' && Map[y + 1][x] == '#')
            {
                added = 1;
                Map[y + 1][x] = '!';
            }
            if (x > 0 && Map[y][x] == '!' && Map[y][x - 1] == '#')
            {
                added = 1;
                Map[y][x - 1] = '!';
            }
            if (x < MAP_DIM_X - 1 && Map[y][x] == '!' && Map[y][x + 1] == '#')
            {
                added = 1;
                Map[y][x + 1] = '!';
            }
        }
    }
    return added;
}

int Count(char c)
{
    int count = 0;
    for (int y = 0; y < MAP_DIM_Y; ++y)
    {
        for (int x = 0; x < MAP_DIM_X; ++x)
        {
            if (Map[y][x] == c)
            {
                ++count;
            }
        }
    }
    return count;
}

void Replace(char c1, char c2)
{
    for (int y = 0; y < MAP_DIM_Y; ++y)
    {
        for (int x = 0; x < MAP_DIM_X; ++x)
        {
            if (Map[y][x] == c1)
            {
                Map[y][x] = c2;
            }
        }
    }
}
