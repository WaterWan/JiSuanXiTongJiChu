#include<stdio.h>

int main()
{
	int n;
	char a = 'a';
	
	printf("Enter a number n,1<=n<=9\n");
	printf("n=");
	scanf("%d",&n);
	getchar();
	
	do{
		scanf("%c",&a);
		if(a != '\n'){
			if(a>126-n)
			a=a-(94-n);
			else
			a=a+n;
			
			printf("%c",a);
		}
	}while(a!='\n');
}

