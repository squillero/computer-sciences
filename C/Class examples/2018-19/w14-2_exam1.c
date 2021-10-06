/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define HOTEL_NAME_LEN 40
#define MAX_HOTEL_FOR_AREA 10
#define MAX_LINE_LEN 256

typedef struct _HOTEL
{
    char name[HOTEL_NAME_LEN + 1];
    double price;
    char area; // 'n', 's', ...
    int booked;
} HOTEL;

// prototypes
int read_hotels(char *file_name, HOTEL *hlist);
void sort(HOTEL *hlist, int hnum);
int find_first(HOTEL *hlist, int hnum, char area);

int main(int argc, char *argv[])
{
    HOTEL hotel[4 * MAX_HOTEL_FOR_AREA];

    if (argc != 2)
    {
        fprintf(stderr, "ERROR: Exactly one argument required.\n");
        exit(EXIT_FAILURE);
    }
    int num_hotels = read_hotels(argv[1], hotel);
    printf("Got %d hotels!\n", num_hotels);
    sort(hotel, num_hotels);

    // main menu
    char area;

    char line[MAX_LINE_LEN];
    int user_quit = 0;
    while (!user_quit && fgets(line, MAX_LINE_LEN, stdin) != NULL)
    {
        switch (line[0])
        {
        case '1':
            sscanf(line, "%*d %c%*s", &area);
            int h = find_first(hotel, num_hotels, area);
            if (h < 0)
            {
                printf("There is no available hotels in the area requested.\n");
            }
            else
            {
                printf("%s %g\n", hotel[h].name, hotel[h].price);
                hotel[h].booked = 1;
            }
            break;
        case '2':
            for (int t = 0; t < num_hotels; ++t)
            {
                if (!hotel[t].booked)
                {
                    printf("Hotel: \"%s\", area: %c, price: %g\n",
                           hotel[t].name, hotel[t].area, hotel[t].price);
                }
            }
            break;
        case '3':
            user_quit = 1;
            printf("Goodbye...\n");
            break;
        default:
            printf("D'ho!?\n");
        }
    }

    return 0;
}

int find_first(HOTEL *hlist, int hnum, char area)
{
    int hotel = -1;
    for (int t = 0; hotel == -1 && t < hnum; ++t)
    {
        if (!hlist[t].booked && hlist[t].area == area)
        {
            hotel = t;
        }
    }
    return hotel;
}

int read_hotels(char *file_name, HOTEL *hlist)
{
    FILE *in = fopen(file_name, "r");
    if (in == NULL)
    {
        fprintf(stderr, "ERROR: Can't read \"%s\".\n", file_name);
        exit(EXIT_FAILURE);
    }
    char tmp[MAX_LINE_LEN];
    int num_hotels = 0;
    while (fscanf(in, "%s %s %lf",
                  hlist[num_hotels].name, tmp, &hlist[num_hotels].price) != EOF)
    {
        hlist[num_hotels].area = tmp[0];
        hlist[num_hotels].booked = 0;
        ++num_hotels;
    }

    fclose(in);
    return num_hotels;
}

void sort(HOTEL *hlist, int hnum)
{
    while (hnum > 1)
    {
        // find max 0...hnum
        int max = 0;
        for (int t = 0; t < hnum; ++t)
        {
            if (hlist[t].price > hlist[max].price)
            {
                max = t;
            }
        }

        // swap with first
        HOTEL h = hlist[max];
        hlist[max] = hlist[hnum - 1];
        hlist[hnum - 1] = h;

        // forget
        --hnum;
    }
}
