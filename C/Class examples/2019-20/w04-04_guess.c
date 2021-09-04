/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // random number
    srand(time(NULL));
    int number = 1 + rand() % 100;
    int counter = 0;

    int game_ended = 0;
    while (game_ended == 0)
    {
        int guess;
        counter = counter + 1;

        if (counter > 10)
        {
            printf("You looser, ah ah ah\n");
            game_ended = 1;
        }
        else
        {
            printf("Guess: ");
            scanf("%d", &guess);

            if (guess == number)
            {
                if (counter == 1)
                {
                    printf("BANG! Are you Marco?\n");
                }
                else
                {
                    printf("Oh yeah! (in %d tries)\n", counter);
                    game_ended = 1;
                }
            }
            else
            {
                if (guess > number)
                {
                    printf("Too high\n");
                }
                else
                {
                    printf("Too low\n");
                }
            }
        }
    }

    return 0;
}
