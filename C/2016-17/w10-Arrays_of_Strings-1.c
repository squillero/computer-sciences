/********************************************************************-*-c-*-*\
*               *  Code examples for Computer Sciences 2016-17               *
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
#include <ctype.h>

#define FRIENDS_NUM 5
#define NAME_LENGTH 42+1

char Friend[FRIENDS_NUM][NAME_LENGTH];

int main()
{
    printf("Enter names\n");
    for(int t = 0; t < FRIENDS_NUM; ++t) {
        scanf("%s", Friend[t]);
    }

    for(int t = 0; t < FRIENDS_NUM; ++t) {
        Friend[t][0] = toupper(Friend[t][0]);
    }

    printf("My good friends\n");
    for(int t = 0; t < FRIENDS_NUM; ++t) {
        printf("%d: %s\n", t, Friend[t]);
    }
}
