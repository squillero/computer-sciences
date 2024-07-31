// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double fahrenheit;
    double celsius;

    printf("Fahrenheit to Celsius\n");
    printf("Enter T in F: ");

    scanf("%lf", &fahrenheit);
    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    printf("%gF = %gC\n", fahrenheit, celsius);

    return 0;
}
