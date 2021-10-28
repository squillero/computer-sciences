// Copyright © 2019-2020 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char w[64];
    scanf("%s", w);

    printf("\"%s\"\n", w);

    int v1 = atoi(w);
    printf("\"%s\" -> %d\n", w, v1);
    long v2 = atol(w);
    printf("\"%s\" -> %ld\n", w, v2);
    double v3 = atof(w);
    printf("\"%s\" -> %g\n", w, v3);

    // alt
    sscanf(w, "%d", &v1);
    printf("(with sscanf) \"%s\" -> %d\n", w, v1);
    sscanf(w, "%ld", &v2);
    printf("(with sscanf) \"%s\" -> %ld\n", w, v2);
    sscanf(w, "%lf", &v3);
    printf("(with sscanf) \"%s\" -> %g\n", w, v3);

    // sscanf sprintf
    char buffer[256];
    sprintf(buffer, "Hello, the answer is %d!", 42);
    printf("Buffer: \"%s\"\n", buffer);

    int a, b, c;
    int x = scanf("%d %d %d", &a, &b, &c);
    printf(">>> %d\n", x);

    return 0;
}
