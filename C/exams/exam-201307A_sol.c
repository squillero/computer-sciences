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

#define LENGTH 100
//program argument: 20130705_serialA.txt 20130705_filter.txt
int main(int argc, char* arg[]){

    //int LENGTH = 100;
    char DATA[2*LENGTH];
    char FILTER[LENGTH][LENGTH];
    char NAME[LENGTH], SURNAME[LENGTH];
    char filter_NAME[LENGTH][LENGTH], filter_SURNAME[LENGTH][LENGTH];
    int  PRESENCE;
    FILE *file1, *file2;
    int i,j,y;
    int num_filter = 0;
    int exist = 0;
    int min=100000, max=0;
    char min_NAME[LENGTH], min_SURNAME[LENGTH], max_NAME[LENGTH], max_SURNAME[LENGTH];

    if (argc != 2){
        printf("Error: number of argument incorrect!\n");
        exit(1);
    }

    //read the serialA data in line by line
    //since the number of players is unknown, it can not be read in advance
    /*
    file1 = fopen(arg[1], "r");
    if (file1 == NULL){
        printf("Error opening a file!\n");
        exit(1);
    }
    else{
        i = 0;
        while (fgets(DATA[i], LENGTH, file1)!= NULL){
            i++;
        }
    }
    num_player = i;
    fclose(file1);
    */

    //read filter
    file2 = fopen("20130705_filter.txt", "r");
    i = 0;
    while(fgets(FILTER[i], LENGTH, file2)!= NULL){
        i++;
    }
    num_filter = i;
    fclose(file2);

    //extract the info of player
    /*
    for(x=0; x<num_player; x++){
        sscanf(DATA[x], "%s %s %d %*f %*s", NAME[x], SURNAME[x], &PRESENCE[x]);
    }
    */

    //extract the filters
    for(y=0; y<num_filter; y++){
        sscanf(FILTER[y], "%s %s", filter_NAME[y], filter_SURNAME[y]);
        //printf("%s %s\n", filter_NAME[y], filter_SURNAME[y]);
    }

	file1 = fopen(arg[1], "r");
	i = 0;
	//read the player info one by one
    while(fgets(DATA, LENGTH, file1)!= NULL){
        //extract the player info
        sscanf(DATA, "%s %s %d %*f %*s", NAME, SURNAME, &PRESENCE);

        //compare the player name and surname with filter list
        for (j=0; j < num_filter; j++){
        	//here you can not use '==' to compare strings
            if((strcmp(NAME,filter_NAME[j])) ==0 && (strcmp(SURNAME,filter_SURNAME[j])) == 0){
                exist = 1;
            }
        }

        //output the player info not exist in the filter list
        //and also try to find the minimum and maximum presence player
        if(exist == 0){
            printf("%s", DATA);

            //find the player with minimum presences
            if (PRESENCE < min){
                min = PRESENCE;
                strcpy(min_NAME, NAME);
                strcpy(min_SURNAME, SURNAME);
            }

            //find the player with maximum presence
            if (PRESENCE > max){
                max = PRESENCE;
                strcpy(max_NAME, NAME);
                strcpy(max_SURNAME, SURNAME);
            }
        }

        exist = 0;
        i++;
    }
    fclose(file1);

    printf("\n");
    printf("Presence min: %d %s %s\n", min, min_NAME, min_SURNAME);
    printf("Presence max: %d %s %s\n", max, max_NAME, max_SURNAME);

    return 0;
}


