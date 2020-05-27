/*****************************************************-*-c-*-*\
*  Code sample for Computer Sciences 2015-16                  *
*  (!) Guoping Xiao                                           *
*                                                             *
*  Copying and distribution of this file, with or without     *
*  modification, are permitted in any medium without royalty  *
*  provided this notice is preserved.                         *
*  This file is offered as-is, without any warranty.          *
*                                                             *
*  See: http://staff.polito.it/giovanni.squillero/dida.php    *
\*************************************************************/

#include <stdio.h>

int main()
{
  int array[100], maximum, size, c, location = 1;

  printf("Enter the number of elements in array\n");
  scanf("%d", &size);

  printf("Enter %d integers\n", size);

  for (c = 0; c < size; c++)
    scanf("%d", &array[c]);

  maximum = array[0];

  for (c = 1; c < size; c++)
  {
    if (array[c] > maximum)
    {
       maximum  = array[c];
       location = c+1;
    }

  }

  printf("Maximum element is present at location %d and it's value is %d.\n", location, maximum);
  return 0;
}
