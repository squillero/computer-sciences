// Copyright © 2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char my_first_string[16] = {'C', 'i', 'a', 'o', '!', '\0', 'x'};
    char my_second_string[] = "Oh, mamma mia mamma mia";
    char *my_third_string = "mamma mia let me go";
    char stop[] = "";
    char stop2[3] = {'!', 0, '!'};

    printf("%s\n", my_first_string);
    printf("%s\n", my_second_string);
    printf("%s\n", my_third_string);
    return 0;
}
