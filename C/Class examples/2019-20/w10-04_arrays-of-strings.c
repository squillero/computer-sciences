// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define MAX_FRIEND_NAME 32
#define MAX_FRIENDS_NUM 8

int main()
{
    char friend[MAX_FRIEND_NAME + 1];
    char paranoid_facebook[MAX_FRIENDS_NUM][MAX_FRIEND_NAME + 1];

    int num_frineds;
    printf("How many friends: ");
    scanf("%d", &num_frineds);
    for (int t = 0; t < num_frineds; ++t)
    {
        scanf("%s", paranoid_facebook[t]);
    }

    for (int t = 0; t < num_frineds; ++t)
    {
        printf("%2d) %s\n", t + 1, paranoid_facebook[t]);
    }

    // sort

    // find smallest
    /* uuuh
    char* first = paranoid_facebook[0];
    for(int t = 0; t < num_frineds; ++t) {
        if(strcmp(first, paranoid_facebook[t]) > 0) {
            first = paranoid_facebook[t];
        }
    }
    printf("First: %s\n", first);
    ***/

    char foo[496];
    foo<--> &foo[0] foo is "char *"

        char *p;
    ++p;

    for (int sort = 0; sort < num_frineds; ++sort)
    {

        int first_inndex = sort;
        for (int t = sort; t < num_frineds; ++t)
        {
            if (strcmp(paranoid_facebook[first_inndex], paranoid_facebook[t]) > 0)
            {
                first_inndex = t;
            }
        }
        char tmp[MAX_FRIEND_NAME + 1];
        strcpy(tmp, paranoid_facebook[sort]);
        strcpy(paranoid_facebook[sort], paranoid_facebook[first_inndex]);
        strcpy(paranoid_facebook[first_inndex], tmp);
    }

    for (int t = 0; t < num_frineds; ++t)
    {
        printf("%d) %s\n", t + 1, paranoid_facebook[t]);
    }

    return 0;
}
