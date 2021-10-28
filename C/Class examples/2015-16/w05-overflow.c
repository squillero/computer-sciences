// Copyright © 2015-2016 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed char s1, s2, s3;
    unsigned char u1, u2, u3;

    s1 = 87;
    u1 = 87;

    s2 = 59;
    u2 = 59;

    s3 = s1 + s2;
    u3 = u1 + u2;

    printf("signed: %d + %d = %d (overflow!)\n", s1, s2, s3);
    printf("unsigned: %d + %d = %d\n", u1, u2, u3);

    unsigned char test;

    test = -1;
    printf("Real programmer's FF: %d\n", test);

    return 0;
}
