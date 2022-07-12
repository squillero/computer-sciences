// Copyright © 2016-2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

#define BUFFER_LEN 4

int main()
{
    char str[BUFFER_LEN];

    //strcpy(str, "Hey");     // str = "Hey"
    strcat(str, " "); // str += " "
    strcat(str, "you");
    strcat(str, ", ");
    strcat(str, "out");

    printf("%s\n", str);
    return 0;
}
