//6.19
#include<stdio.h>
int main(){
	char a[1000];
	for(int i = 0; i < 1000; i++)
		a[i] = 0;
		
	gets(a);
	
	for(int k = 0; k < 1000; k++){
		if(a[k] <= 'z' && a[k] >= 'a')
			a[k] -= 32;
			
	printf("%c", a[k]);
	}
}
