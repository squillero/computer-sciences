// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// PROTOTYPES
int countv(char *s);

char *OldFriend_Alt[] = {
    "Alice",
    "Bob",
    "Carl",
    "Earl",
    "Francis",
    "George",
    ""};

int main(int argc, char *argv[])
{
    int maxv = 0;
    for (int t = 1; strlen(OldFriend_Alt[t]) > 0; ++t)
    {
        if (countv(OldFriend_Alt[t]) > countv(OldFriend_Alt[maxv]))
        {
            maxv = t;
        }
    }
    printf("%s!\n", OldFriend_Alt[maxv]);

    return 0;
}

int countv(char *s)
{
    int cnt = 0;
    for (int t = 0; s[t] != '\0'; ++t)
    {
        switch (s[t])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            ++cnt;
            break;
        }
        /** ALTERNATIVE
        if(strchr("aeiouAEIOU", s[t]) != NULL) {
            ++cnt;
        }
        **/
    }
    return cnt;
}
