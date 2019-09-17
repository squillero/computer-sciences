/*-**********************************************************************-*\
*             * CLASS SAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)             *
*   #####     * (!) 2017, Giovanni Squillero <squillero@polito.it>         *
*  ######     *                                                            *
*  ###   \    * Copying and distributing this file, either with or without *
*   ##G  c\   * modification, is permitted in any medium without royalty,  *
*   #     _\  * provided that this 10-line comment is preserved.           *
*   |  _/     *                                                            *
*             * ===> THIS FILE IS OFFERED AS-IS, WITHOUT ANY WARRANTY <=== *
\*-**********************************************************************-*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LENGTH	35

int is_compatible(char *pattern, char *word);

int main(int argc, char *argv[])
{
	char pattern[MAX_WORD_LENGTH +1];

	// check commandline
	if(argc != 3) {
		fprintf(stderr, "USAGE: %s dict_file pattern\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	strcpy(pattern, argv[2]);

	// Read & check dict
	FILE *dict = fopen(argv[1], "r");
	if(dict == NULL) {
		fprintf(stderr, "ERROR: Can't open dictionary file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	char word[MAX_WORD_LENGTH +1];
	char best_word[MAX_WORD_LENGTH +1] = "";
	int num_alternatives = 0;
	while(fscanf(dict, "%s", word) != EOF) {
		if(is_compatible(pattern, word)) {
			num_alternatives += 1;
			if(best_word[0] == '\0' || strcmp(best_word, word) > 0) {
				strcpy(best_word, word);
			}
		}
	}
	fclose(dict);
	printf("%s - %d combinazioni\n", best_word, num_alternatives);

	// Check pattern
	return EXIT_SUCCESS;
}

int is_compatible(char *pattern, char *word)
{
	int flag = 1;
	if(strlen(pattern) != strlen(word)) {
		flag = 0;
	}
	for(int t = 0; flag != 0 && pattern[t] != '\0'; ++t) {
		if(pattern[t] != word[t] && pattern[t] != '_') {
			flag = 0;
		}
	}
	return flag;
}