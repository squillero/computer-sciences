// Copyright © 2017 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STR_LEN 256

int main()
{
    char str1[MAX_STR_LEN];
    char str2[MAX_STR_LEN];

    printf("Enter 2 names: ");
    scanf("%s", str1);
    scanf("%s", str2);

    // strcmp -> case sensitive
    // stricmp -> case insensitive
    if (stricmp(str1, str2) == 0)
    {
        printf("%s == %s !!!\n", str1, str2);
    }
    else if (stricmp(str1, str2) > 0)
    {
        printf("%s > %s !!!\n", str1, str2);
    }
    else
    {
        printf("%s < %s !!!\n", str1, str2);
    }

    char txt[MAX_STR_LEN];
    // txt = str1 + " " + str2
    strcpy(txt, str1); // ie. txt = str1
    strcat(txt, " ");  // ie. txt += " "
    strcat(txt, str2); // ie. txt += str2
    printf(">>>%s<<<\n", txt);

    // "delete" a string
    printf(">>>%s<<<\n", str1);
    str1[0] = '\0';
    printf(">>>%s<<<\n", str1);

    // length of a string
    printf("The length of %s is %d\n", str2, strlen(str2));

    // chop last char from a string
    str2[strlen(str2) - 1] = '\0';
    printf(">>>%s<<<\n", str2);

    // subSTRing
    if (strstr(txt, "foo") == NULL)
    {
        printf("Can't find \"%s\" in \"%s\"\n", "foo", txt);
    }
    else
    {
        printf("Found \"%s\" in \"%s\"\n", "foo", txt);
    }

    // char in string
    char tmp[2];
    tmp[0] = '!';
    tmp[1] = '\0';
    // and then: strstr(txt, tmp)
    // or: strchr(txt, '!')

    return 0;
}
