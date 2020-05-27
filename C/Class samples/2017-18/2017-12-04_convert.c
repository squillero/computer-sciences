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

#define MAX_STR_LEN 512

int main()
{
    printf("Convert to/from string!\n");

    int foo = -4242;
    char str[MAX_STR_LEN];

    sprintf(str, "%d", foo);
    printf("Decimal: %s\n", str);
    sprintf(str, "%u", foo);
    printf("Unsigned decimal: %s\n", str);
    sprintf(str, "%x", foo);
    printf("(Unsigned) Hexadecimal: %s\n", str);


    float bar;

    strcpy(str, "4.2");
    sscanf(str, "%f", &bar);
    printf("bar: %g\n", bar);

    sscanf("4.1200000000", "%f", &bar);
    printf("bar: %g\n", bar);


    char time[] = "23:58:12";
    int h, m, s;
    int magic = sscanf(time, "%2d:%2d:%2d", &h, &m, &s);
    // magic is the number of correctly assigned variables
    printf("Magic is %d\n", magic);
    printf("%02d#%02d#%02d", h, m, s);



    return 0;
}
