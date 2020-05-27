/********************************************************************-*-c-*-*\
*               *  Code examples for Computer Sciences 2015-16               *
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

typedef struct _TestStruct {
    long double a;
    int b;
    char c;
} TestStruct;

typedef union _TestUnion {
    long double a;
    int b;
    char c;
} TestUnion;

int main(int argc, char *argv[])
{
    printf("%ld\n", sizeof (long double));
    printf("%ld\n", sizeof (int));
    printf("1\n");
    printf("%ld\n", sizeof (TestStruct));
    printf("%ld\n", sizeof (TestUnion));
    
    TestUnion tu;
    TestStruct ts;
    
    
	return 0;
}
