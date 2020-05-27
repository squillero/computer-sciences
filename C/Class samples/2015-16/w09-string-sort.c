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
#include <string.h>

#define NUM_FRIENDS 100
#define MAX_NAME_LEN 256

// PROTOS
void PrintBD(void);
int First(int start, int end);
void Swap(int a, int b);

char BigData[NUM_FRIENDS][MAX_NAME_LEN+1] = {
    "Bob",
    "Frank",
    "Hank",
    "Nick",
    "Alice",
    "Albert",
    "Alberto",
    "Albertina",
    "Aldo",
    "Eve",
    "Mary",
    "Lemon",
    "George",
    "Igor",
    "David",
    "Carl",
    ""
};

int main(int argc, char *argv[])
{
    int NumFriends;
    for(NumFriends=0; BigData[NumFriends][0] != '\0'; NumFriends+=1)
        ;

    PrintBD();
    int e, s;
    for(s=0; s<NumFriends; s+=1) {
        e = First(s, NumFriends);
        printf("Element %s %d -> %d\n", BigData[e], e, s);
        Swap(e, s);
    }
    printf("\nSORTED\n");
    PrintBD();

	return EXIT_SUCCESS;
}

void PrintBD(void)
{
    int t;
    for(t=0; BigData[t][0] != '\0'; t+=1) {
        printf("%s\n", BigData[t]);
    }
}

int First(int start, int end)
{
    int t;
    int first = start;
    for(t=start; t<end; t+=1) {
        if(strcmp(BigData[first], BigData[t]) > 0) {
            first = t;
        }
    }
    return first;
}

void Swap(int a, int b)
{
    if(a!=b) {
        char tmp[MAX_NAME_LEN +1];
        strcpy(tmp, BigData[a]);
        strcpy(BigData[a], BigData[b]);
        strcpy(BigData[b], tmp);
    }
}
