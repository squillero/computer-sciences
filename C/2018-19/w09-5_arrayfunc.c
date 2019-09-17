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

// proto
void swap(int a, int b);
int week_total(int d[]);

int main()
{
    int x = 1, y = 2;

    printf("x: %d - y: %d\n", x, y);
    swap(x, y);
    printf("x: %d - y: %d\n", x, y);

    int days[7] = { 3, 2, 9, 5, 7, 40, 0 };
    printf("Week total: %d\n", week_total(days));
    printf("Week total: %d\n", week_total(days));

    return 0;
}

void swap(int a, int b) // not working :-(
{
    int c = a;
    a = b;
    b = c;
}

int week_total(int d[])
{
    int tot = 0;
    for(int t = 0; t < 7; ++t) {
        tot += d[t];
        d[t] = 0;   // change the array!
    }
    return tot;
}


