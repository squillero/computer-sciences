// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VISIT_FILE_NAME "visits.txt"
#define PRICE_FILE_NAME "prices.txt"
#define NUMBER_SIZE 5
#define MAX_VISIT 10

typedef struct _PRICE_RANGE
{
    double price;
    int max_age;
} PRICE_RANGE;

typedef struct _VISIT
{
    char card[NUMBER_SIZE + 1];
    int last_visit;
    int flag;
} VISIT;

typedef struct _DATE
{
    int year, month, day;
} DATE;

typedef struct _TIME
{
    int h, m, s;
} TIME;

// protos
DATE str2date(char *str);
TIME str2time(char *str);
int age(DATE today, DATE birthday);
int timediff(TIME t1, TIME t2);
void print_stat(FILE *in, int year, PRICE_RANGE *prices);
void find_good_visitors(FILE *in, int year, VISIT *visitor);
double ticket_cost(DATE day, DATE birthday, PRICE_RANGE *prices);

int main(int argc, char *argv[])
{
    PRICE_RANGE price[3];
    FILE *pfile = fopen(PRICE_FILE_NAME, "r");
    if (pfile == NULL)
    {
        fprintf(stderr, "Can't open %s!\n", PRICE_FILE_NAME);
        exit(EXIT_FAILURE);
    }
    price[0].max_age = 10;
    fscanf(pfile, "%lf", &price[0].price);
    price[1].max_age = 18;
    fscanf(pfile, "%lf", &price[1].price);
    price[2].max_age = 999;
    fscanf(pfile, "%lf", &price[2].price);
    fclose(pfile);

    if (argc < 3)
    {
        fprintf(stderr, "Yeuch: at least 2 args are required\n");
        exit(EXIT_FAILURE);
    }
    FILE *pvisit = fopen(VISIT_FILE_NAME, "r");
    if (pvisit == NULL)
    {
        fprintf(stderr, "Can't open %s!\n", VISIT_FILE_NAME);
        exit(EXIT_FAILURE);
    }
    int year = atoi(argv[1]);
    if (strcmp(argv[2], "G") == 0)
    {
        VISIT visitor[MAX_VISIT] = {0};
        for (int t = 3; t < argc; ++t)
        {
            strcpy(visitor[t - 3].card, argv[t]);
            visitor[t - 3].last_visit = -1;
            visitor[t - 3].flag = 0;
        }
        find_good_visitors(pvisit, year, visitor);
    }
    else if (strcmp(argv[2], "S") == 0)
    {
        print_stat(pvisit, year, price);
    }
    else
    {
        fprintf(stderr, "D'ho!?\n");
        exit(EXIT_FAILURE);
    }

    fclose(pvisit);
    return EXIT_SUCCESS;
}

DATE str2date(char *str)
{
    DATE date;
    sscanf(str, "%2d/%2d/%4d", &date.day, &date.month, &date.year);
    return date;
}

TIME str2time(char *str)
{
    TIME time;
    sscanf(str, "%2d:%2d:%2d", &time.h, &time.m, &time.s);
    return time;
}

int timediff(TIME t1, TIME t2)
{
    return (t1.h - t2.h) * 60 * 60 + (t1.m - t2.m) * 60 + (t1.s - t2.s);
}

double ticket_cost(DATE day, DATE birthday, PRICE_RANGE *prices)
{
    int age = day.year - birthday.year;
    if (day.month < birthday.month)
    {
        --age;
    }
    else if (day.month == birthday.month && day.day < birthday.day)
    {
        --age;
    }
    double ticket = -1.0;
    for (int t = 0; ticket < 0.0; ++t)
    {
        if (age < prices[t].max_age)
        {
            ticket = prices[t].price;
        }
    }
    return ticket;
}

void print_stat(FILE *in, int year, PRICE_RANGE *prices)
{
    int number_of_visits = 0;
    int tot_visit_time = 0;
    double tot_money = 0.0;

    char code[NUMBER_SIZE + 1];
    char day[10 + 1], birthday[10 + 1];
    char entrance_time[8 + 1], exit_time[8 + 1];
    while (fscanf(in, "%s %s %s %s %s", code, day, entrance_time, exit_time, birthday) != EOF)
    {
        DATE day2 = str2date(day);
        if (day2.year == year)
        {
            ++number_of_visits;
            tot_visit_time += timediff(str2time(exit_time), str2time(entrance_time));
            tot_money += ticket_cost(day2, str2date(birthday), prices);
        }
    }
    printf("Total number of visits of %d is %d\n", year, number_of_visits);
    printf("Total income of %d is %g euro\n", year, tot_money);
    printf("Average visiting time of %d is %.0f minutes\n", year, tot_visit_time / number_of_visits / 60.0);
}

void find_good_visitors(FILE *in, int year, VISIT *visitor)
{
}
