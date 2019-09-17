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
#define STR_MAX_LEN     64

// PROTOS!
int letter_not_present(char *string, int c);

int main()
{
    char s1[STR_MAX_LEN +1], s3[STR_MAX_LEN +1], s2[STR_MAX_LEN +1];

    scanf("%s", s1);
    scanf("%s", s2);

    int t, u;

    u = 0;
    for(t=0; s1[t]!='\0'; t+=1) {
//        if(letter_not_present(s2, s1[t])) {
        if(strchr(s2, s1[t]) == NULL) {
            s3[u] = s1[t];
            u += 1;
        }
    }
    s3[u] = '\0';
    printf("> %s\n", s3);

    return 0;
}

int letter_not_present(char *string, int c)
{
    int t;
    int flag;

    flag = 1;
    for(t=0; string[t]!='\0'; t+=1) {
        if(string[t]==c) {
            flag = 0;
        }
    }
    return flag;
}

