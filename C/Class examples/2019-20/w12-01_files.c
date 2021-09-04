/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME "friends.txt"
#define MAX_FRIEND_NUM 100
#define MAX_STR_LEN 50

struct _FRIEND
{
    char name[MAX_STR_LEN + 1];
    char surname[MAX_STR_LEN + 1];
};
typedef struct _FRIEND FRIEND;

int main()
{
    FRIEND maroon[MAX_FRIEND_NUM];

    FILE *input = fopen(FILE_NAME, "r");
    if (input == NULL)
    {
        fprintf(stderr, "Yeuch. Can't open \"%s\"!\n", FILE_NAME);
        exit(EXIT_FAILURE);
    }

    /*** take 1
    int t = 0;
    fscanf(input, "%s %s", maroon[t].name, maroon[t].surname);
    while(!feof(input)) {
        ++t;
        fscanf(input, "%s %s", maroon[t].name, maroon[t].surname);
    }
    ***/

    /*** take 2 ***/
    int num_friends = 0;

    while (fscanf(input, "%s %s", maroon[num_friends].name, maroon[num_friends].surname) != EOF)
    {
        ++num_friends;
    }

    /*** take 3
    int num_friends = 0;
    char buffer[512];
    while(fgets(buffer, 512, input) != NULL) {
        sscanf(buffer, "%s %s", maroon[num_friends].name, maroon[num_friends].surname);
        ++num_friends;
    }
    **/

    fclose(input);

    /*** print ***/
    for (int t = 0; t < num_friends; ++t)
    {
        printf("%d) %s %s\n", t + 1, maroon[t].name, maroon[t].surname);
    }

    return EXIT_SUCCESS;
}
