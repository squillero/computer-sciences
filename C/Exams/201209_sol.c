/*****************************************************-*-c-*-*\
*  (!) 2016, Guoping Xiao                                     *
*                                                             *
*  Copying and distribution of this file, with or without     *
*  modification, are permitted in any medium without royalty  *
*  provided this notice is preserved.                         *
*  ===> THIS FILE IS OFFERED AS-IS, WITHOUT ANY WARRANTY <=== *
\*************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
    FILE *fp;
    int i, j, f, counter=0;
    char name[3][31], last_N[3][31], gym_name[31], gym_lastname[31], c[4], Nations[20][4];
    char buf[200];
    float p[3]={0.0, 0.0, 0.0}, gym_marks[5], max, min, s, score_N[20], best_SN=0.0;

    if(argc != 2)
    {
        printf("ERROR - you screwed up the number of parameters\n");
        exit(1);
    }

    fp = fopen(argv[1], "r");

    if (fp == NULL)
    {
        printf("ERROR in opening file\n");
        exit(2);
    }

    for(i=0;i<20;i++)
        score_N[i] = 0.0;

    while(fgets(buf, 128, fp) != NULL)
    {
        sscanf(buf, "%s %s %s %f %f %f %f %f", gym_name, gym_lastname, c, &gym_marks[0], &gym_marks[1], &gym_marks[2], &gym_marks[3], &gym_marks[4]);
        max=0.0;
        min=10.0;
        s=0.0;
        for(i=0;i<5;i++)
        {
            if(gym_marks[i] >= max)
                max = gym_marks[i];
            if(gym_marks[i] <= min)
                min = gym_marks[i];
            s += gym_marks[i];
        }
        s = s - min - max;
        j = 0;
        f = 0;

        if(s>p[0]){
            p[2] = p[1];
            p[1] = p[0];
            p[0] = s;
            strcpy(name[2],name[1]);
            strcpy(name[1],name[0]);
            strcpy(name[0],gym_name);
            strcpy(last_N[2],last_N[1]);
            strcpy(last_N[1],last_N[0]);
            strcpy(last_N[0],gym_lastname);
        }
        else if(s>p[1]){
            p[2] = p[1];
            p[1] = s;
            strcpy(name[2],name[1]);
            strcpy(name[1],gym_name);
            strcpy(last_N[2],last_N[1]);
            strcpy(last_N[1],gym_lastname);
        }
        else if (s>p[2]){
            p[2] = s;
            strcpy(name[2],gym_name);
            strcpy(last_N[2],gym_lastname);
        }


        f = 0;
        j = 0;
        while(j<20 && f==0)
        {
            if(strcmp(Nations[j], c)==0)
            {
                score_N[j] += s;
                f = 1;
            }
            j++;
        }
        if(f == 0)
        {
            strcpy(Nations[counter], c);
            score_N[counter] += s;
            counter++;
        }
    }

    for(i=0;i<20;i++)
        if(score_N[i]>=best_SN)
        {
            best_SN = score_N[i];
            j = i;
        }
    printf("Nation with best score: %s - total score: %.1f\n\n", Nations[j], best_SN);


    for(i=0;i<3;i++)
        printf("%d: %s %s - Score: %.1f\n", i+1, name[i], last_N[i], p[i]);

    fclose(fp);

    return 0;
}
