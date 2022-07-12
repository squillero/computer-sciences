// Copyright © 2018-2019 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 4096

// protos
void my_string_sort(const char *source, char *dest);
int anagram1(const char *w1, const char *w2);
int anagram2(const char *w1, const char *w2);

int main()
{
    char word1[MAX_LEN];
    char word2[MAX_LEN];

    scanf("%s", word1);
    scanf("%s", word2);

    if (anagram2(word1, word2))
    {
        printf("Oh yeah: \"%s\" and \"%s\" are anagrams!\n", word1, word2);
    }

    printf("Hello world!\n");
    return 0;
}

int anagram1(const char *w1, const char *w2)
{
    char tw1[MAX_LEN], tw2[MAX_LEN];
    my_string_sort(w1, tw1);
    my_string_sort(w2, tw2);
    return strcmp(tw1, tw2) == 0;
}

void my_string_sort(const char *source, char *dest)
{
    int t = 0;
    for (t = 0; source[t] != '\0'; ++t)
    {
        dest[t] = toupper(source[t]);
    }
    dest[t] = '\0'; // 3 pts @ the exam ;-)

    int len = strlen(dest);
    // repeat
    while (len > 0)
    {
        // find max elem
        int max = 0;
        for (int t = 0; t < len; ++t)
        {
            if (dest[t] > dest[max])
            {
                max = t;
            }
        }
        // put it in the last pos
        int tmp = dest[len - 1];
        dest[len - 1] = dest[max];
        dest[max] = tmp;
        // forget about last element
        --len;
    }
}

// optimized version
int anagram2(const char *w1, const char *w2)
{
    int count[256] = {0};
    for (int t = 0; w1[t] != '\0'; ++t)
    {
        printf("Char: %c (ascii %d)\n", w1[t], w1[t]);
        printf("%d --> ", count[toupper(w1[t])]);
        ++count[toupper(w1[t])];
        printf("%d\n", count[toupper(w1[t])]);
    }
    for (int t = 0; w2[t] != '\0'; ++t)
    {
        --count[toupper(w2[t])];
    }
    for (int t = 0; t < 256; ++t)
    {
        if (count[t] != 0)
        {
            return 0;
        }
    }
    return 1;
}
