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

#define MAX_LINE    4096

// PROTOS
void encode(char *line_out, char *line_in);

int main()
{
    // while(???) {
    //   read a line
    //   encode the line
    //   print the encoded versione of the line
    // }

    char line_in[MAX_LINE];
    char line_out[MAX_LINE];

    while(gets(line_in) != NULL) {
        encode(line_out, line_in);
        printf("%s\n", line_out);
    }

    return 0;
}

void encode(char *s1, char *s2)
{
    int len = strlen(s2);
    for(int t = 0; t < len; ++t) {
        s1[t] = s2[len - t - 1];
    }
    s1[len] = '\0';
}
