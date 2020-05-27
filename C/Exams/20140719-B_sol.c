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

#define N 10

int main(int argc, char* argv[]){
    char roof1[N][N], roof2[N][N];
    int i,j;
    int coord_x, coord_y, size;
    int flag_new=0;// flag_alleged=0;
    FILE* DATA1, DATA2;
    
    //read the input command arguments
    coord_x = atoi(argv[1]);
    coord_y = atoi(argv[2]);
    size = atoi(argv[3]);
    
    //read file1
    DATA1 = fopen("Roof1.txt", "r");
    for(i=0; i < (coord_x+size-1); i++){
        fgets(roof1[i], 2*N, DATA1);
    }
    fclose(DATA1);
    
    //read file2
    DATA2 = fopen("Roof2.txt", "r");
    for(i=0; i < (coord_x+size-1); i++){
        fgets(roof2[i], 2*N, DATA2);
    }
    fclose(DATA2);
    
    //search for new buildings
    for(i = coord_x-1; i < (coord_x+size-1); i++){
        for(j = coord_y-1; j < (coord_y+size-1); j++){
            if(roof1[i][j] != roof2[i][j] && roof2[i][j] = '#'){
                flag_new = 1; //new buildings present or absent
                //here indeed we shoud consider the border cases
                if(roof1[i-1][j]=='#' || roof1[i+1][j]=='#' || roof1[i][j-1]=='#' || roof1[i][j+1]=='#'){
                    //flag_alleged = 1;
                    printf("(%d,%d) alleged extention!\n", i+1, j+1);
                }
                else{
                    printf("(%d,%d) new construction!\n", i+1, j+1);
                }                
            }
        }
    }
    
    if(flag_new == 1){
        printf("no new construction!\n");
    }
}
