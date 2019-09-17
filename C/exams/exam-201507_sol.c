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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M 100
#define N 8
#define BLANK_PLATE "XXXXXXX"


int main(int argc, char *argv[])
{
    char queue_n[100][8];
    int pointer_n=0;
    char queue_s[100][8];
    int pointer_s=0;
    char queue_e[100][8];
    int pointer_e=0;

    char plate_n[8], plate_s[8], plate_e[8];
    FILE *f_in, *f_out;
    int i,j;


    /*check command line paramentes */
    if (argc!=3)
    {
        printf("ERROR - Wrong parameters\n");
        exit(1);
    }

    /*opne the first file in read mode*/
    f_in=fopen(argv[1],"r");
    if(f_in==NULL)
    {
        printf("ERROR - Cannot open the file: (%s)\n",argv[1]);
        exit(2);
    }

    /*opne the second file in write mode*/
    f_out=fopen(argv[2],"w");
    if(f_out==NULL)
    {
        printf("ERROR - Cannot open the file: (%s)\n",argv[2]);
        exit(2);
    }


    /*read every line in the first file*/


    while(fscanf(f_in,"%s %s %s",plate_n, plate_s, plate_e)!=EOF)
    {


        /*check if the n plate is not blank and add to the queue*/
        if(strcmp(plate_n,BLANK_PLATE)!=0)
        {
            strcpy(queue_n[pointer_n],plate_n);
            pointer_n++;


        }
        /*check if the s plate is not blank and add to the queue*/
        if(strcmp(plate_s,BLANK_PLATE)!=0)
        {
            strcpy(queue_s[pointer_s],plate_s);
            pointer_s++;

        }
        /*check if the e plate is not blank and add to the queue*/
        if(strcmp(plate_e,BLANK_PLATE)!=0)
        {
            strcpy(queue_e[pointer_e],plate_e);
            pointer_e++;


        }


        /*check the longest queue and decide the car that will cross the intersection*/
        if(pointer_n>=pointer_s && pointer_n>=pointer_e && pointer_n >0)
        {
            fprintf(f_out, "%s\n",queue_n[0]);
            /*shrink the queue*/
            for(i=1; i<=pointer_n; i++)
            {
                strcpy(queue_n[i-1], queue_n[i]);
            }
            pointer_n--;


        }
        else if (pointer_s>=pointer_n && pointer_s >= pointer_e && pointer_s >0)
        {
            fprintf(f_out, "%s\n",queue_s[0]);
            /*shrink the queue*/
            for(i=1; i<=pointer_s; i++)
            {
                strcpy(queue_s[i-1], queue_s[i]);
            }
            pointer_s--;
        }
        else if (pointer_e>0)
        {
            fprintf(f_out, "%s\n",queue_e[0]);
            /*shrink the queue*/
            for(i=1; i<=pointer_e; i++)
            {
                strcpy(queue_e[i-1], queue_e[i]);
            }
            pointer_e--;
        }
    }


    while(pointer_n>0 || pointer_s>0 || pointer_e>0)
    {
        /*check the longest queue and decide the car that will cross the intersection*/
        if(pointer_n>=pointer_s && pointer_n>=pointer_e && pointer_n >0)
        {
            fprintf(f_out, "%s\n",queue_n[0]);
            /*shrink the queue*/
            for(i=1; i<=pointer_n; i++)
            {
                strcpy(queue_n[i-1], queue_n[i]);
            }
            pointer_n--;

        }
        else if (pointer_s>=pointer_n && pointer_s >= pointer_e && pointer_s >0)
        {
            fprintf(f_out, "%s\n",queue_s[0]);
            /*shrink the queue*/
            for(i=1; i<=pointer_s; i++)
            {
                strcpy(queue_s[i-1], queue_s[i]);
            }
            pointer_s--;
        }
        else if (pointer_e>0)
        {
            fprintf(f_out, "%s\n",queue_e[0]);
            /*shrink the queue*/
            for(i=1; i<=pointer_e; i++)
            {
                strcpy(queue_e[i-1], queue_e[i]);
            }
            pointer_e--;
        }
    }

    fclose(f_in);
    fclose(f_out);



    return 0;
}
