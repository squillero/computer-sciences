/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define INCREMENT 0.0005
#define INITIAL_VEL_X 100
#define INITIAL_VEL_H 100
#define GRAVITY -9.8

int main()
{
    double bulletH, bulletX;
    double velH, velX;
    double accH, accX;
    double time;

    time = 0.0;
    bulletH = 0.0000001;
    bulletX = 0.0;
    velX = INITIAL_VEL_X;
    velH = INITIAL_VEL_H;
    accX = 0;

    while (bulletH > 0)
    {
        int t = 0;
        printf("%8g:", time);
        while (t < bulletH / 10.0)
        {
            printf(" ");
            t = t + 1;
        }
        printf("*\n");

        //printf("Bullet (%4g): %5g %5g (v: %5g %5g / a: %5g %5g)\n", time,
        //       bulletX, bulletH, velX, velH, accX, accH);

        accX = -velX / 10000.0;
        accH = GRAVITY - velH / 10000.0;
        velX += accX; // ie. velX = velX + accX
        velH += accH;
        bulletX += velX;
        bulletH += velH;

        time += INCREMENT;
    }
    printf("Bullet (final): %5g %5g (v: %5g %5g / a: %5g %5g)\n",
           bulletX, bulletH, velX, velH, accX, accH);
    printf("Goodbye cruel world\n");

    return EXIT_SUCCESS;
}
