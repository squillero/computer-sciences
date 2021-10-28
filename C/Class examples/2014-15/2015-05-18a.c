// Copyright © 2015 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_STUD 10
#define MAX_STR 42
#define ID_LEN 8

typedef struct student_s
{
    char name[MAX_STR + 1];    // size: MAX_STR+1  = 43
    char surname[MAX_STR + 1]; // size: MAX_STR+1  = 43
    char id[ID_LEN + 1];       // size: ID_LEN+1   = 9
    double avg;                // size:              8
} student_t;

typedef union student2_s
{
    char name[MAX_STR + 1];    // size: MAX_STR+1  = 43
    char surname[MAX_STR + 1]; // size: MAX_STR+1  = 43
    char id[ID_LEN + 1];       // size: ID_LEN+1   = 9
    double avg;                // size:              8
} student2_t;

/* PROTOS */
int CompareStud(student_t s1, student_t s2);
void Dump(student2_t s);

int main()
{
    student_t giovanni;
    student_t paola;

    strcpy(elena.name, "Elena");
    Dump(elena);
    strcpy(elena.surname, "Squillero");
    Dump(elena);
    strcpy(elena.id, "12345");
    Dump(elena);
    elena.avg = 1.0;
    Dump(elena);

    strcpy(giovanni.name, "Giovanni");
    strcpy(giovanni.surname, "Squillero");
    strcpy(giovanni.id, "12345");
    giovanni.avg = 25.76;

    strcpy(giovanni.name, "Paola");
    strcpy(giovanni.surname, "Caretta");
    strcpy(giovanni.id, "63452");
    paola.avg = 29.9;

    if (CompareStud(paola, giovanni) == 0)
    {
        printf("Paola == Giovanni ????\n");
    }

    return EXIT_SUCCESS;
}

/*
 * if s1 == s2 --> return 0
 * if s1 != s2 --> return != 0
 */
int CompareStud(struct student_s s1, struct student_s s2)
{
    int ret_val = 0;
    if (strcmp(s1.name, s2.name) != 0)
    {
        ret_val = 1;
    }
    if (strcmp(s1.surname, s2.surname) != 0)
    {
        ret_val = 1;
    }
    if (strcmp(s1.id, s2.id) != 0)
    {
        ret_val = 1;
    }
    if (s1.avg != s2.avg)
    {
        ret_val = 1;
    }
    return ret_val;
}

void Dump(student2_t s)
{
    printf("Name: \"%s\"\n", s.name);
    printf("Surname: \"%s\"\n", s.surname);
    printf("Id: \"%s\"\n", s.id);
    printf("Avg: %g\n", s.avg);
}
