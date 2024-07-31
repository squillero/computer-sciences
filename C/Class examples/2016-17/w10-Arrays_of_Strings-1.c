// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define FRIENDS_NUM 5
#define NAME_LENGTH 42 + 1

char Friend[FRIENDS_NUM][NAME_LENGTH];

int main()
{
    printf("Enter names\n");
    for (int t = 0; t < FRIENDS_NUM; ++t)
    {
        scanf("%s", Friend[t]);
    }

    for (int t = 0; t < FRIENDS_NUM; ++t)
    {
        Friend[t][0] = toupper(Friend[t][0]);
    }

    printf("My good friends\n");
    for (int t = 0; t < FRIENDS_NUM; ++t)
    {
        printf("%d: %s\n", t, Friend[t]);
    }
}
