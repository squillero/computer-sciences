// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int my_string_length(char s[])
int my_string_length(char *s)
{
    int t = 0;
    while (s[t] != '\0')
    {
        ++t;
    }
    return t;
}

int main()
{
    char string[] = "La la la la la la la la la la la la la";

    printf("Len: %d\n", my_string_length(string));
    printf("Len: %d\n", strlen(string));
    return 0;
}
