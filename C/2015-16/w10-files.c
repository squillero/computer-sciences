/********************************************************************-*-c-*-*\
*               *  Code examples for Computer Sciences 2015-16               *
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

#define BUFFER_SIZE 512

int main(int argc, char *argv[])
{
    FILE *foo;
    char name[] = "test.qaz";
    
    foo = fopen(name, "w");
    if(foo == NULL) {
        fprintf(stderr, "Yeuch. Can't open %s\n", name);
        exit(EXIT_FAILURE);
    }
    fprintf(foo, "Hello FILE world!!!!\n");
    fclose(foo);


    FILE *bar;
    bar = fopen("input.qwe", "r");
    if(bar == NULL) {
        fprintf(stderr, "Yeuch, can't open bar\n");
        exit(EXIT_FAILURE);
    }
    
    char line[BUFFER_SIZE];
    while(fgets(line, BUFFER_SIZE, bar) != NULL) {
        printf(">> %s", line);
    }
    
    fclose(bar);
    
	return EXIT_SUCCESS;    
}
