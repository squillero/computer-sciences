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
#include <string.h>
#include <stdlib.h>

//int my_string_length(char s[])
int my_string_length(char *s)
{
    int t = 0;
    while(s[t] != '\0') {
        ++t;
    }
    return t;
}

int main()
{
    char string[] = "La la la la la la la la la la la la la";

    printf("Len: %d\n", my_string_length(string));
    printf("Len: %d\n", strlen(string));
    return 0;
}
