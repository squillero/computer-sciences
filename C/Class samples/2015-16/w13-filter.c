/********************************************************************-*-c-*-*\
*               *  Code examples for Computer Sciences 2015-16               *
*    #####      *  (!) Giovanni Squillero <giovanni.squillero@polito.it>     *
*   ######      *                                                            *
*   ###   \     *  Copying and distribution of this file, with or without    *
*    ##G  c\    *  modification, are permitted in any medium without royalty *
*    #     _\   *  provided this notice is preserved.                        *
*    |   _/     *  This file is offered as-is, without any warranty.         *
*    |  _/      *                                                            *
*               *  See: http://staff.polito.it/giovanni.squillero/dida.php   *
\****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX_FILTER_LENGTH   1024
#define MAX_WORD_SIZE 512

#define FILTER_NAME "filter.dat"

#define INCLUDE 1
#define EXCLUDE 2

int InFilter(int *f, int f_len, int n);

int main(int argc, char *argv[])
{
    FILE *in;
    int FilterData[MAX_FILTER_LENGTH];
    int FilterData_Length;
    int Action;

    // Reading filter
    in = fopen(FILTER_NAME, "r");
    if(in==NULL) {
        printf("Yeuch, can't open \"%s\"\n", FILTER_NAME);
        exit(EXIT_FAILURE);
    }
    FilterData_Length = 0;
    while(fscanf(in, "%d", &FilterData[FilterData_Length]) != EOF) {
        FilterData_Length += 1;
    }
    fclose(in);

    // What to do?
    if(argc != 3) {
        printf("Yeuch, I need TWO arguments!\n");
        exit(EXIT_FAILURE);
    }
    switch(argv[1][1]) {
        case 'e':
            Action = EXCLUDE;
            break;

        case 'i':
            Action = INCLUDE;
            break;

        default:
            printf("D'ho. Unknown option\n");
            exit(EXIT_FAILURE);
    }

    // Let's work
    char line[MAX_WORD_SIZE +1];
    int num;
    in = fopen(argv[2], "r");
    if(in==NULL) {
        printf("Yeuch, can't open \"%s\"\n", argv[2]);
        exit(EXIT_FAILURE);
    }
    while(fgets(line, MAX_WORD_SIZE, in) != NULL) {
        sscanf(line, "%d", &num);
        if( (InFilter(FilterData, FilterData_Length, num) && Action == INCLUDE) ||
            (!InFilter(FilterData, FilterData_Length, num) && Action == EXCLUDE)    ) {

            printf("%s", line);
        }
    }
    fclose(in);

    return 0;
}

int InFilter(int *f, int f_len, int n)
{
    int flag = 0;
    int t;
    for(t=0; t<f_len; t=t+1) {
        if(f[t] == n) {
            flag = 1;
        }
    }
    return flag;
}
