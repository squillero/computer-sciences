// Code examples for Computer Sciences 2015-16
// Copying and distribution of this file, with or without modification, are
// permitted in any medium without royalty provided this notice is preserved.
// This file is offered as-is, without any warranty.
// See: http://staff.polito.it/giovanni.squillero/dida.php

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, D;
    printf("please, enter the first numbers: \n");
    scanf("%d %*d",&A );
//    printf("please, enter the second number: \n");
//    scanf("%d",&B);

    if(A>B)
    {
        D= A - B;
    }
    else
    {
        D= B - A;
    }
    printf("A: %-10d\n",A);
    printf("B: %+10d\n",B);
    printf("result: %d\n",D);


    return 0;
}
