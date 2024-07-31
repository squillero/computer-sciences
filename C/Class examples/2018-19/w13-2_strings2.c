// Copyright © 2018-2019 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINE 4096
#define FILE_NAME "de_profundis.gx"

// proto
int count_vowels(char *str);

int main()
{
    char w_max_vowel[MAX_LINE] = "";
    int num_max_vowel = -1;

    FILE *input = fopen(FILE_NAME, "r");
    if (input == NULL)
    {
        fprintf(stderr, "Yeuch! Can't open %s\n", FILE_NAME);
        exit(EXIT_FAILURE);
    }

    char word[MAX_LINE];
    while (fscanf(input, "%s", word) != EOF)
    {
        printf("Word: \"%s\" (%d vowels)\n", word, count_vowels(word));
        if (count_vowels(word) > num_max_vowel)
        {
            num_max_vowel = count_vowels(word);
            strcpy(w_max_vowel, word);
        }
    }
    printf("Max v: %s (%d)\n", w_max_vowel, num_max_vowel);

    fclose(input);
    return EXIT_SUCCESS;
}

int count_vowels(char *str)
{
    int n_vowels = 0;
    for (int t = 0; str[t] != '\0'; ++t)
    {
        if (toupper(str[t]) == 'A' || toupper(str[t]) == 'E' || toupper(str[t]) == 'I' || toupper(str[t]) == 'O' || toupper(str[t]) == 'U')
        {
            ++n_vowels;
        }
    }
    return n_vowels;
}
