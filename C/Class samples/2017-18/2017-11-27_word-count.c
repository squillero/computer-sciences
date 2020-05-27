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

#define MAX_LINE 512

int main()
{
    char line[MAX_LINE];

    gets(line);

    int state; // 1 inside word, 0 between word

    int num_words = 0;
    state = 1;
    if(isalnum(line[0])) {
        ++num_words;
    }
    for(int t = 0; line[t] != '\0'; ++t) {
        if(state == 0) {
            // between words
            if(!isspace(line[t])) {
               state = 1;
               ++num_words;
            }
        } else if(state == 1) {
            // inside a word
            if(!isalnum(line[t])) {
               state = 0;
            }
        }
    }
    printf("Number of words: %d\n", num_words);
    return 0;
}
