# ######/= == == == == == == == == == == == == == == == == == == == == == == == == == == == == == \
    # ###### #| CLASS EXAMPLE FOR "COMPUTER SCIENCES"(0JCJ **) |
# ####   \ | https: //github.com/squillero/computer-sciences            |
# ## #G c\ | |
# ##_\ | Copyright © 2015 Giovanni Squillero <squillero @polito.it> |
#| _ / | Licensed under the EUPL - 1.2 <https: //eupl.eu/>            |
#| _ /      \== == == == == == == == == == == == == == == == == == == == == == == == == == == == == = /

#include <stdio.h>
#include <stdlib.h>
#define STR_MAX_LEN 64

// PROTOS!
int letter_not_present(char *string, int c);

int main()
{
    char s1[STR_MAX_LEN + 1], s3[STR_MAX_LEN + 1], s2[STR_MAX_LEN + 1];

    scanf("%s", s1);
    scanf("%s", s2);

    int t, u;

    u = 0;
    for (t = 0; s1[t] != '\0'; t += 1)
    {
        //        if(letter_not_present(s2, s1[t])) {
        if (strchr(s2, s1[t]) == NULL)
        {
            s3[u] = s1[t];
            u += 1;
        }
    }
    s3[u] = '\0';
    printf("> %s\n", s3);

    return 0;
}

int letter_not_present(char *string, int c)
{
    int t;
    int flag;

    flag = 1;
    for (t = 0; string[t] != '\0'; t += 1)
    {
        if (string[t] == c)
        {
            flag = 0;
        }
    }
    return flag;
}
