/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct _TestStruct
{
    long double a;
    int b;
    char c;
} TestStruct;

typedef union _TestUnion
{
    long double a;
    int b;
    char c;
} TestUnion;

int main(int argc, char *argv[])
{
    printf("%ld\n", sizeof(long double));
    printf("%ld\n", sizeof(int));
    printf("1\n");
    printf("%ld\n", sizeof(TestStruct));
    printf("%ld\n", sizeof(TestUnion));

    TestUnion tu;
    TestStruct ts;

    return 0;
}
