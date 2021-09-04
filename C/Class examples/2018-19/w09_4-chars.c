/********************************************************************-*-c-*-*\
*               *  Code example for Computer Sciences 2018-19                *
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

#define MAX_STR 4096

// proto
void print_chars(char string[]);
int count_tokens(char string[]);

int main()
{
    char str[MAX_STR];

    gets(str);
    print_chars(str);
    printf("Found %d tokens\n", count_tokens(str));

    return 0;
}

int count_tokens(char string[])
{
    int tokens = 0;
    for(int p = 0; string[p] != '\0'; ++p) {
        if(!isspace(string[p]) &&
           (string[p+1] == '\0' || isspace(string[p+1]))) {
            ++tokens;
        }
    }
    return tokens;
}

void print_chars(char string[])
{
    for(int p = 0; string[p] != '\0'; ++p) {
        printf("%d (%c)\n", string[p], string[p]);
    }
}
