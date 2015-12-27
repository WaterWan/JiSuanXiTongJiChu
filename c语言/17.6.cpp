#include<stdio.h>

void Function(int a,int b);

int main()
{
	int a;
	int b=31;
	printf("Enter a number:");
	scanf("%d",&a);
	Function(a,b);
}

void Function(int a,int b)
{
	if(b)
	{
		b--;
		Function(a/2,b);
	}
	printf("%d",a%2);
}
