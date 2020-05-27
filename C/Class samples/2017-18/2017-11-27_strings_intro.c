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

int main()
{
    char my_first_string[16] = {'C', 'i', 'a', 'o', '!', '\0', 'x'};
    char my_second_string[] = "Oh, mamma mia mamma mia";
    char *my_third_string = "mamma mia let me go";
    char stop[] = "";
    char stop2[3] = { '!', 0, '!' };

    printf("%s\n", my_first_string);
    printf("%s\n", my_second_string);
    printf("%s\n", my_third_string);
    return 0;
}
