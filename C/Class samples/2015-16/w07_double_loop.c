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

#define NUM 1000
#define MAX 1000

int main()
{
    int v[NUM];
    int t, u;

    srand(time(NULL));
    for(t=0; t<NUM; t+=1) {
        v[t] = rand() % MAX;
    }

    int array_contains_dups;
    array_contains_dups = 0;
    for(t=0; t<NUM; t+=1) {
        for(u=t+1; u<NUM; u+=1) {
            if(v[t] == v[u]) {
                array_contains_dups = 1;
            }
        }
    }
    // better?

    if(array_contains_dups==1) {
        printf("Found dups!\n");
    }
    return 0;
}
