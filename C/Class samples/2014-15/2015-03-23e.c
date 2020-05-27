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
    int n, n_pre, cnt;
    int verse = 0, stop;

    /* first number */
    scanf("%d",&n);
    n_pre = n;
    cnt = 0;
    stop = 0;

    while( stop == 0)
    {

        scanf("%d",&n);
        cnt++;
        if(verse == 0)
        {
            if (n > n_pre)
            {
                verse = 1;
            }
            else if (n< n_pre)
            {
                verse = -1;
            }
        }
        else if (verse > 1)
        {
            if (n < n_pre)
            {
                stop = 1;
            }
        }
        else
        {
            if (n > n_pre)
            {
                stop = 1;
            }
        }
    }



    return 0;
}
