// Copyright © Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define INPUT_FILE "201606-A.dat"
#define BOMB 'B'
#define BOMB_INACTIVE 'b'
#define WALL '.'
#define N 5

typedef struct _AVENGER
{
    char name[32 + 1];
    int row;
    int col;
} AVENGER;

// NB: This declaration is the trickiest part of the code
const struct
{
    char *str;
    int row_offset, col_offset;
} Move[] = {
    {"Sud", 1, 0},
    {"Nord", -1, 0},
    {"Est", 0, 1},
    {"Ovest", 0, -1}};

int main(int argc, char *argv[])
{
    srand(time(NULL));

    if (argc < 2 || atoi(argv[1]) <= 0)
    {
        fprintf(stderr, "Usage: %s NUM\n\tWith NUM the number of turns available to find all bombs\n", argv[0]);
        exit(1);
    }
    int availableTime = atoi(argv[1]);

    // Read & Check input
    FILE *input;
    char Map[N][N + 1 + 1];
    int numBombs = 0;

    input = fopen(INPUT_FILE, "r");
    if (input == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", INPUT_FILE);
        exit(1);
    }
    for (int r = 0; r < N; ++r)
    {
        fgets(Map[r], N + 1 + 1, input);
        for (int c = 0; c < N; ++c)
        {
            if (Map[r][c] == BOMB)
            {
                ++numBombs;
            }
        }
    }
    fclose(input);
    printf("Read map %d x %d containing %d bombs\n", N, N, numBombs);

    // Simulation!
    AVENGER avenger[] = {
        {"Thor", 0, 0},
        {"Ironman", 0, 0},
    };

    int time = 0;
    while (time <= availableTime && numBombs > 0)
    {
        printf("Time %d:", time);

        // Current position
        for (int a = 0; a < 2; ++a)
        {
            int row = avenger[a].row;
            int col = avenger[a].col;
            printf(" %s(%d,%d)", avenger[a].name, row, col);
            if (Map[row][col] == 'B')
            {
                printf("!");
                --numBombs;
                Map[row][col] = BOMB_INACTIVE;
            }
        }
        printf("\n");

        // Next move
        for (int a = 0; a < 2; ++a)
        {
            int row = avenger[a].row;
            int col = avenger[a].col;
            int m = rand() % 4;
            printf("%s %d (%s) ", avenger[a].name, m, Move[m].str);
            if (row + Move[m].row_offset < N && row + Move[m].row_offset >= 0 && col + Move[m].col_offset < N && col + Move[m].col_offset >= 0 && Map[row + Move[m].row_offset][col + Move[m].col_offset] != WALL)
            {
                avenger[a].row += Move[m].row_offset;
                avenger[a].col += Move[m].col_offset;
            }
        }
        printf("\n");

        time += 10;
    }

    if (numBombs > 0)
    {
        printf("Mission failed\n");
    }
    else
    {
        printf("Mission accomplished\n");
    }

    return EXIT_SUCCESS;
}
