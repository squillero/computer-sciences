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


int main(int argc, char *argv[])
{
    FILE *fin;
    int i,j;
    int years[50]= {0};
    int year, ref_year, cnt_years=0;
    char artist[30+1];
    char album[50+1];
    char buf[90];

    /*check the number of parameters*/
    if(argc != 4)
    {
        printf("wrong number of parameters!!\n");
        exit(1);
    }

    /*check the option provided by the user*/
    if(argv[2][1]=='p')
    {
        /*get the reference year as an integer*/
        sscanf(argv[3],"%d",&ref_year);

        /*open the file in read mode*/
        fin=fopen(argv[1],"r");
        if(fin==NULL)
        {
            printf("ERROR - file name\n");
            exit(2);
        }

        /*for every line iin the file, get the different values*/
        while(fgets(buf,89,fin)!=NULL)
        {
            sscanf(buf,"%d %s %s",&year,artist,album);
            /*if the album's year is before the refeerenc one*/
            if(year < ref_year)
            {
                /*update the years vector for checking distinct years*/
                years[year-1962]=1;
                /*print the related values*/
                printf("%d %s %s\n",year, artist, album);
            }
        }
        fclose(fin);

        /*count the number of distinct years*/
        for(i=0; i<50; i++)
        {
            if(years[i]==1)
                cnt_years++;
        }
        /*print the number of distinct years*/
        if(cnt_years>0)
        {
            printf("Distinct years: %d\n",cnt_years);
        }
    }
    else
    {
        /*open the file in read mode*/
        fin=fopen(argv[1],"r");
        if(fin==NULL)
        {
            printf("ERROR - file name\n");
            exit(2);
        }

        /*for every line iin the file, get the different values*/
        while(fgets(buf,89,fin)!=NULL)
        {
            sscanf(buf,"%d %s %s",&year,artist,album);
            /*if the album's name matches, print the year and artist*/
            if(strcmp(album,argv[3])==0)
            {
                printf("%d %s\n",year, artist);
            }
        }
        fclose(fin);

    }




    return 0;
}
