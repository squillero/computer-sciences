// Copyright © 2019-2020 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("out.txt", "w");
    if (file == NULL)
    {
        printf("Yeuch, can't open 'out.txt'\n");
        exit(1);
    }
    for (int t = 0; t < 999; ++t)
    {
        fprintf(file, "Hello world!\n");
    }
    fclose(file);

    int number;
    FILE *read = fopen("input.txt", "r");
    if (read == NULL)
    {
        printf("Yeuch, can't open 'input.txt'\n");
        exit(1);
    }
    fscanf(read, "%d", &number);
    printf("> %d\n", number);
    fclose(read);

    return 0;
}
