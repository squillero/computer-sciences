/*-**********************************************************************-*\
*             * CLASS SAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)             *
*   #####     * (!) 2018, Giovanni Squillero <squillero@polito.it>         *
*  ######     *                                                            *
*  ###   \    * Copying and distributing this file, either with or without *
*   ##G  c\   * modification, is permitted in any medium without royalty,  *
*   #     _\  * provided that this 10-line comment is preserved.           *
*   |  _/     *                                                            *
*             * ===> THIS FILE IS OFFERED AS-IS, WITHOUT ANY WARRANTY <=== *
\*-**********************************************************************-*/

#include <stdio.h>
#include <stdlib.h>

#define FILE_IN_1 "exam-201806_primo.txt"
#define FILE_IN_2 "exam-201806_secondo.txt"
#define FILE_OUT "exam-201806_burton.txt"

typedef struct _MEASURE {
    int h, m, s;
    double v;
} MEASURE;

// compare two timestamps
int cmp_measures(MEASURE a, MEASURE b) 
{
    return (a.h*60*60+a.m*60+a.s) - (b.h*60*60+b.m*60+b.s);
}

int main(int argc, char *argv[])
{
    FILE *f1 = fopen(FILE_IN_1, "r");
    FILE *f2 = fopen(FILE_IN_2, "r");
    FILE *fo = fopen(FILE_OUT, "w");

    if(f1 == NULL || f2 == NULL || fo == NULL) {
        fprintf(stderr, "Yeuch!\n");
        exit(1);
    }

    MEASURE m1, m2;
    fscanf(f1, "%2d:%2d:%2d %lf", &m1.h, &m1.m, &m1.s, &m1.v);
    fscanf(f2, "%2d:%2d:%2d %lf", &m2.h, &m2.m, &m2.s, &m2.v);

    while(!feof(f1) || !feof(f2)) {
        if(feof(f2) || (!feof(f1) && cmp_measures(m1, m2) < 0)) {
            // get the measure from the first file
            fprintf(fo, "%02d:%02d:%02d %f\n", m1.h, m1.m, m1.s, m1.v);
            fscanf(f1, "%2d:%2d:%2d %lf", &m1.h, &m1.m, &m1.s, &m1.v);
        } else if(feof(f1) || (!feof(f2) && cmp_measures(m1, m2) > 0)) {
            // get the measure from the second file
            fprintf(fo, "%02d:%02d:%02d %f\n", m2.h, m2.m, m2.s, m2.v);
            fscanf(f2, "%2d:%2d:%2d %lf", &m2.h, &m2.m, &m2.s, &m2.v);
        } else {
            // merge the measures from the two files (same timestamp)
            fprintf(fo, "%02d:%02d:%02d %f\n", m2.h, m2.m, m2.s, (m1.v + m2.v) / 2.0);
            fscanf(f1, "%2d:%2d:%2d %lf", &m1.h, &m1.m, &m1.s, &m1.v);
            fscanf(f2, "%2d:%2d:%2d %lf", &m2.h, &m2.m, &m2.s, &m2.v);
        }
    }

    fclose(f1);
    fclose(f2);
    fclose(fo);
    return EXIT_SUCCESS;
}
