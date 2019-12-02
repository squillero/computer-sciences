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


// int -> 16 bit  -> 65,535  [ -32,768 +32,767 ]


#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long int dkgjh_t;
typedef int that_t;

int main()
{
    printf("%d\n", sizeof (dkgjh_t));
    return 0;
}
