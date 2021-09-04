/********************************************************************-*-c-*-*\
*               *  Code example for Computer Sciences 2019-20                *
*    #####      *  (!) Giovanni Squillero <giovanni.squillero@polito.it>     *
*   ######      *                                                            *
*   ###   \     *  Copying and distribution of this file, with or without    *
*    ##G  c\    *  modification, are permitted in any medium without royalty *
*    #     _\   *  provided this notice is preserved.                        *
*    |   _/     *  This file is offered as-is, without any warranty.         *
*    |  _/      *                                                            *
*               *  See: http://staff.polito.it/giovanni.squillero/dida.php   *
\****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX_WORD    511

// protos
int is_anagram(char *w1, char *w2);

int main(int argc, char *argv[])
{
    if(argc != 2) {
        fprintf(stderr, "USAGE: %s <word>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    FILE *word_list = fopen("word_list.txt", "r");
    if(word_list == NULL) {
        fprintf(stderr, "Yeuch\n");
        exit(EXIT_FAILURE);
    }

    char word[MAX_WORD+1];
    while(fscanf(word_list, "%s", word) != EOF) {
        if(is_anagram(argv[1], word)) {
            printf("> %s\n", word);
        }
    }
    fclose(word_list);

    return 0;
}

int find(char c, char *str, int *del)
{
    for(int t = 0; str[t] != '\0'; ++t) {
        if(str[t] == c && !del[t]) {
            return t;
        }
    }
    return -1;
}

int is_anagram(char *w1, char *w2)
{
    int anagram = 1;
    int deleted[MAX_WORD] = { 0 };

    for(int t = 0; w1[t] != '\0'; ++t) {
        int pos = find(w1[t], w2, deleted);
        if(pos < 0) {
            anagram = 0;
        } else {
            deleted[pos] = 1;
        }
    }
    for(int t = 0; w2[t] != '\0'; ++t) {
        if(!deleted[t]) {
            anagram = 0;
        }
    }
    return anagram;
}
