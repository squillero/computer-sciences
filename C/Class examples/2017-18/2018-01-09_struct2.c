// Copyright © 2018 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 250

typedef struct _STUDENT
{
    char name[MAX_LEN + 1];
    char student_id[16];
} STUDENT;

// protos
void print_student(STUDENT foo);

void print_student(STUDENT s)
{
    printf("%s (%s)", s.name, s.student_id);
}

int main()
{
    STUDENT bob;

    struct
    {
        int a, b;
    } zap[100];
    for (int t = 0; t < 100; ++t)
        zap[t].a = zap[t].b = 0;

    printf("Size of student: %d\n", sizeof(STUDENT));

    strcpy(bob.name, "Bob The Bob");
    strcpy(bob.student_id, "666");
    print_student(bob);

    struct foo
    {
        char a, b, c;
    };
    printf("\n\nSize of foo: %d\n", sizeof(struct foo));
    typedef struct foo hey;

    return 0;
}
