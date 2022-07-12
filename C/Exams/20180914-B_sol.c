// Copyright © Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

typedef struct _HOTEL
{
    char name[40 + 1];
    char area; // 1 char is enough (n, s, e, w)
    double price;
    int available; // in C99 _Bool would have been better
} HOTEL;

int main(int argc, char *argv[])
{
    // boiler plate code
    if (argc != 2)
    {
        fprintf(stderr, "Exactly one argument required\n");
        exit(1);
    }
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        fprintf(stderr, "Can't open file \"%s\"\n", argv[1]);
        exit(2);
    }

    // read hotel list
    HOTEL hotels[40];
    int n_hotel = 0;
    while (fscanf(input, "%s %c%*s %lf", hotels[n_hotel].name, &hotels[n_hotel].area, &hotels[n_hotel].price) != EOF)
    {
        hotels[n_hotel].available = 1;
        ++n_hotel;
    }
    fclose(input);

    // sort hotels disregarding areas
    // (this is a simple, non-stable selection sort)
    for (int h1 = 0; h1 < n_hotel; ++h1)
    {
        int cheapest = h1;
        for (int h2 = h1 + 1; h2 < n_hotel; ++h2)
        {
            if (hotels[h2].price < hotels[cheapest].price)
                cheapest = h2;
        }
        HOTEL temp = hotels[h1];
        hotels[h1] = hotels[cheapest];
        hotels[cheapest] = temp;
    }

    int user_exit = 0;
    char area;
    int found;
    while (!user_exit)
    {
        printf("Input your request (1 book - with area, 2 print, 3 exit):\n");
        char line[256];
        fgets(line, 256, stdin);
        switch (line[0])
        {
        case '1':
            // book the first available hotel in the area
            sscanf(line, "%*c %c%*s", &area);
            found = 0;
            for (int n = 0; !found && n < n_hotel; ++n)
            {
                if (hotels[n].available && hotels[n].area == area)
                {
                    printf("%s %0.2f\n", hotels[n].name, hotels[n].price);
                    hotels[n].available = 0;
                    found = 1;
                }
            }
            if (!found)
            {
                printf("There is no available hotel in the requested area.\n");
            }
            break;
        case '2':
            // print available hotels (a bit cumbersome)
            for (int n = 0; n < n_hotel; ++n)
                if (hotels[n].available)
                {
                    printf("%s ", hotels[n].name);
                    if (hotels[n].area == 'n')
                        printf("north");
                    else if (hotels[n].area == 's')
                        printf("south");
                    else if (hotels[n].area == 'e')
                        printf("east");
                    else
                        printf("west");
                    printf(" %0.2f\n", hotels[n].price);
                }
            break;
        case '3':
            // taht's all
            user_exit = 1;
            break;
        default:
            printf("D'ho!?\n");
        }
    }
    return EXIT_SUCCESS;
}
