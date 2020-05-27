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

#define INPUT "file_in.gx"
#define OUTPUT "file_out.gx"


int main()
{
    fprintf(stdout, "Hello files!\n");

    FILE *fout = fopen(OUTPUT, "w");
    if(fout == NULL) {
        fprintf(stderr, "Yeuch: Can't create file \"%s\"\n", OUTPUT);
        exit(EXIT_FAILURE);
    }
    fprintf(fout, "Hello!\n");
    fprintf(fout, "This is my ");
    fprintf(fout, "first file!\n");
    fclose(fout);

    FILE *fin = fopen(INPUT, "r");
    if(fin == NULL) {
        fprintf(stderr, "Yeuch: Can't open file \"%s\"\n", INPUT);
        exit(EXIT_FAILURE);
    }
    int num;
    if(fscanf(fin, "%d", &num) == 1) {
        printf("The answer is %d\n", num);
    }
    fclose(fin);

    return EXIT_SUCCESS;
}
