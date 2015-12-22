#include <stdio.h>
int isprime(int x);
int main(){
	int a;
	for (a=1;a<100;a++){
		if (isprime(a)) printf("%d ",a);
		}
		return 0;
		}
	int isprime(int x){
		int i,result=1;
		for (i=2;i<x;i++){
			if ((x%i)==0) {
				result=0;
				break;}}
				if (x==1) result=0;
				return result;
				}
