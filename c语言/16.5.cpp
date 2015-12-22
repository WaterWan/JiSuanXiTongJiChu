#include<stdio.h>
int main(){
	char input[20];
	int n;
	scanf("%s %d", input, &n);
	
	int i = 0;
	while(input[i] != '\0'){
		if(input[i] > 126 - n)
			input[i] -= 94 - n;
		else
			input[i] += n;
	i++;
	}
	
	printf("%s", input);
}
