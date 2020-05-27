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

int main(int argc, char *argv[])
{
    printf("Calculator!\n");
    double op1, op2;
    double result;

    if(argc != 4) {
        printf("Yeuch\n");
        exit(EXIT_FAILURE);
    }
    sscanf(argv[1], "%lf", &op1);
    sscanf(argv[3], "%lf", &op2);

    switch(argv[2][0]) {
    case '+':
        result = op1 + op2;
        break;
    case '-':
        result = op1 - op2;
        break;
    default:
        printf("Can't understand %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    printf("%g %c %g = %g\n",
           op1, argv[2][0], op2, result);

    return EXIT_SUCCESS;
}
