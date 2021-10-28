// Copyright © 2016-2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_SIZE 256

// PROTOS
void my_string_to_lower(char s[]);

void my_string_to_lower(char s[])
{
    for (int t = 0; s[t] != '\0'; ++t)
    {
        s[t] = tolower(s[t]);
    }
}

int main()
{
    char month_str[256];
    int month_int;

    printf("Enter month: ");
    scanf("%s", month_str);
    my_string_to_lower(month_str);

    if (strcmp(month_str, "january") == 0)
    {
        month_int = 1;
    }
    else if (strcmp(month_str, "february") == 0)
    {
        month_int = 2;
    }
    else if (strcmp(month_str, "march") == 0)
    {
        month_int = 3;
    }
    else if (strcmp(month_str, "april") == 0)
    {
        month_int = 4;
    }
    else if (strcmp(month_str, "may") == 0)
    {
        month_int = 5;
    }
    else if (strcmp(month_str, "june") == 0)
    {
        month_int = 6;
    }
    else if (strcmp(month_str, "july") == 0)
    {
        month_int = 7;
    }
    else if (strcmp(month_str, "august") == 0)
    {
        month_int = 8;
    }
    else if (strcmp(month_str, "september") == 0)
    {
        month_int = 9;
    }
    else if (strcmp(month_str, "october") == 0)
    {
        month_int = 10;
    }
    else if (strcmp(month_str, "november") == 0)
    {
        month_int = 11;
    }
    else if (strcmp(month_str, "december") == 0)
    {
        month_int = 12;
    }
    else
    {
        printf("D'ho!?\n");
        month_int = -1;
    }

    printf("The month is: %d\n", month_int);
}
