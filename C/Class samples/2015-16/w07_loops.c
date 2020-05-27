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

#define NUM 10

/* PROTOS */
void PrintR(int rows, int cols);
void PrintT(int dim);

int main()
{
    int v;

    for(v=1; v<NUM; v+=1) {
        PrintT(v);
        printf("\n");
    }
    return 0;
}

void PrintR(int rows, int cols)
{
    int t, u;
    for(u=0; u<rows; u+=1) {
        for(t=0; t<cols; t+=1) {
            printf("#");
        }
        printf("\n");
    }
    return;
}

void PrintT(int dim)
{
    int t, u;
    for(u=0; u<dim; u+=1) {
        t = 0;
        while(t < dim-u-1) {
            printf(" ");
            t += 1;
        }
        while(t < dim) {
            printf("#");
            t += 1;
        }
        printf("\n");
    }
    return;
}
