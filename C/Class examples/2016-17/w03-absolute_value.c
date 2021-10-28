// Copyright © 2016-2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, D;
    printf("please, enter the first numbers: \n");
    scanf("%d %*d", &A);
    //    printf("please, enter the second number: \n");
    //    scanf("%d",&B);

    if (A > B)
    {
        D = A - B;
    }
    else
    {
        D = B - A;
    }
    printf("A: %-10d\n", A);
    printf("B: %+10d\n", B);
    printf("result: %d\n", D);

    return 0;
}
