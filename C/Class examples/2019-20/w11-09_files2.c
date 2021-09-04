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
#include <stdlib.h>

int main()
{
    FILE *file = fopen("out.txt", "w");
    if(file == NULL) {
        printf("Yeuch, can't open 'out.txt'\n");
        exit(1);
    }
    for(int t = 0; t < 999; ++t) {
        fprintf(file, "Hello world!\n");
    }
    fclose(file);

    int number;
    FILE *read = fopen("input.txt", "r");
    if(read == NULL) {
        printf("Yeuch, can't open 'input.txt'\n");
        exit(1);
    }
    fscanf(read, "%d", &number);
    printf("> %d\n", number);
    fclose(read);

    return 0;
}
