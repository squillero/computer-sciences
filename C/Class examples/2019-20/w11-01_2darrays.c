// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a2d1[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int a2d2[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int a2d3[2][3] = {1, 2, 3, 4, 5, 6};

    for (int t1 = 0; t1 < 3; ++t1)
    {
        for (int t2 = 0; t2 < 2; ++t2)
        {
            printf("%4d", a2d1[t1][t2]);
        }
        printf("\n");
    }

    printf("\n\n\n");

    for (int t1 = 0; t1 < 2; ++t1)
    {
        for (int t2 = 0; t2 < 3; ++t2)
        {
            printf("%4d", a2d2[t1][t2]);
        }
        printf("\n");
    }

    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    char *w1 = "foo";
    char w2[] = "gargle";

    printf(">%s< >%s<\n", w1, w2);

    char blob[10][100];

    strcpy(blob[0], "Foo");
    scanf("%s", blob[1]);
    strcpy(blob[2], blob[1]);
    strcat(blob[2], " ");
    strcat(blob[2], blob[0]);
    printf(">>> %s <<<", blob[2]);

    return 0;
}
