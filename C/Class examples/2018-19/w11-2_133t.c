// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_LINE_LEN 256

// proto
void leet(char *line);

int main()
{
    char line[MAX_LINE_LEN];

    /*** using getchar (the hard way)
    int c = getchar();

    int len = 0;
    while(c != EOF) {
        if(c == '\n') {
            line[len] = '\0';
            leet(line);
            len = 0;
        } else {
            line[len++] = c;
        }
        c = getchar();
    }
    ***/

    /*** using gets (the easy way) ***/
    while (gets(line) != NULL)
    {
        leet(line);
    }

    return 0;
}

void leet(char *line)
{
    char code[MAX_LINE_LEN];

    int c = 0;
    int t = 0;
    while (line[t] != '\0')
    {
        if (tolower(line[t]) == 'e' && tolower(line[t + 1]) == 'd')
        {
            code[c++] = 'd'; // "pwned" becomes "pwnd"
            t += 1;
        }
        else if (tolower(line[t]) == 'a' && tolower(line[t + 1]) == 'n' && tolower(line[t + 2]) == 'd')
        {
            code[c++] = '&'; // "sandbox" becomes "s&box"
            t += 2;
        }
        else if (tolower(line[t]) == 'f' && tolower(line[t + 1]) == 'o' && tolower(line[t + 2]) == 'r')
        {
            code[c++] = '4'; // "for" becomes "4"
            t += 2;
        }
        else if (tolower(line[t]) == 'f')
        {
            code[c++] = 'p';
            code[c++] = 'h';
        }
        else if (tolower(line[t]) == 'a')
        {
            code[c++] = '4';
        }
        else if (tolower(line[t]) == 'e')
        {
            code[c++] = '3';
        }
        else if (tolower(line[t]) == 'i')
        {
            code[c++] = '1';
        }
        else if (tolower(line[t]) == 'l')
        {
            code[c++] = '1';
        }
        else if (tolower(line[t]) == 'o')
        {
            code[c++] = '0';
        }
        else if (tolower(line[t]) == 'b')
        {
            code[c++] = '8';
        }
        else if (tolower(line[t]) == 't')
        {
            code[c++] = '7';
        }
        else
        {
            code[c++] = line[t];
        }

        ++t;
    }
    code[c] = '\0';

    for (int t = 0; code[t] != '\0'; ++t)
    {
        if (rand() % 1000 < 500)
        {
            code[t] = toupper(code[t]);
        }
        else
        {
            code[t] = tolower(code[t]);
        }
    }

    printf("%s\n", code);
}
