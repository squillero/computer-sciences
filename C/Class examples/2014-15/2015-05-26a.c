/********************************************************************-*-c-*-*\
*               *  Class examples for Computer Sciences 2014-15              *
*    #####      *  (!) Giovanni Squillero <giovanni.squillero@polito.it>     *
*   ######      *                                                            *
*   ###   \     *  Copying and distribution of this file, with or without    *
*    ##G  c\    *  modification, are permitted in any medium without royalty *
*    #     _\   *  provided this notice is preserved.                        *
*    |   _/     *  This file is offered as-is, without any warranty.         *
*    |  _/      *                                                            *
*               *  See: http://www.cad.polito.it/staff/squillero/dida/       *
\****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 4096

int main(int argc, char *argv[])
{
    if(argc != 2) {
        fprintf(stderr, "Yeuch!\n");
        exit(EXIT_FAILURE);
    }

    int fatalNumber;
    int numbers[MAX_LEN];
    int deleted[MAX_LEN] = { 0 };

    int numbersSize;
    fatalNumber = atoi(argv[1]);
    if(fatalNumber <= 0) {
        fprintf(stderr, "D'ho\n");
        exit(EXIT_FAILURE);
    }

    // INPUT
    FILE *file;
    file = fopen("numbers.dat", "r");
    if(file == NULL) {
        fprintf(stderr, "Can't open file!?\n");
        exit(EXIT_FAILURE);
    }
    numbersSize = 0;
    while(fscanf(file, "%d", &numbers[numbersSize]) != EOF) {
        numbersSize += 1;
    }
    fclose(file);

    int t, u;
    for(t=0; t<numbersSize; ++t) {
        for(u=t+1; u<numbersSize; ++u) {
            if(numbers[t]+numbers[u] == fatalNumber) {
                deleted[t] = 1;
                deleted[u] = 1;
                printf("%d + %d = %d!!!!\n", numbers[t], numbers[u], fatalNumber);
            }
        }
    }


    // OUT
    file = fopen("numbers.dat", "w");
    if(file == NULL) {
        fprintf(stderr, "Can't open file!?\n");
        exit(EXIT_FAILURE);
    }
    int v = 0;
    for(v=0; v<numbersSize; ++v) {
        if(!deleted[v]) {
            fprintf(file, "%d\n", numbers[v]);
        }
    }
    fclose(file);



    return EXIT_SUCCESS;
}
