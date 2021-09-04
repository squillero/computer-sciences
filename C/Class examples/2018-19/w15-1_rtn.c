/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define OUTPUT_FILENAME "filtered_numbers.txt"

// protos
int prime(int num);
int rtp(int num);

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        fprintf(stderr, "ERROR: Exactly 4 args required.\n");
        exit(EXIT_FAILURE);
    }
    FILE *input = fopen(argv[1], "r");
    FILE *output = fopen(OUTPUT_FILENAME, "w");
    if (input == NULL || output == NULL)
    {
        fprintf(stderr, "ERROR: Can't open files.\n");
        exit(EXIT_FAILURE);
    }
    int limit_min = atoi(argv[2]);
    int limit_max = atoi(argv[3]);

    int number;
    int rtp_num = 0;
    while (fscanf(input, "%d", &number) != EOF)
    {
        if (number >= limit_min && number <= limit_max && rtp(number))
        {
            fprintf(output, "%d\n", number);
            ++rtp_num;
        }
    }
    if (rtp_num > 0)
    {
        printf("The file contains %d right-truncatable prime numbers between %d and %d\n",
               rtp_num, limit_min, limit_max);
    }
    else
    {
        printf("No Number Found\n");
    }

    fclose(input);
    fclose(output);
    return EXIT_SUCCESS;
}

int rtp(int num)
{
    //fprintf(stderr, "Checking %d\n", num);
    int check = prime(num);
    num /= 10;
    while (num > 0)
    {
        if (!prime(num))
        {
            check = 0;
        }
        num /= 10;
    }
    return check;
}

int prime(int num)
{
    int p = 1;
    if (num < 2)
    {
        p = 0;
    }
    for (int t = 2; p && t < num / 2; ++t)
    {
        if (num % t == 0)
        {
            p = 0;
        }
    }
    return p;
}
