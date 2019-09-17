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

int main(int argc, char *argv[])
{
    double n1, n2;    
    double result;
    
    if(argc != 4) {
        printf("Yeuch!\n");
        exit(EXIT_FAILURE);
    }
    
    sscanf(argv[1], "%lf", &n1);
    sscanf(argv[3], "%lf", &n2);

    //if(strcmp(argv[2], "+")==0) {
    //    ...
    //} else if(strcmp(argv[2], "/")==0) {
    //    ...
    //}

    switch(argv[2][0]) {
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '*':
            result = n1 * n2;
            break;
        case '/':
            result = n1 / n2;
            break;
        default:
            printf("D'ho\n");
            exit(EXIT_FAILURE);
    }

    printf("%g %s %g = %g\n", n1, argv[2], n2, result);

	return EXIT_SUCCESS;
}
