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
    char str1[20]="Olimpico";
    char str2[20]="Oio";
    char str3[20];
    int i,j, z, f;
    int l1, l2;

    l1=strlen(str1);
    l2=strlen(str2);
    z=0;
    for(i=0;i<l1;i++){
        f=0;
        for(j=0;j<l2;j++){
           if (str1[i] == str2 [j]){
             f=1;
           }
        }
        if(f==0){
            str3[z] = str1[i];
            z++;
        }

    }
    str3[z]='\0';

    printf("1st str= %s\n",str1);
    printf("2nd str= %s\n",str2);
    printf("3rd str= %s\n",str3);



    return 0;
}
