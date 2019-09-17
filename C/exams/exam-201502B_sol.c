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

int main(int argc, char* argv[]){
    char ID[16], ID_max[16];
    int grade=0, grade_sum=0, grade_num=0;
    float average=0.0, avg_max=0.0;

    FILE* DATA;

    DATA = fopen(argv[1], "r");
    
    //since the number of lines is unknown
    while(fscanf(DATA, "%s", ID) != EOF){

        //read the grade for the first time
        fscanf(DATA, "%d", &grade);

        //read the other grades of one student
        //and the number of grade for each student is unknown
        while(grade != -1){
            grade_sum += grade;
            grade_num++;
            fscanf(DATA, "%d", &grade);
        }

        //calculate the average grade
        average = (float) grade_sum/grade_num;
        grade_sum = 0;
        grade_num = 0;
        printf("average is %f\n", average);

        //find the max average grade
        if(average > avg_max){
            avg_max = average;
            strcpy(ID_max, ID);
        }
    }

    fclose(DATA);

    printf("The ID of the student with highest average grade is %s\n", ID_max);
    return 0;
}
