/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE 4096

// PROTOS
void encode(char *line_out, char *line_in);

int main()
{
    // while(???) {
    //   read a line
    //   encode the line
    //   print the encoded versione of the line
    // }

    char line_in[MAX_LINE];
    char line_out[MAX_LINE];

    while (gets(line_in) != NULL)
    {
        encode(line_out, line_in);
        printf("%s\n", line_out);
    }

    return 0;
}

void encode(char *s1, char *s2)
{
    int len = strlen(s2);
    for (int t = 0; t < len; ++t)
    {
        s1[t] = s2[len - t - 1];
    }
    s1[len] = '\0';
}
