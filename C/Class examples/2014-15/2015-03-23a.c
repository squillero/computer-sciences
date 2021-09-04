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
#include <time.h>

int main()
{
    int stillsearching=1;
    int target;
    int guess ;

    srand(time(NULL));
    target = rand() % 100 + 1;
    printf("[shh...] target is %d\n", target);

    while(stillsearching == 1){
        printf("Choose anumber from 1 to 100\n");
        scanf("%d", & guess);

        if(target==guess){
            stillsearching=0;
            printf("tada\n");
        } else if(target>guess){
            printf("Too low, try again !\n");
        } else {
            printf("Too high, try again!\n");
        }
    }

    return 0;
}
