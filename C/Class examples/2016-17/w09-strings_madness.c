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

#define MAX_LENGTH 256

int main()
{
    char string[] = "         23       janua    ";
    int day, month;

    char w1[MAX_LENGTH], w2[MAX_LENGTH];
    sscanf(string, "%s %s", w1, w2);
    printf("%s %s\n", w1, w2);
    sscanf(w1, "%d", &day);
    if(isdigit(w2[0])) {
        sscanf(w2, "%d", &month);
    } else {
        switch(tolower(w2[0])) {
        case 'j':
            if(w2[3] == 'u') {
                month = 1;
            } else if(w2[2] == 'e') {
                month = 6;
            } else {
                month = 7;
            }
            break;
        case 'f':
            month = 2;
            break;
        case 'm':
            if(w2[2] == 'r') {
                month = 3;
            } else {
                month = 5;
            }
            break;
        case 'a':
            month = 4;
            break;
        }
    }
    printf(">>>> %d %d\n", day, month);
    return 0;
}
