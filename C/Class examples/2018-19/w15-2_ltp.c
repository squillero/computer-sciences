/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OUTPUT_FILENAME "filtered_numbers.txt"

// protos
int prime(int num);
int ltp(char *num);
void remove_first_char(char *s);

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

    char number[32];
    int rtp_num = 0;
    while (fscanf(input, "%s", number) != EOF)
    {
        if (atoi(number) >= limit_min && atoi(number) <= limit_max && ltp(number))
        {
            fprintf(output, "%s\n", number);
            ++rtp_num;
        }
    }
    if (rtp_num > 0)
    {
        printf("The file contains %d left-truncatable prime numbers between %d and %d\n",
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

int ltp(char *num)
{
    int check = 1;
    while (check && strcmp(num, "") != 0)
    {
        fprintf(stderr, "Checking %s\n", num);
        if (!prime(atoi(num)))
        {
            check = 0;
        }
        remove_first_char(num);
    }
    return check;
}

void remove_first_char(char *s)
{
    int t;
    for (t = 1; s[t] != '\0'; ++t)
    {
        s[t - 1] = s[t];
    }
    s[t - 1] = '\0';
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
