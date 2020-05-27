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

#define PROBLEM_SIZE 3

int main()
{
    /**
    int sum = 0;
    for(int t = 0; t < PROBLEM_SIZE; t = t + 1) {
        int num;
        do {
            printf("Enter number >0: ");
            scanf("%d", &num);
        } while(num < 0);
        sum = sum + num;
    }
    printf("The average is: %g\n", sum/PROBLEM_SIZE);
    **/

    int sum = 0;
    int t = 0;
    while(t < PROBLEM_SIZE) {
        int num;
        printf("Enter positive number: ");
        scanf("%d", &num);
        if(num >= 0) {
            sum = sum + num;
            t = t + 1;
        }
    }
    double avg = sum;
    avg = avg / PROBLEM_SIZE;
    printf("The average is: %g\n", avg);

    return 0;
}
