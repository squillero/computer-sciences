// Copyright © 2016-2017 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

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
