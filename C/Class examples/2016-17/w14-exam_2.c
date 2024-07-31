// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

#define NAME_LEN 20
#define MAX_GOODS 4096
#define MAX_LINE 256

typedef struct _DATE
{
    int d, m, y;
} DATE;

typedef struct _GOOD
{
    char name[NAME_LEN + 1];
    DATE last_op;
    int tot_load;
    double tot_income;
} GOOD;

// PROTOS
int date_cmp(DATE d1, DATE d2);
int get_index(GOOD *goods, char *name);

int main(int argc, char *argv[])
{
    GOOD goods[MAX_GOODS] = {0};

    if (argc != 2)
    {
        fprintf(stderr, "One argument is required!\n");
        exit(EXIT_FAILURE);
    }
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        fprintf(stderr, "Can't open file \"%s\"\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    char line[MAX_LINE];
    while (fgets(line, MAX_LINE, input) != NULL)
    {
        char name[NAME_LEN + 1];
        DATE dop;
        int qty;
        sscanf(line, "%s %2d-%2d-%4d %d",
               name, &dop.d, &dop.m, &dop.y, &qty);

        int index = get_index(goods, name);
        if (qty > 0)
        {
            goods[index].tot_load += qty;
            goods[index].tot_income += 10.0 + 0.01 * qty;
            if (date_cmp(goods[index].last_op, dop) < 0)
            {
                goods[index].last_op = dop;
            }
        }
    }
    fclose(input);

    for (int t = 0; goods[t].name[0] != '\0'; ++t)
    {
        printf("Total quintals of loaded %s: %.2f\n",
               goods[t].name, goods[t].tot_load / 100.0);
        printf("Date of last loading op: %02d-%02d-%04d\n",
               goods[t].last_op.d, goods[t].last_op.m, goods[t].last_op.y);
        printf("Total income: %g EUR\n", goods[t].tot_income);
        printf("\n");
    }
    return EXIT_SUCCESS;
}

int date_cmp(DATE d1, DATE d2)
{
    if (d1.y != d2.y)
    {
        return d1.y - d2.y;
    }
    else if (d1.m != d2.m)
    {
        return d1.m - d2.m;
    }
    else
    {
        return d1.d - d2.d;
    }
}

int get_index(GOOD *goods, char *name)
{
    int t;
    for (t = 0; strcmp(goods[t].name, "") != 0; ++t)
    {
        if (strcmp(goods[t].name, name) == 0)
        {
            return t;
        }
    }
    strcpy(goods[t].name, name);
    return t;
}
