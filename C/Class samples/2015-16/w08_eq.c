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

#define MAX_LEN 1024

// PROTOS
int Equal(char u[], char q[]);
// or even: int Equal(char *u, char *q);

int main()
{
    char w1[MAX_LEN], w2[MAX_LEN];

    printf("Enter first word: ");
    scanf("%s", w1);
    printf("Enter second word: ");
    scanf("%s", w2);

    if(Equal(w1, w2)) {
        printf("Whoa!\n");
    }

    return EXIT_SUCCESS;
}

int Equal(char u[], char q[])
{
    int eq;
    int t;

    eq = 1;
    t = 0;
    while( u[t] != '\0' && q[t] != '\0' ) {
        if(u[t] != q[t]) {
            eq = 0;
        }
        t += 1;
    }
    if(u[t] != '\0' || q[t] != '\0') {
        eq = 0;
    }

    return eq;
}
