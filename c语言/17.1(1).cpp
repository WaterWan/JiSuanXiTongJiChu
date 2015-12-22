#include<stdio.h>
#include<stdlib.h>

int Func1(int m,int n);

int main()
{
	int m,n,a;
	scanf("%d%d",&m,&n);
	a=Func1(m,n);//calculate (m,n)
	printf("%d",a);
	system("pause");
}

int Func1(int m,int n)
{
	if(m<n)
	{
		m=m+n;
		n=m-n;
		m=m-n;
	}//put the bigger one before the smaller one
	if(n==0)
	return m;
	else
	{
		return (Func1(n,m%n));
	}
	//Õ·×ªÏà³ý·¨ 
}
