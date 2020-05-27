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

int main()
{
    printf("The size of a \"char\" on my system is: %d\n", sizeof (char));
    printf("The size of a \"short int\" on my system is: %d\n", sizeof (short int));
    printf("The size of a \"int\" on my system is: %d\n", sizeof (int));
    printf("The size of a \"long int\" on my system is: %d\n", sizeof (long int));
    printf("The size of a \"long long int\" on my system is: %d\n", sizeof (long long int));

    printf("The size of a \"float\" on my system is: %d\n", sizeof (float));
    printf("The size of a \"double\" on my system is: %d\n", sizeof (double));
    printf("The size of a \"long double\" on my system is: %d\n", sizeof (long double));

    return 0;
}
