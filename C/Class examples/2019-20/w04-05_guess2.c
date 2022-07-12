// Copyright © 2019-2020 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int lower_bound = 1;
    int upper_bound = 100;

    srand(time(NULL));
    int game_ended = 0;
    while (game_ended == 0)
    {
        // int guess = (lower_bound + upper_bound) / 2;
        int guess = lower_bound + rand() % (upper_bound - lower_bound + 1);

        printf("My guess is %d\n", guess);
        printf("... was it\n0- correct\n1- too low\n2- too high\n");
        int u;
        scanf("%d", &u);
        if (u == 0)
        {
            printf("Oh yeah!\n");
            game_ended = 1;
        }
        else
        {
            if (u == 1)
            {
                lower_bound = guess + 1;
            }
            else
            {
                upper_bound = guess - 1;
            }
        }
    }

    return 0;
}
