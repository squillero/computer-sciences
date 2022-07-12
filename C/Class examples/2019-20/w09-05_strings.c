// Copyright © 2019-2020 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

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
