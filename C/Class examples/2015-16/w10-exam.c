// Copyright © 2015-2016 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 512
#define MAX_BUFFER 1024

int main(int argc, char *argv[])
{
    int BigList[MAX_SIZE];
    int Deleted[MAX_SIZE] = {0};
    int numElement;

    if (argc != 3)
    {
        fprintf(stderr, "Yeuch: 2 args required\n");
        exit(EXIT_FAILURE);
    }
    FILE *in;
    in = fopen(argv[1], "r");
    if (in == NULL)
    {
        fprintf(stderr, "Yeuch: can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    numElement = 0;
    // plain fscanf
    //while(fscanf(in, "%d", &BigList[numElement]) != EOF ) {
    //    numElement += 1;
    //}
    char buf[MAX_BUFFER];
    while (fgets(buf, MAX_BUFFER, in) != NULL)
    {
        sscanf(buf, "%d", &BigList[numElement]);
        numElement += 1;
    }
    fclose(in);

    int Target;
    sscanf(argv[2], "%d", &Target);

    int t, u;
    for (t = 0; t < numElement; t += 1)
    {
        for (u = t + 1; u < numElement; u += 1)
        {
            if (BigList[t] + BigList[u] == Target)
            {
                printf("WHOA! %d + %d = %d\n", BigList[t], BigList[u], Target);
                Deleted[t] = 1;
                Deleted[u] = 1;
            }
        }
    }

    for (t = 0; t < numElement; t += 1)
    {
        if (!Deleted[t])
        { // ie. Deleted == 0
            printf("%d\n", BigList[t]);
        }
    }

    return EXIT_SUCCESS;
}
