// Author: Giovanni Squillero <giovanni.squillero@polito.it>
// Copyright © 2015 Giovanni Squillero / Politecnico di Torino
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

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
