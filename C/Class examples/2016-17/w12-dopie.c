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
#include <ctype.h>
#include <string.h>

#define LINE_LENGTH 1024

int main(int argc, char *argv[])
{
    printf("MY FIRST SERIOUS PROGRAM\n");

    if(argc != 2) {
        fprintf(stderr, "Yeuch: Exactly one argument required\n");
        exit(EXIT_FAILURE);
    }

    FILE *input;
    input = fopen(argv[1], "r");
    if(input == NULL) {
        fprintf(stderr, "Yeuch: Can't open \"%s\"\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    char line[LINE_LENGTH];
    char out[LINE_LENGTH];
    while( fgets(line, LINE_LENGTH, input) != NULL ) {
        int o = 0;
        for(int l = 0; line[l] != '\0'; ++l) {
            if(!isalpha(line[l]) || line[l] != line[l+1]) {
                out[o] = line[l];
                o += 1;
            }
        }
        out[o] = '\0';
        printf("%s", out);
    }

    fclose(input);
    return EXIT_SUCCESS;
}
