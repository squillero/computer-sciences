/*****************************************************-*-c-*-*\
*  Code sample for Computer Sciences 2015-16                  *
*  (!) Guoping Xiao                                           *
*                                                             *
*  Copying and distribution of this file, with or without     *
*  modification, are permitted in any medium without royalty  *
*  provided this notice is preserved.                         *
*  This file is offered as-is, without any warranty.          *
*                                                             *
*  See: http://staff.polito.it/giovanni.squillero/dida.php    *
\*************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(){
	int input[N];
	int max=0, second_max=0;
	int max_p=0;
	int i=0;
	int input1[N-1];
	
	printf("please input 10 numbers:\n");
	for(i = 0; i < N; i++){
		scanf("%d", &input[i]);
	}
	max = input[0];
	max_p = 0;
	for(i=1; i< N; i++){
		if(max < input[i]){
			max = input[i];
			max_p = i;
		}
	}
	
	//delete the max element from the array
	for(i=0; i < max_p; i++){
		input1[i] = input[i];
	}
	
	for(i = max_p; i < N-1; i++){
		input1[i] = input[i+1];
	}
	
	//find the second max 
	second_max = input1[0];
	for(i = 0; i < N-1; i++){
		if(second_max < input1[i]){
			second_max = input1[i];
		}
	}
	
	printf("the max is %d, and the second max is %d.\n", max, second_max);
	
	return 0;
	
}