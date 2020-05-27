/********************************************************************-*-c-*-*\
*               *  Code examples for Computer Sciences 2017-18               *
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

// Define STRUCT & declare VARIABLE
struct FOO {
    int a, b, c;
} foo;

// Define UNNAMED STRUCT & declare VARIABLE
struct {
    int x, y;
} bar;

// Define STRUCT and TYPEDEF a new type
typedef struct _POINT {
    double x, y;
} POINT;

int main()
{
    POINT p1, p2;

    foo.a = 23;
    bar.x = 0;
    return 0;
}

void func(void)
{
    // interesting stuff
    struct {
        int zap, zop;
    } tmp;
    // use tmp

}
