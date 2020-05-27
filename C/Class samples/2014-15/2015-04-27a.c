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
#include <math.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int cs[5] = { 31, 27, 5, 2, 18 };
    int t;
    char w[64];

    for(t=0; t<5; ++t) {
        if(cs[t]<18) {
            sprintf(w, "ins");
        } else if(cs[t]>30) {
            sprintf(w, "30 cum laude");
        } else {
            sprintf(w, "%d", cs[t]);
        }

        printf("Student %d: %s\n", t+1, w);
    }

    return EXIT_SUCCESS;
}
