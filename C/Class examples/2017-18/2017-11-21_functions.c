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

// protos
void square(int size);
void draw_line(int n, char c);

int main()
{
    square(20);
}

void square(int size)
{
    for(int t = 0; t < size; ++t) {
        draw_line(t + 1, '!');
        draw_line(size - t, '-');
        printf("\n");
    }
}

void draw_line(int n, char c)
{
    for(int t = 0; t < n; ++t) {
        printf("%c", c);
    }
}
