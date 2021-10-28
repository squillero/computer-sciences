// Copyright © 2018-2019 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define NUM_PATHS 4
#define MAP_DIM 11
#define MAP_FILE "bath.txt"

// protos
int get_path_length(int path);

char Map[MAP_DIM][MAP_DIM];

int main(int argc, char *argv[])
{
    int path_length[NUM_PATHS];

    if (argc != 2)
    {
        fprintf(stderr, "Yeuch! Wrong number of arguments.\n");
        exit(EXIT_FAILURE);
    }
    FILE *in = fopen(MAP_FILE, "r");
    if (in == NULL)
    {
        fprintf(stderr, "Yeuch! Can't open \"%s\".\n", MAP_FILE);
        exit(EXIT_FAILURE);
    }
    for (int r = 0; r < MAP_DIM; ++r)
    {
        for (int c = 0; c < MAP_DIM; ++c)
        {
            Map[r][c] = getc(in);
            printf("%c", Map[r][c]);
        }
        printf("\n");
        if (getc(in) != '\n')
        {
            // remove trailing \n && check (not required)
            fprintf(stderr, "PANIK\n");
            exit(EXIT_FAILURE);
        }
    }
    fclose(in);

    for (int p = 0; p < NUM_PATHS; ++p)
    {
        path_length[p] = get_path_length(p);
        printf("Path %d: length: %d\n", p, path_length[p]);
    }

    return 0;
}

int get_path_length(int path)
{
    int start_r = -1;
    int start_c = -1;

    for (int r = 0; start_r < 0 && r < MAP_DIM; ++r)
    {
        for (int c = 0; start_r < 0 && c < MAP_DIM; ++c)
        {
            if (Map[r][c] == '0' + path)
            {
                start_r = r;
                start_c = c;
            }
        }
    }

    int current_c = start_c;
    int current_r = start_r;

    struct
    {
        int r, c
    } step[] = {
        {-1, 0},
        {+1, 0},
        {0, -1},
        {0, +1}};
    int found = 1;
    int length = 0;
    while (found)
    {
        int next_r, next_c;
        found = 0;
        for (int s = 0; !found && s < 4; ++s)
        {
            next_r = current_r + step[s].r;
            next_c = current_c + step[s].c;
            if (next_r >= 0 && next_r < MAP_DIM &&
                next_c >= 0 && next_c < MAP_DIM &&
                Map[next_r][next_c] == '+')
            {
                found = 1;
            }
        }
        if (found)
        {
            ++length;
            Map[current_r][current_c] = '-';
            current_c = next_c;
            current_r = next_r;
        }
    }
    return length;
}
