/********************************************************************-*-c-*-*\
*               *  Code examples for Computer Sciences 2015-16               *
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

#define MAX_STR_LEN 100

int main()
{
    char name[MAX_STR_LEN +1];

    //printf("What's your name? ");
    //scanf("%s", name);
    //printf("Hello %s, the cat is under the table.\n", name);

    printf("What's your name? ");
    gets(name);
    printf("Hello %s, the cat is under the table.\n", name);

    //int t;
    //for(t = 0; t<=MAX_STR_LEN; t+=1) {
    //    printf(" %d/%c", name[t], name[t]);
    //}
    printf("\n");

    return 0;
}
