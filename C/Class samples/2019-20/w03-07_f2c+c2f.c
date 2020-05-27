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
    double fahrenheit;
    double celsius;
    _Bool x;

    printf("1) Fahrenheit to Celsius\n");
    printf("2) Celsius to Fahrenheit\n");
    printf(": ");

    int user;
    scanf("%d", &user);

    if(user == 1) {
        printf("Enter T in F: ");
        scanf("%lf", &fahrenheit);
        celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    } else {
        printf("Enter T in C: ");
        scanf("%lf", &celsius);
        fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    }
    printf("%gF = %gC\n", fahrenheit, celsius);
}
