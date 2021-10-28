// Copyright © 2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define INPUT_FILE "myfile.gx"
#define WORD_LEN 511
#define BUFFER_LEN 8192

int main()
{
    // char-based i/o
    FILE *fin1 = fopen(INPUT_FILE, "r");
    if (fin1 == NULL)
    {
        fprintf(stderr, "Yeuch: Can't open \"%s\"\n", INPUT_FILE);
        exit(EXIT_FAILURE);
    }
    int c;
    while ((c = fgetc(fin1)) != EOF)
    {
        printf("%c", c);
    }
    fclose(fin1);

    printf("\n\n\n");

    // token-based i/o
    FILE *fin2 = fopen(INPUT_FILE, "r");
    if (fin2 == NULL)
    {
        fprintf(stderr, "Yeuch: Can't open \"%s\"\n", INPUT_FILE);
        exit(EXIT_FAILURE);
    }
    char word[WORD_LEN + 1];
    while (fscanf(fin2, "%s", word) != EOF)
    {
        printf("[%s] ", word);
    }
    fclose(fin2);

    printf("\n\n\n");

    // line-based i/o
    FILE *fin3 = fopen(INPUT_FILE, "r");
    if (fin3 == NULL)
    {
        fprintf(stderr, "Yeuch: Can't open \"%s\"\n", INPUT_FILE);
        exit(EXIT_FAILURE);
    }
    char line[BUFFER_LEN];
    while (fgets(line, BUFFER_LEN, fin3) != NULL)
    {
        line[strlen(line) - 1] = '\0'; // if needed
        printf("|%s|\n", line);
    }
    fclose(fin3);

    return EXIT_SUCCESS;
}
