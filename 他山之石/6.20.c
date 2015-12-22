#include<stdio.h>
#include<string.h>
int main(){
	int n;
	int digit[32];
	memset(digit, 0, sizeof(digit));
	int k = 2;
	scanf("%d", &n);
	
	for(int i = 0; i < 32; i++){
		if(n % k){
			digit[i] = n % k;
		}
		n /= 2;
	}
	
	for(int j = 31; j >= 0; j--)
		printf("%d", digit[j]);
}
	

