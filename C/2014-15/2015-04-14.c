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

#define SIZE 10

int main()
{
    int array[SIZE];
    int t;
    int maxNum;

    for(t=0; t<SIZE; ++t) {
        printf("Element %d: ", t);
        scanf("%d", &array[t]);
    }

    maxNum = array[0];
    for(t=1; t<SIZE; t++) { // TYPO
        if(array[t] > maxNum) {
            maxNum = array[t];
        }
    }
    printf("Hey, the max is %d\n", maxNum);

    int oddFlag = 0;
    for(t=0; t<SIZE; t++) {
        if(array[t] % 2 == 1)
            oddFlag = 1;
    }
    if(oddFlag == 1) {
        printf("At least on odd num!\n");
    } else {
        printf("Yeuch, no odd nums\n");
    }

    return EXIT_SUCCESS;
}
