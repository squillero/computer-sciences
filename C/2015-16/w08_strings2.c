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
#include <ctype.h>

#define MAX_LEN 1024

int main()
{
    char str[MAX_LEN];

    printf("Enter a word: ");
    scanf("%s", str);

    int pal;
    int r, l;

    // count characters
    r=0;
    while(str[r]!='\0') {
        r += 1;
    }

    // check
    l = 0;
    r -= 1;
    pal = 1;
    while( r > l ) {
        if(toupper(str[l])!=toupper(str[r])) {
            pal = 0;
        }
        l += 1;
        r -= 1;
    }

    if(pal == 1) {
        printf("Whoa!\n");
    }

    return 0;
}
