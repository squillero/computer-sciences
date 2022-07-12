// Copyright © Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define NAME_LENGTH 20
#define LINKS_NUMBER 25
#define MAX_SEGMENTS 3
#define FARE_FILE "20190201-B_fares.txt"

typedef struct _LINK
{
    char from[NAME_LENGTH + 1];
    char to[NAME_LENGTH + 1];
    double fare;
} LINK;

// Proto
double find_next(const LINK *lnks, const char *current, char *next);

int main(int argc, char *argv[])
{
    //*** Begin boilerplate code
    if (argc != 3)
    {
        fprintf(stderr, "Yeuch: Exactly two arguments required!\n");
        exit(EXIT_FAILURE);
    }
    FILE *in = fopen(FARE_FILE, "r");
    if (in == NULL)
    {
        fprintf(stderr, "Yeuch: Can't open \"%s\"\n", FARE_FILE);
        exit(EXIT_FAILURE);
    }
    LINK links[LINKS_NUMBER + 1] = {0};
    int n_links = 0;
    while (fscanf(in, "%s %s %lf", links[n_links].from, links[n_links].to, &links[n_links].fare) != EOF)
    {
        ++n_links;
    }
    fclose(in);
    //*** End boilerplate code

    char current_city[NAME_LENGTH + 1];
    char next_city[NAME_LENGTH + 1];
    char destination[NAME_LENGTH + 1];
    strcpy(current_city, argv[1]);
    strcpy(next_city, argv[1]);
    strcpy(destination, argv[2]);
    int segments = 0;
    double tot_fare = 0.0;
    while (segments < MAX_SEGMENTS && strcmp(current_city, destination) != 0)
    {
        double fare = find_next(links, current_city, next_city);
        tot_fare += fare;
        strcpy(current_city, next_city);
        ++segments;
    }

    if (strcmp(next_city, destination) == 0)
    {
        printf("Destination reached in %d segments. Total cost: %.2f EUR", segments, tot_fare);
    }
    else
    {
        printf("It is not possible to reach the destination traversing %d segments at maximum.", MAX_SEGMENTS);
    }
    return EXIT_SUCCESS;
}

// Update [next] to the only city reachable from [current], returns the fare
double find_next(const LINK *lnks, const char *current, char *next)
{
    int t = 0;
    while (strcmp(lnks[t].from, "") != 0 && strcmp(lnks[t].from, current) != 0)
    {
        ++t;
    }
    if (strcmp(lnks[t].from, "") == 0)
    {
        strcpy(next, "");
        return 0.0; // end of list, not found
    }
    else
    {
        strcpy(next, lnks[t].to);
        return lnks[t].fare;
    }
}
