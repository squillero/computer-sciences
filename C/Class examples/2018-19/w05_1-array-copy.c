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
#define N 10

int main()
{
    int v1[N], v2[N];

    for(int i=0; i<N;i++){
        printf("please, enter the integer value %d: \n",i+1);
        scanf("%d",&v1[i]);
    }

    for(int i=0;i<N;i++){
        printf("v1[%d] = %d\n",i,v1[i]);
    }

    for(int i=0;i<N;i++){
        v2[N-1-i] = v1[i];
    }

    for(int i=0;i<N;i++){
        printf("v2[%d] = %d\n",i,v2[i]);
    }


    return 0;
}
