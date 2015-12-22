#include<stdio.h>
#include<stdlib.h>

int Func2(int m,int n);

int main()
{
	int m,n,a;
	scanf("%d%d",&m,&n);
	a=Func2(m,n);
	printf("%d",a);
	system("pause");
}

int Func2(int m,int n)
{
	if(m<n)
	return 0;
	else
	return 1+Func2(m/n,n);
}
