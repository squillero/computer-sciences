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

#define BUFFER_LEN 4

int main()
{
    char str[BUFFER_LEN];

    //strcpy(str, "Hey");     // str = "Hey"
    strcat(str, " ");       // str += " "
    strcat(str, "you");
    strcat(str, ", ");
    strcat(str, "out");

    printf("%s\n", str);
    return 0;
}
