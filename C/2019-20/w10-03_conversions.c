/********************************************************************-*-c-*-*\
*               *  Code example for Computer Sciences 2019-20                *
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

int main()
{
    char w[64];
    scanf("%s", w);

    printf("\"%s\"\n", w);

    int v1 = atoi(w);
    printf("\"%s\" -> %d\n", w, v1);
    long v2 = atol(w);
    printf("\"%s\" -> %ld\n", w, v2);
    double v3 = atof(w);
    printf("\"%s\" -> %g\n", w, v3);

    // alt
    sscanf(w, "%d", &v1);
    printf("(with sscanf) \"%s\" -> %d\n", w, v1);
    sscanf(w, "%ld", &v2);
    printf("(with sscanf) \"%s\" -> %ld\n", w, v2);
    sscanf(w, "%lf", &v3);
    printf("(with sscanf) \"%s\" -> %g\n", w, v3);

    // sscanf sprintf
    char buffer[256];
    sprintf(buffer, "Hello, the answer is %d!", 42);
    printf("Buffer: \"%s\"\n", buffer);

    int a, b, c;
    int x = scanf("%d %d %d",&a, &b, &c);
    printf(">>> %d\n", x);

    return 0;
}
