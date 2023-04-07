// Copyright © 2015 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_SIZE 200 + 1

int main(int argc, char *argv[])
{
    char str[MAX_SIZE];
    printf("Command line super experiment!\n");
    int op;
    int start;

    if (argv[1][0] == '-')
    {
        start = 2;
        if (argv[1][1] == 'u')
        {
            op = 1;
        }
        else if (argv[1][1] == 'l')
        {
            op = 2;
        }
        else
        {
            printf("Yeuch!\n");
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        start = 1;
        op = 1;
    }

    int t, u;
    for (t = start; t < argc; ++t)
    {
        strcpy(str, argv[t]); // ie. str <- argv[t]
        for (u = 0; str[u] != '\0'; ++u)
        {
            if (op == 1)
            {
                str[u] = toupper(str[u]);
            }
            else
            {
                str[u] = tolower(str[u]);
            }
        }
        printf("%s ", str);
    }
    printf("\n");

    return EXIT_SUCCESS;
}
