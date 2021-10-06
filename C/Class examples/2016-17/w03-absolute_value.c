/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

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
