// Copyright © 2015-2016 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

struct _Position
{
    int x;
    int y;
};
typedef struct _Position Position;

int Valid(Position p);
double Value(Position p);
Position SeekBest(Position p);
void Print(Position p);
int Same(Position p1, Position p2);

double Map[SIZE][SIZE];

int main(int argc, char *argv[])
{
    FILE *in;
    int t, u;

    printf("My very first hill climber!\n");

    if (argc != 2)
    {
        fprintf(stderr, "One arg required!\n");
        exit(EXIT_FAILURE);
    }
    in = fopen(argv[1], "r");
    if (in == NULL)
    {
        fprintf(stderr, "Can't read %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    for (t = 0; t < SIZE; t += 1)
    {
        for (u = 0; u < SIZE; u += 1)
        {
            fscanf(in, "%lf", &Map[u][t]);
        }
    }
    fclose(in);

    Position current, next;
    current.x = -1;
    current.y = -1;
    next.x = 0;
    next.y = 0;

    while (!Same(current, next))
    {
        current = next;
        Print(current);
        next = SeekBest(current);
    }
    printf("\n");
    return 0;
}

int Same(Position p1, Position p2)
{
    if (p1.x != p2.x || p1.y != p2.y)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void Print(Position p)
{
    printf("(%d %d)", p.x, p.y);
}

int Valid(Position p)
{
    if (p.x < 0 || p.x >= SIZE)
    {
        return 0;
    }
    if (p.y < 0 || p.y >= SIZE)
    {
        return 0;
    }
    return 1;
}

double Value(Position p)
{
    return Map[p.x][p.y];
}

Position SeekBest(Position p)
{
    int ox, oy;
    Position t;
    Position best = p;

    for (ox = -1; ox <= 1; ox += 1)
    {
        for (oy = -1; oy <= 1; oy += 1)
        {
            t.x = p.x + ox;
            t.y = p.y + oy;
            if (Valid(t) && Value(t) > Value(best))
            {
                best = t;
            }
        }
    }
    return best;
}
