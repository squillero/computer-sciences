// Copyright © 2018-2019 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_LEN 4096

// proto
int palindrome1(char *word);
int palindrome2(char *word);
int palindrome3(char *word);
void strip(const char *word, char *word2);

int main()
{
    char word[MAX_LEN];

    gets(word);
    if (palindrome3(word))
    {
        printf("Oh yeah, \"%s\" is a palindrome\n", word);
    }
    return 0;
}

int palindrome1(char *word)
{
    int len = strlen(word);
    int palindrome = 1;
    for (int t = 0; t < len; ++t)
    {
        if (toupper(word[t]) != toupper(word[len - t - 1]))
        {
            palindrome = 0;
        }
    }
    return palindrome;
}

int palindrome2(char *word)
{
    char tmp[MAX_LEN];
    strip(word, tmp);
    return palindrome1(tmp);
}

void strip(const char *word, char *word2)
{
    int iw, iw2;

    iw = iw2 = 0;
    while (word[iw] != '\0')
    {
        if (isalnum(word[iw]))
        {
            word2[iw2++] = toupper(word[iw]);
        }
        ++iw;
    }
    word2[iw2] = '\0';
}

int palindrome3(char *word)
{
    int i1 = -1;
    while (!isalnum(word[++i1]))
        ;
    int i2 = strlen(word);
    while (!isalnum(word[--i2]))
        ;

    int palindrome = 1;
    while (i1 < i2)
    {
        if (word[i1] != word[i2])
        {
            palindrome = 0;
        }
        while (!isalnum(word[++i1]))
            ;
        while (!isalnum(word[--i2]))
            ;
    }
    return palindrome;
}
