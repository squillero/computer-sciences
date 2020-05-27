/********************************************************************-*-c-*-*\
*               *  Code example for Computer Sciences 2018-19                *
*    #####      *  (!) Giovanni Squillero <giovanni.squillero@polito.it>     *
*   ######      *                                                            *
*   ###   \     *  Copying and distribution of this file, with or without    *
*    ##G  c\    *  modification, are permitted in any medium without royalty *
*    #     _\   *  provided this notice is preserved.                        *
*    |   _/     *  This file is offered as-is, without any warranty.         *
*    |  _/      *                                                            *
*               *  See: http://staff.polito.it/giovanni.squillero/dida.php   *
\****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX_POINTS  10

struct _POINT {
    double x;
    double y;
};
typedef _POINT POINT;

// proto
void print_points(const POINT *pts);
void sort_points(POINT *pts);
int ptcmp(POINT p1, POINT p2);

int main()
{
    POINT points[MAX_POINTS];

    for(int t = 0; t < MAX_POINTS; ++t) {
        points[t].x = (rand() % 10000) / 10000.0 - 0.5;
        points[t].y = (rand() % 10000) / 10000.0 - 0.5;
    }
    print_points(points);
    sort_points(points);
    printf("--------\n");
    print_points(points);

    return 0;
}

void print_points(const POINT *pts)
{
    for(int t = 0; t < MAX_POINTS; ++t) {
        printf("(%g, %g)\n", pts[t].x, pts[t].y);
    }
}

int ptcmp(POINT p1, POINT p2)
{
    double d1 = p1.x*p1.x + p1.y*p1.y;
    double d2 = p2.x*p2.x + p2.y*p2.y;
    if(d1 > d2) {
        return 1;
    } else if(d1 < d2) {
        return -1;
    } else {
        return 0;
    }
}

void sort_points(POINT *pts)
{
    for(int t1=0; t1 < MAX_POINTS; ++t1) {
        int min = t1;
        for(int t2=t1; t2 < MAX_POINTS; ++t2) {
            if(ptcmp(pts[t2], pts[min]) < 0) {
                min = t2;
            }
        }
        POINT tmp = pts[t1];
        pts[t1] = pts[min];
        pts[min] = tmp;
    }
}

