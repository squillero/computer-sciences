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

int main()
{
    int res;
    int min=1;
    int max=101;
    int b_correct=0;
    int n;

    while(b_correct==0)
    {
        n= (min+max)/2;
        printf("I guess it is %d. Is it correct? ", n);
        scanf("%d", &res);
        printf("\n");
        if(res==0)
            b_correct=1;
        else
        {
            if(res==1)
                max=n;
            else
                min=n;
        }
    }
    return 0;
}
