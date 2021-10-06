/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define NUM 1000
#define MAX_INT 100

int main()
{
    int array[NUM];
    printf("%d random numbers 0-%d:", NUM, MAX_INT);

    // magic line to initialize random generator
    // you may need to #include <stdlib.h>
    srand(time(NULL));

    for (int t = 0; t < NUM; ++t)
    {
        int r = rand() % (MAX_INT + 1);
        printf(" %d", r);
        array[t] = r;
    }
    printf("\n");

    /***
    // find the max
    int max = array[0];
    for(int t = 1; t < NUM; ++t) {
        if(array[t] > max) {
            max = array[t];
        }
    }
    printf("The max is %d\n", max);
    **/

    /***
    // find the position of the max
    int max_pos = 0;
    for(int t = 1; t < NUM; ++t) {
        if(array[t] > array[max_pos]) {
            max_pos = t;
        }
    }
    printf("The max is %d at position %d\n",
           array[max_pos], max_pos + 1);
    ***/

    // Find max, multiple pos
    // first. find max
    int max = array[0];
    for (int t = 1; t < NUM; ++t)
    {
        if (array[t] > max)
        {
            max = array[t];
        }
    }
    printf("The max is %d -- at position", max);
    // second. print pos
    for (int t = 0; t < NUM; ++t)
    {
        if (array[t] == max)
        {
            printf(" %d", t);
        }
    }
    printf("\n");

    return 0;
}
