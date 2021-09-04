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

#define ever (;;)
#define true (1==1)

int main()
{
    int sum = 0;
    int counter = 0;
    int num;

    for ever {      // don't do that!
        printf(":");
        scanf("%d", &num);
        if(num < 0)
            break;
        sum = sum + num;
        counter = counter + 1;
    }

    printf("Avg is %g\n", 1.0*sum/counter);

    return 0;
}
