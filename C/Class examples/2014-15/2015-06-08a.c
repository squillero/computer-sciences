// Copyright © 2015 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 8
#define M 5

typedef struct _BUS_DATA
{
    char data[N + 1];
    int dist;
} BUS_DATA;

// PROTOS
int hamming(char *s1, char *s2);
void invert(char *s);
void update_adjacent(BUS_DATA adj[], char *data, int dist);

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Wrong number of args\n");
        exit(EXIT_FAILURE);
    }

    FILE *in, *out;
    in = fopen(argv[1], "r");
    out = fopen(argv[2], "w");
    if (in == NULL || out == NULL)
    {
        fprintf(stderr, "Yeuch! I/O error...\n");
        abort();
    }

    char last_read[N + 1], last_wrote[N + 1];
    char i_n;
    int dist;
    BUS_DATA adjacent[M];

    // KICKSTART
    fscanf(in, "%s", last_wrote);
    fprintf(out, "%s N\n", last_wrote);
    int t;
    for (t = 0; t < M; ++t)
    {
        strcpy(adjacent[t].data, "?");
        adjacent[t].dist = N + 1;
    }

    while (fscanf(in, "%s", last_read) != EOF)
    {
        dist = hamming(last_read, last_wrote);

        if (dist > N / 2)
        {
            invert(last_read);
            i_n = 'I';
            dist = N - dist;
        }
        else
        {
            i_n = 'N';
        }
        strcpy(last_wrote, last_read);
        fprintf(out, "%s %c\n", last_wrote, i_n);

        update_adjacent(adjacent, last_wrote, dist);
    }

    for (t = 0; t < M; ++t)
    {
        printf(" %s (%d)", adjacent[t].data, adjacent[t].dist);
    }

    printf("\n\nAll done...\n");
    fclose(in);
    fclose(out);

    return EXIT_SUCCESS;
}

void invert(char *s)
{
    int t;
    for (t = 0; s[t] != '\0'; ++t)
    {
        switch (s[t])
        {
        case '0':
            s[t] = '1';
            break;
        case '1':
            s[t] = '0';
            break;
        default:
            s[t] = '?';
        }
    }
}

int hamming(char *s1, char *s2)
{
    int d = 0;
    int t;
    for (t = 0; s1[t] != '\0'; ++t)
    {
        if (s1[t] != s2[t])
        {
            d += 1;
        }
    }
    return d;
}

void update_adjacent(BUS_DATA adj[], char *data, int dist)
{
    int max = 0;
    int t;
    for (t = 1; t < M; ++t)
    {
        if (adj[t].dist > adj[max].dist)
        {
            max = t;
        }
    }
    if (adj[max].dist > dist)
    {
        adj[max].dist = dist;
        strcpy(adj[max].data, data);
    }
}
