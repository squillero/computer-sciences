/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define NUM_EMPLOYEES 1000
#define MAX_LINE 256

typedef struct _EMPLOYEE
{
    int id;
    int total_time;
    int last_entrance;
} EMPLOYEE;

// proto
int str2time(char *string);
int get_employee(int id, EMPLOYEE *list);

int main(int argc, char *argv[])
{
    EMPLOYEE employee[NUM_EMPLOYEES] = {0};

    if (argc != 3)
    {
        fprintf(stderr, "D'ho...\n");
        exit(EXIT_FAILURE);
    }
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        fprintf(stderr, "D'ho...\n");
        exit(EXIT_FAILURE);
    }

    char line[MAX_LINE];
    while (fgets(line, MAX_LINE, input) != NULL)
    {
        int gate_id, emp_id;
        int direction;
        char time[MAX_LINE];
        sscanf(line, "%d %d %d %s", &gate_id, &emp_id, &direction, time);
        int i = get_employee(emp_id, employee);
        if (direction == 0)
        {
            // entering
            employee[i].last_entrance = str2time(time);
        }
        else
        {
            // exiting
            employee[i].total_time += str2time(time) - employee[i].last_entrance;
        }
    }
    fclose(input);

    switch (argv[2][1])
    {
    case 'v':
        for (int e = 0; e < NUM_EMPLOYEES; ++e)
        {
            if (employee[e].total_time > 0)
            {
                int h = employee[e].total_time / 60 / 60;
                int m = (employee[e].total_time % (60 * 60)) / 60;
                int s = employee[e].total_time % 60;
                printf("ID %d: %02d:%02d:%02d\n", employee[e].id, h, m, s);
            }
        }
        break;
    case 'r':; // nop
        int max = -1;
        int min = -1;
        for (int e = 0; e < NUM_EMPLOYEES; ++e)
        {
            if (employee[e].total_time > 0)
            {
                if (max < 0 || employee[e].total_time > employee[max].total_time)
                {
                    max = e;
                }
                if (min < 0 || employee[e].total_time < employee[min].total_time)
                {
                    min = e;
                }
            }
        }
        printf("Maximum time in the building: ID %d\n", max);
        printf("Minimum time in the building: ID %d\n", min);
        break;
    case 'R':; // nop
        int max_t = -1;
        int max_e;
        int min_t = 60 * 60 * 60 + 1;
        int min_e;
        for (int e = 0; e < NUM_EMPLOYEES; ++e)
        {
            if (employee[e].total_time > 0)
            {
                if (employee[e].total_time > max_t)
                {
                    max_e = e;
                }
                if (employee[e].total_time < min_t)
                {
                    min_e = e;
                }
            }
        }
        printf("Maximum time in the building: ID %d\n", max_e);
        printf("Minimum time in the building: ID %d\n", min_e);
        break;
    }

    return EXIT_SUCCESS;
}

int str2time(char *string)
{
    int h, m, s;
    sscanf(string, "%2d:%2d:%2d", &h, &m, &s);
    return h * 60 * 60 + m * 60 + s;
}

int get_employee(int id, EMPLOYEE *list)
{
    int e = 0;
    while (list[e].id != id && list[e].id != 0)
    {
        ++e;
    }
    if (list[e].id == 0)
    {
        list[e].id = id;
    }
    return e;
}
