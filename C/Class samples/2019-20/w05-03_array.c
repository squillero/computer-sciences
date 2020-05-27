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

#define ARRAY_SIZE 10000
#define RAND_MAX 100
#define THE_NUMBER 42

int main()
{
    int array[ARRAY_SIZE];

    srand(time(NULL));
    for(int t = 0; t < ARRAY_SIZE; ++t) {
        array[t] = rand() % RAND_MAX;
    }

    // check for the number
    int counter = 0;
    for(int t = 0; t < ARRAY_SIZE; ++t) {
        if(array[t] == THE_NUMBER) {
            ++counter;
        }
    }
    if(counter > 0) {
        printf("Oh yeah! I found it...\n");
    }

    return 0;
}
