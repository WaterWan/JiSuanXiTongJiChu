#include<stdio.h>
#include<stdlib.h>
#define MAX_NUMBER 10

void Function(int num[]);

int main()
{
	int num[MAX_NUMBER];
	int i;
	
	for(i=0;i<MAX_NUMBER;i++)
	{
		scanf("%d",&num[i]);
	}
	
	Function(num);
}

void Function(int num[])
{
	int i,j,count;
	count = 0;
	for(i=0;i<MAX_NUMBER;i++)
	{
		for(j=0;j<i;j++)
			if(num[i]==num[j])
				count++;
	
		if(count==0)
			printf("%d ",num[i]);
		
		count=0;
	}
}
