/*****************************************************-*-c-*-*\
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

#define ROWS 10
#define COLUMNS 40
//program argument: Exam20130719_map.dat
int main(int argc, char* arg[]){

    char map[ROWS+1][COLUMNS+1];
    FILE *file;
    int i,j,x,y, tmp;
    int m=0, n=0;
    int map_top, map_bottom, map_left, map_right;
    int SeaToIs[4], closest, closest_i;
    //char direction[4][10] = { "up", "down","left", "right"};
    int x_org, y_org;

    if (argc != 2){
        printf("Error: number of argument incorrect!\n");
        exit(1);
    }


    //read the map
    file = fopen(arg[1], "r");
    if (file == NULL){
        printf("Error opening a file!\n");
        exit(1);
    }
    else{
        for(i = 0; i < ROWS; i++){
            fgets(map[i], 2*COLUMNS, file); //the number of value MUST be larger that the content in the line
        /*
            if (fgets(map[i], COLUMNS, file) == NULL){
                printf("error read the map!\n");
                exit(1);
            }
        */
        }
    }
    fclose(file);

//just print out the content of the file
    for(i=0; i < ROWS; i++){
        for (j=0; j < COLUMNS; j++){
            printf("%c",map[i][j]);
        }
        printf("\n");
    }


    while(1){
        printf("please input the coordinate (x y):\n");
        scanf("%d%d", &x, &y);
        if (x == -1 && y == -1){
            printf("coordinate error, program terminated!\n");
            return 0;
        }
        else if (x < 0 || x > ROWS || y < 0 || y > COLUMNS){
            printf("the point is outside the map. Input again.\n");
        }
        else {
            if (map[x][y] == '='){
                printf("the point is in the sea.\n");
                //store the original coordinate
                x_org = x;
                y_org = y;

                //check top
                tmp = x;
                SeaToIs[0] = 100;
                while(x>0){
                    if(map[x][y] == '*'){
                        SeaToIs[0] = tmp-x;
                        break;
                    }
                    x--;
                }

                //check below
                x = x_org;
                y = y_org;
                SeaToIs[1] = 100;
                tmp = x;
                while(x<(ROWS-1)){
                    if(map[x][y] == '*'){
                        SeaToIs[1] = x-tmp;
                        break;
                    }
                    x++;
                }

                //check left
                x = x_org;
                y = y_org;
                SeaToIs[2] =  100;
                tmp = y;
                while(y>0){
                    if(map[x][y] == '*'){
                        SeaToIs[2] = tmp-y;
                        break;
                    }
                    y--;
                }

                //check right
                x = x_org;
                y = y_org;
                SeaToIs[3] = 100;
                tmp = y;
                while(y<(COLUMNS-1)){
                    if(map[x][y] == '*'){
                        SeaToIs[3] = y-tmp;
                        break;
                    }
                    y++;
                }

                printf("the distances of four direction are:\n");
                closest = SeaToIs[0];
                closest_i = 0;
                printf("%d\t", SeaToIs[0]);
                for(i=1; i<4; i++){
                    printf("%d\t", SeaToIs[i]);
                    if(SeaToIs[i] < closest){
                        closest=SeaToIs[i];
                        closest_i=i;
                    }
                }

                printf("\n");

                if(closest == 100){
                    printf("It is not possible to reach an island.\n");
                }
                else{
                    //output way#1
                    //printf("The nearest island is in the %s direction.\n", direction[closest_i]);

                    //output way#2
                    if (closest_i==0){
                        printf("The nearest island is in the up direction.\n");
                    }
                    else if(closest_i==1){
                        printf("The nearest island is in the down direction.\n");
                    }
                    else if(closest_i==2){
                        printf("The nearest island is in the left direction.\n");
                    }
                    else if(closest_i==3){
                        printf("The nearest island is in the right direction.\n");
                    }
                }

            }
            else if (map[x][y] == '*'){
                //get the horizontal size of the island
                m = 0;
                n = 0;
                while(map[x-m][y] == '*'){
                    m++;
                }
                map_top = m -1;
                m = 0;

                while(map[x+m][y] == '*'){
                    m++;
                }
                map_bottom = m-1;

                while(map[x][y-n] == '*'){
                    n++;
                }
                map_left = n-1;
                n=0;

                while(map[x][y+n] == '*'){
                    n++;
                }
                map_right = n-1;

                printf("the point is inside the island of %dx%d.\n", map_top+map_bottom+1, map_left+map_right+1);
            }
        }
    }

}

