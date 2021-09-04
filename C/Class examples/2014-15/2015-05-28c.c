/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-science        *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Licensed under the EUPL-1.2 <https://eupl.eu/>       *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SID_LEN 15

int main(int argc, char *argv[])
{
    //goto no_debug;
    if (argc != 2)
    {
        fprintf(stderr, "D'ho\n");
        abort();
    }
    int target_res;
    target_res = atoi(argv[1]);
    if (target_res < 18 || target_res > 31)
    {
        fprintf(stderr, "D'ho\n");
        abort();
    }

    FILE *in;
    char id[SID_LEN + 1];
    int result;
    char selected_id[SID_LEN + 1];
    int selected_id_num;

    selected_id_num = -1;

    in = fopen("VOTI.DAT", "r");
    if (in == NULL)
    {
        fprintf(stderr, "File error!\n");
        abort();
    }

    while (fscanf(in, "%s", id) != EOF)
    {
        fscanf(in, "%d", &result);
        int num = 0;
        while (result != -1)
        {
            if (result == target_res)
            {
                num += 1;
            }
            fscanf(in, "%d", &result);
        }
        if (num > selected_id_num)
        {
            selected_id_num = num;
            strcpy(selected_id, id);
        }
    }
    fclose(in);
    printf("%s got %d %d's!\n", selected_id, selected_id_num, target_res);

    return 0;
}
