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
#include <string.h>

int main()
{
    int i, j, len;
    char s[80], dest[80];
    while(gets(s)!=NULL)
    {
        len=strlen(s);
        j=0;
        for(i=len-1; i>=0; i--)
        {
            dest[j]=s[i];
            j++;
        }
        dest[j]='\0';

        puts(dest);
    }

    return 0;
}
