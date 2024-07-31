// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// protos
size_t my_strlen(const char *str);
void my_strcat(char *s1, const char *s2);
char *my_strchr(const char *str, int c);
int my_strcmp(const char *s1, const char *s2);
char *my_strcpy(char *s1, const char *s2);

int main()
{
    printf("strlen: %d\n", my_strlen("abba"));
    printf("strlen: %d\n", my_strlen(""));
    printf("strlen: %d\n", my_strlen("Hello, this is a string!!!!?"));

    // s1 = "mamma"
    // s2 = " "
    // s3 = "mia"

    char s1[64] = "mamma";
    char s2[] = " ";
    char s3[] = "mia";
    my_strcat(s1, s2); // s1 = s1 + s2 -> NO BOUND CHECKING!!!!!!
    my_strcat(s1, s3); // s1 = s1 + s3
    printf("\"%s\"\n", s1);

    char text[] = "Ob-la-di ob-la-da life goes on bra";
    if (my_strchr(text, 'g') != NULL)
    {
        printf("%d\n", my_strchr(text, 'g'));
        printf("0x%p\n", my_strchr(text, 'g'));
        printf("\"%s\"\n", my_strchr(text, 'g'));
    }
    // printf("%d\n", strchr(text, '!'));

    if (strstr(text, "life") != NULL)
    {
        printf("%d\n", strstr(text, "life"));
        printf("0x%p\n", strstr(text, "life"));
        printf("\"%s\"\n", strstr(text, "life"));
    }

    if (my_strcmp("bar", "bar") == 0)
    {
        printf("==\n");
    }
    else
    {
        printf("!=\n");
    }
    // Lexycographic
    // "aaa" < "b"
    // "Z" > "Abracadabra"
    char w1[256], w2[256];
    scanf("%s", w1);
    scanf("%s", w2);
    if (stricmp(w1, w2) == 0)
    {
        printf("==\n");
    }
    else if (stricmp(w1, w2) > 0)
    {
        printf(">\n");
    }
    else
    {
        printf("<\n");
    }

    char zap[64];
    my_strcpy(zap, "zap!"); // ie. zap = "zap!"
    printf("%s\n", zap);
    my_strcpy(zap, "zop!!!"); // ie. zap = "zop!!!"
    printf("%s\n", zap);

    return 0;
}

size_t my_strlen(const char *str)
{
    size_t len = 0;
    while (str[len] != '\0')
        ++len;
    // slightly more c0mP13x (d0n't w4ste t1me on 1t)
    // while(str[len++]);
    return len;
}

void my_strcat(char *s1, const char *s2)
{
    int p1 = my_strlen(s1);
    int p2 = 0;
    while (s2[p2] != '\0')
    {
        s1[p1] = s2[p2];
        ++p1;
        ++p2;
    }
    s1[p1] = '\0';
    // 2nd v3rsi0n of the wh1l3 (don't a5k)
    // while(s2[p2++] = s1[p1++]);
}

char *my_strchr(const char *str, int c)
{
    size_t pos = 0;
    while (str[pos] != '\0' && str[pos] != c)
    {
        ++pos;
    }
    if (str[pos] == '\0')
    {
        return NULL;
    }
    else
    {
        return &str[pos];
    }
}

int my_strcmp(const char *s1, const char *s2)
{
    size_t i = 0;
    while (s1[i] != '\0' && s1[i] == s2[i])
    {
        ++i;
    }
    if (s1[i] == s2[i])
    {
        return 0;
    }
    else if (s1[i] > s2[i])
    {
        return 1;
    }
    else
    {
        return -1;
    }
    // return s1[i] - s2[i];    // replaces if/else-if
}

char *my_strcpy(char *s1, const char *s2)
{
    while (*s1++ = *s2++)
        ;
    return s1;
}
