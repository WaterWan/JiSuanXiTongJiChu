#include<stdio.h>

void Function(int a);

int main()
{
	int m;
	printf("Enter an integer:");
	scanf("%d",&m);
	Function(m);
}

void Function(int a)
{
    if(a/2>0)
        Function(a/2);
    printf("%d",a%2);
         
}
