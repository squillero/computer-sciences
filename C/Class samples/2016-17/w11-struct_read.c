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
    FILE *input;
    input = fopen("file1.gx", "r");

    int num;

    /**
    // OK, BUT UGLY
    fscanf(input, "%d", &num);
    while(!feof(input)) {
        printf("=> %d\n", num);
        fscanf(input, "%d", &num);
    }
    **/

    /**
    // NOT OK!
    while(!feof(input)) {
        fscanf(input, "%d", &num);
        printf("=> %d\n", num);
    }
    **/

    /**
    // NOT OK & UGLY
    do {
        fscanf(input, "%d", &num);
        printf("=> %d\n", num);

    } while(!feof(input));
    **/

    while(fscanf(input, "%d", &num) != EOF) {
        printf("=> %d\n", num);
    }

    fclose(input);
    return EXIT_SUCCESS;
}
