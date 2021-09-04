/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FRIEND_NUM 5
#define FRIEND_NAME_MAX_LEN 50 + 1

char OldFriend[FRIEND_NUM][FRIEND_NAME_MAX_LEN] = {
    {'A', 'l', 'i', 'c', 'e', '\0'},
    {'B', 'o', 'b', '\0'},
    {'C', 'a', 'r', 'l', '\0'},
    {'D', 'e', 'n', 'i', 's', 'e', '\0'},
    {'E', 'a', 'r', 'l', '\0'}};

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
    if (argc != 2)
    {
        printf("Yeuch. A name is required\n");
        exit(EXIT_FAILURE);
    }

    /**
    printf("Hello good old friends:\n");
    for(int t = 0; t < FRIEND_NUM; ++t) {
        printf("%s\n", OldFriend[t]);
    }

    // printf("sizeof OldFriend_Alt: %d\n", sizeof (OldFriend_Alt));
    printf("\nHello good old friends (alt version):\n");
    for(int t = 0; strlen(OldFriend_Alt[t]) > 0; ++t) {
        // ALT CONDITION: strcmp(OldFriend_Alt[t], "") != 0
        // ALT CONDITION (wiz): *OldFriend_Alt[t]
        printf("%s\n", OldFriend_Alt[t]);
    }
    **/

    int found = 0;
    for (int t = 0; strlen(OldFriend_Alt[t]) > 0; ++t)
    {
        if (stricmp(OldFriend_Alt[t], argv[1]) == 0)
        {
            found = 1;
        }
    }
    if (found)
    {
        printf("I already knew %s\n", argv[1]);
    }
    else
    {
        printf("Who's %s?\n", argv[1]);
    }
    return 0;
}
