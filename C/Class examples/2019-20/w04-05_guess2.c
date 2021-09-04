/********************************************************************-*-c-*-*\
*               *  Code example for Computer Sciences 2019-20                *
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
#include <time.h>

int main()
{
    int lower_bound = 1;
    int upper_bound = 100;

    srand(time(NULL));
    int game_ended = 0;
    while(game_ended == 0) {
        // int guess = (lower_bound + upper_bound) / 2;
        int guess = lower_bound + rand() % (upper_bound - lower_bound + 1);

        printf("My guess is %d\n", guess);
        printf("... was it\n0- correct\n1- too low\n2- too high\n");
        int u;
        scanf("%d", &u);
        if(u == 0) {
            printf("Oh yeah!\n");
            game_ended = 1;
        } else {
            if(u == 1) {
                lower_bound = guess + 1;
            } else {
                upper_bound = guess - 1;
            }
        }
    }

    return 0;
}
