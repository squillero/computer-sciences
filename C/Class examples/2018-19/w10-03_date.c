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
#include <string.h>

int main()
{
    printf("Insert a date (dd-mm-yyyy)\n");
    char date[256];
    scanf("%s", date);

    // parser!
    int d, m, y;
    if(sscanf(date, "%d-%d-%d", &d, &m, &y) == 3) {
        // oh yeah, it worked!
    } else {
        char month[3 +1];
        sscanf(date, "%d-%3s-%d", &d, month, &y);
        if(stricmp(month, "jan") == 0) {
            m = 1;
        } else {
            ;
        }
    }
    printf("Day: %d\n", d);
    printf("Month: %d\n", m);
    printf("Year: %d\n", y);
    return 0;
}
