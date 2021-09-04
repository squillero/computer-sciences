/********************************************************************-*-c-*-*\
*               *  Code examples for Computer Sciences 2017-18               *
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

#define MAX_NUM_FRIENDS 30
#define NAME_LEN 50

char friends[MAX_NUM_FRIENDS][NAME_LEN +1];

int main()
{
    printf("Type your friends, end with -\n");

    int friends_num = 0;

    do {
        gets(friends[friends_num++]);
    } while(strcmp(friends[friends_num-1], "-") != 0);
    --friends_num;

    printf("I have %d friends:\n", friends_num);
    for(int t = 0; t < friends_num; ++t) {
        printf("%d: %s\n", t+1, friends[t]);
    }

    return 0;
}
