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
   int mat[5][5]={{1,2,3,4,5} ,{6,7,8,9,10},{1,2,3,4,5},{6,7,8,9,10},{1,2,3,4,5}};
   int i,j;

   printf("please, introduce the matrix vals\n");

   for(i=0;i<5;i++){
     for(j=0;j<5;j++){
        /*scanf("%d",&mat[i][j]); */
        printf("%d ",mat[i][j]);
     }
     printf("\n");
   }
   printf("\n\n");

   for(j=0;j<5;j++){
     for(i=0;i<5;i++){
        printf("%d ",mat[i][j]);
     }
     printf("\n");
   }



       return 0;
}
