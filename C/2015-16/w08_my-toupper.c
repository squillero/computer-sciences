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

#define NUM_CHAR 4

/* PROTOS */
char ToUpper(char c);

int main()
{
    int c, d;
    int stop;

    int test = 'Ciao';

    stop = 0;
    c = getchar();
    while(stop == 0 && c != EOF) {
        d = toupper(c);
        putchar(d);
        c = getchar();
        if(c == '!') {
            stop = 1;
        }
    }

    return 0;
}

char ToUpper(char c)
{
    char r;

    if(c>='a' && c<='z') {
        r = c - 'a' + 'A';
    } else {
        r = c;
    }

    return r;
}
