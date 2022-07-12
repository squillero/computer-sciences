// Copyright © 2015 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 1024

int main(int argc, char *argv[])
{
    int array[MAX_LEN];
    int minRep;

    if (argc != 2)
    {
        printf("Yeuch!\n");
        exit(EXIT_FAILURE);
    }
    sscanf(argv[1], "%d", &minRep);

    int arrayLen = 0;
    while (scanf("%d", &array[arrayLen]) != EOF)
    {
        ++arrayLen;
    }

    int pos;
    int num;

    pos = 0;
    while (pos < arrayLen)
    {
        num = 0;
        while (pos + num < arrayLen && array[pos + num] == array[pos])
        {
            ++num;
        }
        if (num < minRep)
        {
            int t;
            for (t = 0; t < num; ++t)
            {
                printf("%d\n", array[pos]);
            }
        }
        pos += num;
    }

    return EXIT_SUCCESS;
}
