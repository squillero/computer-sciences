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

#define FILENAME "terribe_feof.gx"

int main()
{
    printf("The EOF problem!\n");

    FILE *f = fopen(FILENAME, "r");
    if(f == NULL) {
        fprintf(stderr, "Yeuch!\n");
        exit(EXIT_FAILURE);
    }

    // don't use feof before scanf!
    while(!feof(f)) {
        int n;
        fscanf(f, "%d", &n);
        if(feof(f)) {
            continue;   // terrible patch!
        }
        printf(">>> %d <<<\n", n);
    }
    fclose(f);

    return EXIT_SUCCESS;
}
