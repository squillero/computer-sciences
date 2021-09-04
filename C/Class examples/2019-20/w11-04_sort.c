/********************************************************************-*-c-*-*\
*               *  Code example for Computer Sciences 2019-20                *
*    #####      *  (!) Giovanni Squillero <giovanni.squillero@polito.it>     *
*   ######      *                                                            *
*   ###   \     *  Copying and distribution of this file, with or without    *
*    ##G  c\    *  modification, are permitted in any medium without royalty *
*    #     _\   *  provided this notice is preserved.                        *
*    |   _/     *  This file is offered as-is, without any warranty.         *
*    |  _/      *                                                            *
*               *  See: http://staff.polito.it/giovanni.squillero/dida.php   *
\****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_FRIENDS 10
#define NAME_LENGTH 50

// protos
void sort_friend(int n);

char Friends[NUM_FRIENDS][NAME_LENGTH+1];

int main(int argc, char *argv[])
{
    printf("Sort!\n");

    int num_friends = argc - 1;
    if(num_friends > NUM_FRIENDS) {
        printf("Go to Facebook\n");
        exit(1);
    }
    for(int t = 0; t < num_friends; ++t) {
        strcpy(Friends[t], argv[t+1]);
    }

    printf("\nMy firends:\n");
    for(int t = 0; t < num_friends; ++t) {
        printf("%s\n", Friends[t]);
    }

    sort_friend(num_friends);

    printf("\nMy firends:\n");
    for(int t = 0; t < num_friends; ++t) {
        printf("%s\n", Friends[t]);
    }

    return 0;
}

void sort_friend(int num)
{
    for(int point = 0; point < num; ++point) {
        int min = point;
        for(int t = min + 1; t < num; ++t) {
            if(strcmp(Friends[t], Friends[min]) < 0) {
                min = t;
            }
        }
        char tmp[NAME_LENGTH+1];
        strcpy(tmp, Friends[point]);
        strcpy(Friends[point], Friends[min]);
        strcpy(Friends[min], tmp);
    }
}
