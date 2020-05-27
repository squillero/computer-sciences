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

#define FILENAME "file3.gx"
#define MAX_LINE 256

int main()
{
    FILE *input;

    input = fopen(FILENAME, "r");
    if(input == NULL) {
        fprintf(stderr, "Yeuch, can't read file %s...\n", FILENAME);
        exit(EXIT_FAILURE);
    }

    char buf[MAX_LINE];
    while( fgets(buf, MAX_LINE, input) != NULL ) {
        printf("%s", buf);
    }

    fclose(input);

    return EXIT_SUCCESS;
}
