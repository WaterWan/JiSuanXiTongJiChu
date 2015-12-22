#include<stdio.h>
#define STRNUM 5
#define STRLENGTH 10

int main(){
	char input[STRNUM][STRLENGTH] = {
		"heeh",
		"AnddnA",
		"aabbccdd",
		"shushu",
		"omega",
	};
	
	char output[STRNUM][STRLENGTH] = {"", "", "", "", "",};
	for(int i = 0; i < STRNUM; i++){
		int outputPtr = 0;
		for(int j = 0; j < STRLENGTH; j++){
			for(int k = 0; k <= STRLENGTH; k++){
				if(input[i][j] != output[i][k]){
					if(j == k){
						output[i][outputPtr] = input[i][j];
						outputPtr++;
						break;
					}	
				}else{
					break;
				}
			}
		}
	}
	
	for(int i = 0; i < STRNUM; i++){
		printf("%s", output[i]);
	}
	
	return 0;
}
