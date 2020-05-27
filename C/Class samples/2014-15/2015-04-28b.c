/********************************************************************-*-c-*-*\
*               *  Class examples for Computer Sciences 2014-15              *
*    #####      *  (!) Giovanni Squillero <giovanni.squillero@polito.it>     *
*   ######      *                                                            *
*   ###   \     *  Copying and distribution of this file, with or without    *
*    ##G  c\    *  modification, are permitted in any medium without royalty *
*    #     _\   *  provided this notice is preserved.                        *
*    |   _/     *  This file is offered as-is, without any warranty.         *
*    |  _/      *                                                            *
*               *  See: http://www.cad.polito.it/staff/squillero/dida/       *
\****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 256

// PROTO: +1 @ the exam ;-)
int length(char w[]);

int main()
{
    char w1[SIZE];

    printf("Enter 1 word:");
    scanf("%s", w1);

    printf("Checking \"%s\"\n", &w1[0]);

    int flag = 0;
    int t;
    int len = length(w1);
    for(t=0; w1[t]!='\0'; ++t) {
        if(w1[t] != w1[len-t-1]) {
            flag=1;
        }
    }
    if(flag==0) {
        printf("BOB!\n");
    } else {
        printf("no\n");
    }

    return EXIT_SUCCESS;
}

int length(char w[])
{
    int t=0;
    while(w[t]!='\0') {
        ++t;
    }
    return t;
}
