// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_LEN 4096

// protos
void my_string_sort(const char *source, char *dest);

int main()
{
    char foo[MAX_LEN];
    char bar[MAX_LEN];

    gets(foo);
    my_string_sort(foo, bar);
    printf("\n\nOriginal string: \"%s\"\n", foo);
    printf("Sorted string  : \"%s\"\n", bar);

    return 0;
}

void my_string_sort(const char *source, char *dest)
{
    int t = 0;
    for (t = 0; source[t] != '\0'; ++t)
    {
        dest[t] = toupper(source[t]);
    }
    dest[t] = '\0'; // 3 pts @ the exam ;-)

    int len = strlen(dest);
    // repeat
    while (len > 0)
    {
        // find max elem
        int max = 0;
        for (int t = 0; t < len; ++t)
        {
            if (dest[t] > dest[max])
            {
                max = t;
            }
        }
        // put it in the last pos
        int tmp = dest[len - 1];
        dest[len - 1] = dest[max];
        dest[max] = tmp;
        // forget about last element
        --len;
    }
}
