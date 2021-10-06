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

#define DIM_IMG_X 10
#define DIM_IMG_Y 7
#define OUTPUT_FILE_NAME "result.txt"

int Kernel[3][3];
int Image[DIM_IMG_Y][DIM_IMG_X];

int GetImageVal(int r, int c);

int main(int argc, char *argv[])
{
    FILE *ifile, *kfile, *ofile;

    if (argc != 3)
    {
        fprintf(stderr, "USAGE: %s image_file kernel_file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    ifile = fopen(argv[1], "r");
    kfile = fopen(argv[2], "r");
    ofile = fopen(OUTPUT_FILE_NAME, "w");
    if (ifile == NULL || kfile == NULL || ofile == NULL)
    {
        fprintf(stderr, "Input/Output error. Quitting.\n");
        exit(0);
    }
    for (int r = 0; r < DIM_IMG_Y; ++r)
    {
        for (int c = 0; c < DIM_IMG_X; ++c)
        {
            fscanf(ifile, "%d", &Image[r][c]);
        }
    }
    fclose(ifile);

    for (int r = 0; r < 3; ++r)
    {
        for (int c = 0; c < 3; ++c)
        {
            fscanf(kfile, "%d", &Kernel[r][c]);
        }
    }
    fclose(kfile);

    for (int r = 0; r < DIM_IMG_Y; ++r)
    {
        for (int c = 0; c < DIM_IMG_X; ++c)
        {
            int val = 0;
            for (int rk = -1; rk < 2; ++rk)
            {
                for (int ck = -1; ck < 2; ++ck)
                {
                    val += Kernel[1 + rk][1 + ck] * GetImageVal(r + rk, c + ck);
                }
            }
            fprintf(ofile, "%5d ", val);
        }
        fprintf(ofile, "\n");
    }
    fclose(ofile);

    return EXIT_SUCCESS;
}

int GetImageVal(int r, int c)
{
    if (r < 0 || r >= DIM_IMG_Y || c < 0 || c >= DIM_IMG_X)
        return 0;
    else
        return Image[r][c];
}
