/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_SENSORS 20
#define NUM_READS 10

int main(int argc, char *argv[])
{
    FILE *input;
    int sensor_number;
    double sensor[NUM_READS][MAX_SENSORS];
    int active[MAX_SENSORS] = {0};

    // boilerplate start
    if (argc < 2)
    {
        fprintf(stderr, "Yeuch: Need file name as first argument.\n");
        exit(EXIT_FAILURE);
    }

    if ((input = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "Yeuch: Can't open \"%s\" for reading.\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    // boilerplate end

    fscanf(input, "%d", &sensor_number);
    if (argc < 3 || argc > 2 + sensor_number)
    {
        fprintf(stderr, "Yeuch: Illegal number of arguments\n");
        exit(EXIT_FAILURE);
    }
    for (int t = 2; t < argc; ++t)
    {
        int sens = atoi(argv[t]);
        // pedantic check ?
        active[sens - 1] = 1;
    }

    char timestamp[5 + 1];
    int index = 0;
    int lines = 0;
    while (fscanf(input, "%s", timestamp) != EOF)
    {
        ++lines;

        int h, m;
        sscanf(timestamp, "%2d:%2d", &h, &m);
        printf("H%02d M%02d : ", h, m);

        for (int t = 0; t < sensor_number; ++t)
        {
            fscanf(input, "%lf", &sensor[index][t]);
        }

        for (int t = 0; t < sensor_number; ++t)
        {
            if (active[t])
            {
                printf("%8g", sensor[index][t]);
            }
        }
        printf("\n");

        if (lines > 1)
        {
            int previous_index = (index - 1 + NUM_READS) % NUM_READS;
            for (int t = 0; t < sensor_number; ++t)
            {
                if (active[t])
                {
                    if (fabs(sensor[index][t] - sensor[previous_index][t]) > .3)
                    {
                        printf("GOTCHA! Sensors %d! (%g)\n", t + 1, fabs(sensor[index][t] - sensor[previous_index][t]));
                    }
                }
            }
        }

        index = (index + 1) % NUM_READS;
    }

    fclose(input);
    return 0;
}
