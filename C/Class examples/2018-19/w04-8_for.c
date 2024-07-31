// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

#define PROBLEM_SIZE 3

int main()
{
    /**
    int sum = 0;
    for(int t = 0; t < PROBLEM_SIZE; t = t + 1) {
        int num;
        do {
            printf("Enter number >0: ");
            scanf("%d", &num);
        } while(num < 0);
        sum = sum + num;
    }
    printf("The average is: %g\n", sum/PROBLEM_SIZE);
    **/

    int sum = 0;
    int t = 0;
    while (t < PROBLEM_SIZE)
    {
        int num;
        printf("Enter positive number: ");
        scanf("%d", &num);
        if (num >= 0)
        {
            sum = sum + num;
            t = t + 1;
        }
    }
    double avg = sum;
    avg = avg / PROBLEM_SIZE;
    printf("The average is: %g\n", avg);

    return 0;
}
