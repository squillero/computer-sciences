// Copyright © 2018 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define ID_SIZE 4
#define MAX_BUSES 100
#define MAX_LINE_SIZE 256

struct _BUS
{
    char id[ID_SIZE + 1];
    int line;
    int pos_x, pos_y;
    int time_start, time_end;
    double distance;
};
typedef struct _BUS BUS;

// PROTO
void print_bus(BUS b);
int update_bus(BUS bus);
void print_time(int tot_sec);

// Global variables, Quick 'n dirty
BUS BusList[MAX_BUSES];
int BusNumber = 0; // redundant, already initialized!

void print_bus(BUS b)
{
    printf("id  : %s\n", b.id);
    printf("line: %d\n", b.line);
    printf("pos : (%d, %d)\n", b.pos_x, b.pos_y);
    printf("dist: %g\n", b.distance);
    printf("time: %d (start)\n", b.time_start);
    printf("time: %d (end)\n", b.time_end);
}

int update_bus(BUS bus)
{
    int i = 0;
    while (i < BusNumber && strcmp(BusList[i].id, bus.id) != 0)
    {
        ++i;
    }
    if (i == BusNumber)
    {
        printf("Adding bus: %s\n", bus.id);
        BusList[BusNumber++] = bus;
    }
    else
    {
        printf("Updating bus %d: %s\n", i, bus.id);
        BusList[i].time_end = bus.time_start;
        double last = (BusList[i].pos_x - bus.pos_x) * (BusList[i].pos_x - bus.pos_x) +
                      (BusList[i].pos_y - bus.pos_y) * (BusList[i].pos_y - bus.pos_y);
        BusList[i].distance += sqrt(last);
        BusList[i].pos_x = bus.pos_x;
        BusList[i].pos_y = bus.pos_y;
    }
    return 0;
}

void print_time(int tot_sec)
{
    int h = tot_sec / 60 / 60;
    int m = (tot_sec - h * 60 * 60) / 60;
    int s = tot_sec % 60;
    printf("%d:%02d:%02d", h, m, s);
}

int main(int argc, char *argv[])
{

    if (argc != 3)
    {
        fprintf(stderr, "Error: Wrong number of arguments.\n");
        exit(EXIT_FAILURE);
    }

    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        fprintf(stderr, "Error: Can't open \"%s\".\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    char line[MAX_LINE_SIZE];
    while (fgets(line, MAX_LINE_SIZE, input) != NULL)
    {
        BUS b = {0};
        sscanf(line, "%s %d %d %d %d",
               b.id, &b.line, &b.pos_x, &b.pos_y, &b.time_start);

        update_bus(b);
        printf("==========\n");
        for (int t = 0; t < BusNumber; ++t)
            print_bus(BusList[t]);
        printf("==========\n\n\n");
    }
    fclose(input);

    switch (argv[2][1])
    {
    case 'd':
        for (int t = 0; t < BusNumber; ++t)
        {
            printf("%s: %.0fm - first check: ",
                   BusList[t].id, BusList[t].distance);
            print_time(BusList[t].time_start);
            printf(", last check: ");
            print_time(BusList[t].time_end);
            printf("\n");
        }
        break;

    case 'v':
        for (int t = 0; t < BusNumber; ++t)
        {
            printf("%s: %0.1f km/h\n",
                   BusList[t].id,
                   1.0 * BusList[t].distance / (BusList[t].time_end - BusList[t].time_start) / 60 / 60);
        }
        break;

    default:
        fprintf(stderr, "Yeuch\n");
        exit(EXIT_FAILURE);
    }

    return 0;
}
