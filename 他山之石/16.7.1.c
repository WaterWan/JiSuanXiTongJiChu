#include<stdio.h>
int main(){
	int a = -1643315;
	int b = a;
	int digit = 0;
	int i;
	
	do{				//ËãÎ»Êı 
		b /= 10;
		digit++;
	}while(b != 0);
	
	b = a;
	char num[digit+5];
	
	if(a < 0){
		num[0] = '-';
		b *= -1;
		for(i = 1; i <= digit; i++){
			num[digit - i + 1] = b % 10 + 48;
			b /= 10;
		}
	}else{
		for(i = 0; i < digit; i++){
			num[digit - i - 1] = b % 10 + 48;
			b /= 10;
		}
	}
	
	num[i] = '\0';
	printf("%s", num);
} 
