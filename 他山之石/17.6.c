#include<stdio.h>
int bin[32] = {0};
int cnt = 0;

int binary(int input){
	if(input == 0)
		return 0;
	else{
		bin[cnt++] = input % 2;
		return binary(input / 2);
	}
}

int main(){
	int input;
	while(scanf("%d", &input) != EOF){
		int i;
		if(input >= 0)
			binary(input);
		else{
			input = -input;
			binary(input);
			for(i = 0; i < 32; i++){
				if(bin[i])
					bin[i] = 0;
				else
					bin[i] = 1;
			}
			bin[0]++;
			
			for(i = 0; i < 32; i++){
				if(bin[i] == 2){
					bin[i] = 0;
					bin[i+1]++;
				}
				
			}
		}
			
		
		for(i = 31; i >= 0; i--){
			printf("%d", bin[i]);
			bin[i] = 0;
			if(i == 0){
				printf("\n");
			}
		}
		cnt = 0;
	}
	
	return 0;
} 
