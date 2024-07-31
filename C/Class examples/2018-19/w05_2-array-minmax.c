// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
  int v1[N];

  for (int i = 0; i < N; i++)
  {
    printf("please, enter %d value:\n", i);
    scanf("%d", &v1[i]);
  }
  int min = v1[0];
  int max = v1[0];

  for (int i = 1; i < N; i++)
  {
    if (v1[i] > max)
    {
      max = v1[i];
    }
    if (v1[i] < min)
    {
      min = v1[i];
    }
  }

  printf("max: %d\nmin: %d\n", max, min);
  return 0;
}
