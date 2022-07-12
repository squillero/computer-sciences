// Copyright © 2015 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int mat[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {1, 2, 3, 4, 5}};
   int i, j;

   printf("please, introduce the matrix vals\n");

   for (i = 0; i < 5; i++)
   {
      for (j = 0; j < 5; j++)
      {
         /*scanf("%d",&mat[i][j]); */
         printf("%d ", mat[i][j]);
      }
      printf("\n");
   }
   printf("\n\n");

   for (j = 0; j < 5; j++)
   {
      for (i = 0; i < 5; i++)
      {
         printf("%d ", mat[i][j]);
      }
      printf("\n");
   }

   return 0;
}
