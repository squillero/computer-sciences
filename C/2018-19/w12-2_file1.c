/********************************************************************-*-c-*-*\
*               *  Code example for Computer Sciences 2018-19                *
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

#define MAX_LINE 1024

int main()
{
    fprintf(stdout, "My first program using files!!!!\n");

    // token by token
    printf("Read token by token\n");
    FILE *fin = fopen("x.dat", "r");
    if(fin == NULL) {
        fprintf(stderr, "Oh dear, we had a problem...\n");
        exit(EXIT_FAILURE);
    }
    int t;
    while(fscanf(fin, "%d", &t) != EOF) { // READ N' CHECK
        printf("Got %d!\n", t);
    }
    fclose(fin);

    // line by line
    printf("Read line by line\n");
    fin = fopen("x.dat", "r");
    if(fin == NULL) {
        fprintf(stderr, "Oh dear, we had a problem...\n");
        exit(EXIT_FAILURE);
    }
    char line[MAX_LINE];
    while(fgets(line, MAX_LINE, fin) != NULL) {
        line[strlen(line)-1] = '\0'; // chomp!
        printf("Got \"%s\"\n", line);
    }
    fclose(fin);

    // and now output
    FILE *fout = fopen("y.dat", "w");
    if(fout == NULL) {
        fprintf(stderr, "Oh dear, we had a problem...\n");
        exit(EXIT_FAILURE);
    }
    fprintf(fout, "Something...\n");
    fprintf(fout, "... something else.\n");
    fclose(fout);

    // finally, appending
    fout = fopen("y.dat", "a");
    if(fout == NULL) {
        fprintf(stderr, "Oh dear, we had a problem...\n");
        exit(EXIT_FAILURE);
    }
    fprintf(fout, "\n\n\nhe he he :-)");
    fclose(fout);

    return 0;
}
