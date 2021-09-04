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

int main(int argc, char *argv[])
{
    double a, b;
    char op;

    if(argc != 4) {
        printf("Yeuch. Wrong number of arguments.\n");
        exit(EXIT_FAILURE);
    }

    sscanf(argv[1], "%lf", &a);
    op = argv[2][0];
    sscanf(argv[3], "%lf", &b);

    double result;

    switch(op) {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        printf("Yeuch. What the hell '%c' is???\n", op);
        exit(EXIT_FAILURE);
    }

    printf("%g %c %g = %g\n", a, op, b, result);

    return EXIT_SUCCESS;
}
