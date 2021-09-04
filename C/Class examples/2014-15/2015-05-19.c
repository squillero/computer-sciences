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

#define MAX_LEN 1024

int main(int argc, char *argv[])
{
    int array[MAX_LEN];
    int minRep;

    if(argc != 2) {
        printf("Yeuch!\n");
        exit(EXIT_FAILURE);
    }
    sscanf(argv[1], "%d", &minRep);

    int arrayLen = 0;
    while( scanf("%d", &array[arrayLen]) != EOF) {
        ++arrayLen;
    }

    int pos;
    int num;

    pos = 0;
    while(pos < arrayLen) {
        num = 0;
        while(pos+num < arrayLen && array[pos+num]==array[pos]) {
            ++num;
        }
        if(num < minRep) {
            int t;
            for(t=0; t<num; ++t) {
                printf("%d\n", array[pos]);
            }
        }
        pos += num;
    }

    return EXIT_SUCCESS;
}
