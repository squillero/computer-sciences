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

int main()
{
    FILE file_information;
    FILE *file_info_pointer;

    // fprintf(file_info_pointer, "Let's crash everything\n");

    printf("Sizeof FILE: %d\n", sizeof (FILE));
    printf("Sizeof FILE *: %d\n", sizeof (FILE *));

    fprintf(stdout, "Hello STDOUT!\n");
    fprintf(stderr, "Hello STDERR!\n");

    int num;
    fscanf(stdin, "%d", &num);
    printf("==> %d\n", num);

    return 0;
}
