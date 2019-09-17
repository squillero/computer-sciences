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
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_LEN 20
// the command line arguments is "Exam20150622B1-text.dat which vehicle"
int main(int argc, char *argv[]){

    int i=0, j=0;
    FILE* text;
    //int read = 0, read_insensitive = 0;
    char input[30], input_p[30];
    char argv1_lower[30], argv2_lower[30];
    int match1 = 0, match2 = 0, match_count = 0;

    if(argc != 4){
        printf("the number of arguments is not correct.\n");
        return 1;
    }

    //turn the two object words into all lower case
    while(argv[2][i] != '\0'){
        argv1_lower[i] = tolower(argv[2][i]);
        i++;
    }
    argv1_lower[i] = '\0';

    i=0;
    while(argv[3][i] != '\0'){
        argv2_lower[i] = tolower(argv[3][i]);
        i++;
    }
    argv2_lower[i] = '\0';
    i=0;

    text = fopen(argv[1], "r");

    while(fscanf(text, "%s", input) != EOF){    //every time read out a word
        i = 0;
        j = 0;

        //turn the word read out from file into all lower case
        while(input[i] != '\0'){
            if(isalnum(input[i]) != 0){
                input_p[j] = tolower(input[i]);
                j++;
            }
            i++;
        }
        input_p[j] = '\0';

        //compare the consecutive words to check whether match the objects
        if(strcmp(input_p, argv1_lower) == 0 && match1 == 0){
            match1 = 1;
        }
        else if(strcmp(input_p, argv2_lower) == 0 && match2 == 0){
            match2 = 1;
        }
        else{
            match1 = 0;
            match2 = 0;
        }

        if(match1 == 1 && match2 == 1){
            match_count++;
        }
    }
    fclose(text);

    printf("the words \"%s\" and \"%s\" appear consecutively in the text(%d times).\n", argv[2], argv[3], match_count);

    return 0;
}


