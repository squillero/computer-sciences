/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

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

    if (user == 1)
    {
        printf("Enter T in F: ");
        scanf("%lf", &fahrenheit);
        celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    }
    else
    {
        printf("Enter T in C: ");
        scanf("%lf", &celsius);
        fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    }
    printf("%gF = %gC\n", fahrenheit, celsius);
}
