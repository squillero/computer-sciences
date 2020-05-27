// Code examples for Computer Sciences 2015-16
// Copying and distribution of this file, with or without modification, are
// permitted in any medium without royalty provided this notice is preserved.
// This file is offered as-is, without any warranty.
// See: http://staff.polito.it/giovanni.squillero/dida.php

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;
    printf("please, enter the value: \n");
    scanf("%d",&A );

    if(A>=0)
    {
        if(A==0)
        {
            printf("sea\n");
        }
        else
        {
            if(A<200)
            {
                printf("plain\n");
            }
            else
            {
                if(A<=600)
                {
                    printf("hill\n");
                }
                else
                {
                    printf("mountain\n");
                }
            }
        }
    }
    else
    {
        printf("wrong value!!\n");
    }

    return 0;
}
