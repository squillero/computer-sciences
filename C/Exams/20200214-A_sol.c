// Copyright © Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SEQ_LEN 4096
#define MAX_PATTERN_NUM 100

// prototypes
int remove_pattern(char *seq);
int pattern_match(int pat, char *str, int init);
void remove_substring(char *str, int start, int end);

char Patterns[MAX_PATTERN_NUM + 1][MAX_SEQ_LEN + 1];

int main(int argc, char *argv[])
{
    char sequence[MAX_SEQ_LEN + 1];
    int sequence_len;

    if (argc != 3)
    {
        fprintf(stderr, "Wrong number of arguments (%d)\n", argc - 1);
        fprintf(stderr, "USAGE: %s seq_file pat_file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    // read the sequence
    FILE *seq_file = fopen(argv[1], "r");
    if (seq_file == NULL)
    {
        fprintf(stderr, "ERROR: Can't open file \"%s\"\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    char w[2];
    sequence_len = 0;
    while (fscanf(seq_file, "%s", w) != EOF)
    {
        sequence[sequence_len++] = w[0];
    }
    sequence[sequence_len] = '\0';
    fclose(seq_file);

    // read the patterns
    FILE *pat_file = fopen(argv[2], "r");
    if (pat_file == NULL)
    {
        fprintf(stderr, "ERROR: Can't open file \"%s\"\n", argv[2]);
        exit(EXIT_FAILURE);
    }
    int patterns_num = 0;
    while (fscanf(pat_file, "%s", Patterns[patterns_num]) != EOF)
    {
        ++patterns_num;
    }
    fclose(pat_file);

    // main loop
    int found = 1;
    while (found)
    {
        printf("%s\n", sequence);
        found = remove_pattern(sequence);
    }

    return EXIT_SUCCESS;
}

// remove the first pattern from the sequence
// returns FALSE if no patterns can be removed
int remove_pattern(char *seq)
{
    int found = 0;
    for (int i = 0; !found && seq[i] != '\0'; ++i)
    {
        // i: starting element in the sequence
        for (int p = 0; !found && Patterns[p][0] != '\0'; ++p)
        {
            // p: pattern number
            if (pattern_match(p, seq, i))
            {
                // the sequence contains the pattern p at position i
                // let's remove strlen(Patterns[p]) chars
                found = 1;
                remove_substring(seq, i, i + strlen(Patterns[p]));
            }
        }
    }
    return found;
}

// check whether Patterns[pat] can be found at seq[init]
int pattern_match(int pat, char *str, int init)
{
    int match = 1;
    for (int t = 0; match && Patterns[pat][t] != '\0'; ++t)
    {
        if (str[init + t] != Patterns[pat][t])
        {
            match = 0;
        }
    }
    return match;
}

// remove [start, end[ from str
void remove_substring(char *str, int start, int end)
{
    int t;
    for (t = 0; str[end + t] != '\0'; ++t)
    {
        str[start + t] = str[end + t];
    }
    str[start + t] = '\0';
}