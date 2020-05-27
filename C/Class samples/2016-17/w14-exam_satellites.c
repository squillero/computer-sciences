#include <stdio.h>
#include <stdlib.h>

#define N 20
#define FILENAME_ROOF_1 "roof1.txt"
#define FILENAME_ROOF_2 "roof2.txt"

// PROTOS
int close_to_diesis(int r, int c);

char Roof1[N][N +1 +1];
char Roof2[N][N +1 +1];

int main(int argc, char *argv[])
{
    printf("Map!\n");

    FILE *in;
    in = fopen(FILENAME_ROOF_1, "r");
    if(in == NULL) {
        fprintf(stderr, "Can't open %s\n", FILENAME_ROOF_1);
        exit(EXIT_FAILURE);
    }
    for(int t = 0; t < N; ++t) {
        fgets(Roof1[t], N+1+1, in);
    }
    fclose(in);

    in = fopen(FILENAME_ROOF_2, "r");
    if(in == NULL) {
        fprintf(stderr, "Can't open %s\n", FILENAME_ROOF_2);
        exit(EXIT_FAILURE);
    }
    for(int t = 0; t < N; ++t) {
        fgets(Roof2[t], N+1+1, in);
    }
    fclose(in);

    if(argc != 4) {
        fprintf(stderr, "REQUIRED: R C M\n");
        exit(EXIT_FAILURE);
    }
    int row, col, mmm;
    sscanf(argv[1], "%d", &row);
    sscanf(argv[2], "%d", &col);
    sscanf(argv[3], "%d", &mmm);

    --row;
    --col;
    int changes = 0;
    for(int r = row; r < row + mmm; ++r) {
        for(int c = col; c < col + mmm; ++c) {
            if(Roof1[r][c] != Roof2[r][c]) {
                changes = 1;
                if(close_to_diesis(r, c)) {
                    printf("(%d, %d) Legal new construction\n", r + 1, c + 1);
                } else {
                    printf("(%d, %d) Illegal new construction\n", r + 1, c + 1);
                }
            }
        }
    }
    if(!changes) {
        printf("No new construction\n");
    }

    return EXIT_SUCCESS;
}

int close_to_diesis(int r, int c)
{
    if(r > 0 && Roof1[r-1][c] == '#')
        return 1;
    if(r < N-1 && Roof1[r+1][c] == '#')
        return 1;
    if(c > 0 && Roof1[r][c-1] == '#')
        return 1;
    if(c < N-1 && Roof1[r][c+1] == '#')
        return 1;
    return 0;
}
