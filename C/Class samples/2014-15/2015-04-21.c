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

#define DIM 10

void PrintArray(int v[]);
void Init(int v[]);
int SeekValue(int v[], int val);

int SeekValue2(int in[], int val, int out[]);

int main()
{
    int array[DIM];
    int v;

    PrintArray(array);
    scanf("%d", &v);
    if( SeekValue(array, v) != -1 ) {
        printf("Whoa!\n");
    }

    return EXIT_SUCCESS;
}

int SeekValue(int v[], int val)
{
    int t;

    for(t=0; t<DIM; ++t) {
        if(v[t] == val) {
            return t;
        }
    }
    return -1;
}

void PrintArray(int v[])
{
    int t;
    for(t=0; t<DIM; ++t) {
        printf(" %d", v[t]);
    }
    printf("\n");
    v = 0;
}

void Init(int v[])
{
    int t;
    printf("Initiliazing array @%p\n", v);
    for(t=0; t<DIM; ++t) {
        v[t] = 0;
    }
}
