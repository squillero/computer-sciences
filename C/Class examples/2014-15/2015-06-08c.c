// Copyright © 2015 Giovanni Squillero <giovanni.squillero@polito.it>
// Free for personal or classroom use; see 'LICENSE.md' for details.
// https://github.com/squillero/computer-sciences

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
