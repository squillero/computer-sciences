/********************************************************************-*-c-*-*\
*               *  Code examples for Computer Sciences 2016-17               *
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

/*
 * prog 12:00 13:23 -> 1:23
 * prog 12,00 13:23 -> error
 */

struct _TIME {
    int h;
    int m;
};
typedef struct _TIME TIME;

TIME parsetime(char *s);

int main(int argc, char *argv[])
{
    printf("DiffTime-o-matic\n");

    if(argc != 3) {
        fprintf(stderr, "Yeuch: two args required\n");
        exit(EXIT_FAILURE);
    }

    TIME t1 = parsetime(argv[1]);
    TIME t2 = parsetime(argv[2]);

    int diff = t2.h * 60 + t2.m - t1.h * 60 - t1.m;
    int h = diff / 60;
    diff -= h * 60;
    int m = diff % 60;

    printf("diff: %0d:%02d\n", h, m);
    return EXIT_SUCCESS;
}

TIME parsetime(char *s)
{
    TIME t;
    int result;
    result = sscanf(s, "%2d:%2d", &t.h, &t.m);
    if(result != 2 || t.h < 0 || t.h > 24 || t.m < 0 || t.m > 60) {
        fprintf(stderr, "Yeuch: \"%s\" is not a valid time.\n", s);
        exit(EXIT_FAILURE);
    }
    return t;
}
