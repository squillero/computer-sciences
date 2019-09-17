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

int main()
{
    char str[] = "1970";
    int val;

    // method 1
    val = 0;
    for(int t = 0; str[t] != '\0'; ++t) {
        val = val * 10 + str[t] - '0';
    }
    printf("Method 1: %d\n", val);

    // method 2
    val = atoi(str);
    printf("Method 2: %d\n", val);

    // method 3
    sscanf(str, "%d", &val);
    printf("Method 3: %d\n", val);

    // jolly: sprintf
    char tmp[256];
    sprintf(tmp, "Hey pi is %.2f", 3.1495);
    printf(">>>>%s<<<<<\n", tmp);


    return 0;
}
