// Copyright © 2015 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

enum
{
    FIRST_QUADRANT,
    SECOND_QUADRANT,
    THIRD_QUADRANT,
    FOURTH_QUADRANT
};

typedef struct _point_t
{
    double x;
    double y;
} point_t;

double DistanceFromOrigin(point_t p);
double Distance(point_t p1, point_t p2);
int Quadrant(point_t p);
int Intersect(point_t p1, point_t p2);

int main()
{
    point_t p1, p2;

    printf("Hello world!\n");
    return EXIT_SUCCESS;
}

double DistanceFromOrigin(point_t p)
{
    double dist;
    dist = sqrt(p.x * p.x + p.y * p.y);
    return dist;
}

double Distance(point_t p1, point_t p2)
{
    point_t p3;

    p3.x = p1.x - p2.x;
    p3.y = p1.y - p2.y;
    return DistanceFromOrigin(p3);
}

int Quadrant(point_t p)
{
    if (p.x >= 0.0 && p.y >= 0.0)
    {
        return FIRST_QUADRANT;
    }
    else if (p.x < 0.0 && p.y >= 0.0)
    {
        return SECOND_QUADRANT;
    }
    else if (p.x < 0.0 && p.y < 0.0)
    {
        return THIRD_QUADRANT;
    }
    else
    {
        return FOURTH_QUADRANT;
    }
}

int Intersect(point_t p1, point_t p2)
{
    return Quadrant(p1) == Quadrant(p2);
}
