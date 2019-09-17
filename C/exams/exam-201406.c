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

#define NUM 7

int main(int argc, char* argv[]){
    float floor[NUM][NUM];
    int spot_x=0, spot_y=0;
    int i,j, TL_x, TL_y, BR_x, BR_y;
    float max=0.0;
    int max_x=0, max_y=0;
    FILE* coordinate;

    //first initiate the spotlight floor
    for(i = 0; i < NUM; i++){
        for(j = 0; j < NUM; j++){
            floor[i][j] = 0.0;
        }
    }

    coordinate = fopen(argv[1], "r");

    while(fscanf(coordinate, "%d %d", &spot_x, &spot_y) != EOF){

        //accumulate the spotlight intensity
        // the first round: add 0.2 to every point
        TL_x = (spot_x-2) > 0 ? (spot_x-2) : 0;
        TL_y = (spot_y-2) > 0 ? (spot_y-2) : 0;
        BR_x = (spot_x + 2) < NUM-1 ? (spot_x + 2) : NUM-1;
        BR_y = (spot_y + 2) < NUM-1 ? (spot_y + 2) : NUM-1;
        for(i=TL_x; i<=BR_x; i++){
            for (j=TL_y; j<=BR_y; j++){
                floor[i][j] += 0.2;
            }
        }

        // the second round: add 0.3 to every point
        TL_x = (spot_x-1) > 0 ? (spot_x-1) : 0;
        TL_y = (spot_y-1) > 0 ? (spot_y-1) : 0;
        BR_x = (spot_x + 1) < NUM-1 ? (spot_x + 1) : NUM-1;
        BR_y = (spot_y + 1) < NUM-1 ? (spot_y + 1) : NUM-1;
        for(i=TL_x; i<=BR_x; i++){
            for (j=TL_y; j<=BR_y; j++){
                floor[i][j] += 0.3;
            }
        }

        //the third round: add (x,y) with 0.5
        floor[spot_x][spot_y] += 0.5;
    }

    fclose(coordinate);

    // find the lightest point
    for(i=0; i<NUM; i++){
        for(j=0; j<NUM; j++){
        //print the floor out
        printf("%f\t", floor[i][j]);
            if (floor[i][j] > max){
                max = floor[i][j];
                max_x = i;
                max_y = j;
            }
        }
        printf("\n");
    }

    printf("Coordinates of the most bright tile: (%d, %d)\n", max_x, max_y);

    return 0;
}
