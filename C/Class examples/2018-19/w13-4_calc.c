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

enum { ADDITION, SUBTRACTION, MULTIPLICATION, DIVISION };

int main(int argc, char *argv[])
{
    int operation;

    if(argc < 4) {
        fprintf(stderr, "Wrong number of arguments!\n");
        exit(EXIT_FAILURE);
    }

    switch(argv[1][0]) {
    case '+':
        operation = ADDITION;
        break;
    case '-':
        operation = SUBTRACTION;
        break;
    case '/':
        operation = DIVISION;
        break;
    case '*':
    case 'x':
    case 'X':
        operation = MULTIPLICATION;
        break;
    default:
        fprintf(stderr, "Unknown operation '%c'\n", argv[1][0]);
        exit(EXIT_FAILURE);
    }

    double result = atof(argv[2]);
    for(int t = 3; t < argc; ++t) {
        switch(operation) {
        case ADDITION:
            result += atof(argv[t]);
            break;
        case SUBTRACTION:
            result -= atof(argv[t]);
            break;
        case MULTIPLICATION:
            result *= atof(argv[t]);
            break;
        case DIVISION:
            result /= atof(argv[t]);
            break;

        }
    }
    printf("Result: %g\n", result);


    return 0;
}
