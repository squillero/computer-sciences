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

#define ARRAY_SIZE  5
#define TRUE    1
#define FALSE   0

int main()
{
    int array1[ARRAY_SIZE] = { 1, 1, 1, 4, 5 };
    int array2[ARRAY_SIZE] = { 5, 1, 1, 4, 1 };
    int canceled[ARRAY_SIZE] = { 0 };

    for(int t = 0; t < ARRAY_SIZE; ++t) {
        int found = 0;
        for(int u = 0; found==0 && u < ARRAY_SIZE; ++u) {
            if(array1[t] == array2[u] && !canceled[u]) {
                canceled[u] = 1;
                found = 1;
            }
        }
    }

    printf("\n");
    return 0;
}
