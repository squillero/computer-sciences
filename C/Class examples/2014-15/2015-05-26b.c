/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Remain(int first, FILE *in, FILE *out);

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Need 2 args!\n");
        exit(EXIT_FAILURE);
    }

    FILE *in1, *in2;
    FILE *out;

    in1 = fopen(argv[1], "r");
    in2 = fopen(argv[2], "r");
    out = fopen("out.gx", "w");

    if (in1 == NULL || in2 == NULL || out == NULL)
    {
        fprintf(stderr, "File error!\n");
        exit(EXIT_FAILURE);
    }

    int n1, n2;
    int no;

    // kickstart
    fscanf(in1, "%d", &n1);
    fscanf(in2, "%d", &n2);
    //while( !feof(in1) || !feof(in2) ) {
    //while( ! (feof(in1) && feof(in2)) ) {
    //    if( feof(in2) || (!feof(in1) && n1 < n2) ) {
    //        no = n1;
    //        fscanf(in1, "%d", &n1);
    //    } else {
    //        no = n2;
    //        fscanf(in2, "%d", &n2);
    //    }
    //    fprintf(out, "%d\n", no);
    //}

    while (!feof(in1) && !feof(in2))
    {
        if (n1 < n2)
        {
            no = n1;
            fscanf(in1, "%d", &n1);
        }
        else
        {
            no = n2;
            fscanf(in2, "%d", &n2);
        }
        printf("%d\n", no);
        fprintf(out, "%d\n", no);
    }
    printf("\n");
    if (feof(in1))
    {
        Remain(n2, in2, out);
    }
    else
    {
        Remain(n1, in1, out);
    }

    fclose(in1);
    fclose(in2);
    fclose(out);
    return EXIT_SUCCESS;
}

void Remain(int first, FILE *in, FILE *out)
{
    do
    {
        printf("%d\n", first);
        fprintf(out, "%d\n", first);
        fscanf(in, "%d", &first);
    } while (!feof(in));
}
