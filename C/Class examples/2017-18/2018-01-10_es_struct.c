// Copyright © 2018 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUM_POINTS 10

typedef struct _POINT
{
    double x, y;
    int foo, bar, baz; // new fields
} POINT;

// PROTOS
double dist(POINT p);

double dist(POINT p)
{
    return sqrt(p.x * p.x + p.y * p.y);
}

int main()
{
    POINT point[NUM_POINTS];
    POINT point2[NUM_POINTS];
    int t, u, v;
    int min;
    POINT tmp;
    int array_dim;
    int array2_dim;

    for (t = 0; t < NUM_POINTS; ++t)
    {
        point[t].x = (rand() % 2000 - 1000) / 100.0;
        point[t].y = (rand() % 2000 - 1000) / 100.0;
    }

    for (t = 0; t < NUM_POINTS; ++t)
    {
        printf("P%d = (%g, %g)\n", t, point[t].x, point[t].y);
    }

    array_dim = NUM_POINTS;
    array2_dim = 0;
    for (t = 0; t < NUM_POINTS; ++t)
    {
        // scan array
        min = 0; // whoa!
        for (u = 0; u < array_dim; ++u)
        {
            if (dist(point[u]) > dist(point[min]))
                min = u;
        }
        /**
        // save min in 2nd array
        point2[array2_dim] = point[min];
        array2_dim += 1;
        **/
        // delete point @ position min
        tmp = point[min];
        point[min] = point[array_dim - 1];
        point[array_dim - 1] = tmp;
        --array_dim;
    }

    /**
    printf("\nSORTED ARRAY\n");
    for(t = 0; t < NUM_POINTS; ++t) {
        printf("P%d = (%g, %g) [dist=%g]\n", t, point2[t].x, point2[t].y, dist(point2[t]));
    }
    **/

    printf("\nFIRST ARRAY AFTER SORTING\n");
    for (t = 0; t < NUM_POINTS; ++t)
    {
        printf("P%d = (%g, %g) [dist=%g]\n", t, point[t].x, point[t].y, dist(point[t]));
    }

    return 0;
}
