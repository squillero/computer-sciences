/********************************************************************-*-c-*-*\
*               *  Code examples for Computer Sciences 2017-18               *
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
#include <math.h>

/* prototypes */
int crazy_sum(int a, int b);
void bar(void);

int main(int argc, char *argv[])
{
    bar();      // int bar(boid)
    int c;
    c = crazy_sum(10, 11);
    printf("c: %d\n", c);
    c = crazy_sum(c, c / 10);
    printf("c: %d\n", c);

    return EXIT_SUCCESS;
}


int crazy_sum(int a, int b)
{
    int c;
    c= a * b + b;
    return c;
}

void bar(void)
{
    printf("D'ho\n");
    return; // optional
    printf("exam_result -= 5\n");
}


