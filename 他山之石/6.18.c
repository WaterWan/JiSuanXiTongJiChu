//6.18
#include<stdio.h>
int main(){
	char input[1000];
	for(int k = 0; k < 1000; k++)
		input[k] = 0;
	
	printf("Please input a sentence which is less than 1000 characters: \n");
	gets(input);
	
	for(int i = 0; i < 1000; i++){
		if(input[i] != ' ')
			printf("%c", input[i]);
	}
	
	return 0;
}
