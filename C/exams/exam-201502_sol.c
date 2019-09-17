/*****************************************************-*-c-*-*\
*  Code sample for Computer Sciences 2015-16                  *
*  See: http://staff.polito.it/giovanni.squillero/dida.php    *
*  (!) 2016, Guoping Xiao                                     *
*                                                             *
*  Copying and distribution of this file, with or without     *
*  modification, are permitted in any medium without royalty  *
*  provided this notice is preserved.                         *
*  ===> THIS FILE IS OFFERED AS-IS, WITHOUT ANY WARRANTY <=== *
\*************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_LEN 9

//program argument: numbers.dat
int main(int argc, char* arg[]){
    int numList[MAX_LEN];
    int i,j;
    FILE* DATA;
    int EQUAL=0;
    int numFilter, SUM;

    //read the argument input and transfer it to integer
    numFilter = atoi(arg[1]);
    //printf("numFilter is:%d\n", numFilter);

    //read the input number list from the file
    DATA = fopen("numbers.dat", "r");
    for(i=0; i < MAX_LEN; i++){
        fscanf(DATA, "%d", &numList[i]);// this read one line per time
        //printf("%d\t", numList[i]);
    }
    //printf("\n");
    fclose(DATA);

    //process the numbers
    DATA = fopen("numbers.dat", "a");
    for(i=0; i < MAX_LEN; i++){
        for (j=0; j < MAX_LEN; j++){
            if(j != i){
                SUM = numList[i] + numList[j];
                if(SUM == numFilter){
                    EQUAL = 1;  //if any sum equal to the filter number, set the flat to 1
                }
            }
        }

        //only when the flag is 0, then output the number
        if(EQUAL == 0){
            fprintf(DATA, "%d\n", numList[i]);
        }
        EQUAL = 0;  //reset the flag for the next number
    }
    fclose(DATA);

    return 0;
}

