/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

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
