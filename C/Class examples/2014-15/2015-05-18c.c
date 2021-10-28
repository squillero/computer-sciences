// Copyright © 2015 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define STR_SIZE 1024

int convert(char s1[], char s2[]);

int main(int argc, char *argv[])
{
    char string[STR_SIZE];

    /**
     * FIRST OPTION
    while( scanf("%s", string) != EOF ) {
        printf(">> %s\n", string);
    }
    **/

    while (gets(string) != NULL)
    {
        char string2[STR_SIZE];
        while (convert(string, string2))
        {
            char string3[STR_SIZE];
            strcpy(string3, string2);
            strcpy(string2, string);
            strcpy(string, string3);
        };
        printf(">> %s\n", string2);
    }
    printf("Whoa!!!!!!!!!\n");

    return EXIT_SUCCESS;
}

int convert(char s1[], char s2[])
{
    int read = 0, write = 0;
    int flag = 0;

    while (s1[read] != '\0')
    {
        if (s1[read] == 'c' && s1[read + 1] == 'h')
        {
            s2[write] = 'k';
            read += 2;
            write += 1;
            flag = 1;
        }
        else if (s1[read] == s1[read + 1])
        {
            s2[write] = s1[read];
            read += 2;
            write += 1;
            flag = 1;
        }
        else if (s1[read] == 'o')
        {
            s2[write] = '0';
            read += 1;
            write += 1;
            flag = 1;
        }
        else if (s1[read] == 'f')
        {
            s2[write] = 'p';
            s2[write + 1] = 'h';
            read += 1;
            write += 2;
            flag = 1;
        }
        else
        {
            s2[write] = s1[read];
            read += 1;
            write += 1;
        }
    }
    s2[write] = '\0';
    return flag;
}
