// Copyright © 2015-2016 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define LINE_SIZE 256
#define WORDS_NUM 5
#define WORDS_SIZE 60

#define WORD 1
#define NOT_WORD 0

// Globals
char Words[WORDS_NUM][WORDS_SIZE + 1];

int main(int argc, char *argv[])
{
    char line[LINE_SIZE];

    fgets(line, LINE_SIZE, stdin);
    line[strlen(line) - 1] = '\0';

    int bob_position, bob_status;
    int wordsNum, wordsPos;

    wordsNum = -1;
    bob_position = 0;
    bob_status = NOT_WORD;
    for (bob_position = 0; line[bob_position] != '\0'; bob_position += 1)
    {
        switch (bob_status)
        {
        case WORD:
            if (isalnum(line[bob_position]))
            {
                Words[wordsNum][wordsPos] = line[bob_position];
                wordsPos += 1;
            }
            else
            {
                Words[wordsNum][wordsPos] = '\0';
                bob_status = NOT_WORD;
            }
            break;

        case NOT_WORD:
            if (isalnum(line[bob_position]))
            {
                wordsNum += 1;
                wordsPos = 0;
                Words[wordsNum][wordsPos] = line[bob_position];
                wordsPos += 1;

                bob_status = WORD;
            }
            break;
        }
    }
    wordsNum += 1;

    int t;

    printf("Found %d words\n", wordsNum);
    for (t = 0; t < wordsNum; t += 1)
    {
        printf("%d: %s\n", t, Words[t]);
    }
    int length = 0;
    for (t = 0; t < wordsNum; t += 1)
    {
        length += strlen(Words[t]);
    }
    printf("Average length: %g\n", (double)length / (double)wordsNum);

    int stat[WORDS_SIZE] = {0};
    for (t = 0; t < wordsNum; t += 1)
    {
        int len;
        len = strlen(Words[t]);
        stat[len] += 1;
    }
    for (t = 0; t < WORDS_SIZE; t += 1)
    {
        if (stat[t] > 0)
        {
            printf("Found %d words of size %d\n", stat[t], t);
        }
    }

    return EXIT_SUCCESS;
}
