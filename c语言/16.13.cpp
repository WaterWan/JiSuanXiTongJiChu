#include<stdio.h>
#include<string.h>
#define MAX 10


int main()
{
	char string[MAX][MAX];
	int n,i,j;
	int count=0;
	int m=0;
	printf("Enter the number of string(<=%d):\n",MAX);
	scanf("%d",&n);
	printf("Enter your string:\n");
	for(i=0;i<n;i++)
	{
		scanf("%s",string[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(!strcmp(string[i],string[j]))
			{
				count++;
			}
		}
		if(count==0)
		{
			strcpy(string[m],string[i]);
			m++;
		}
		count=0;
	}
	for(i=0;i<m;i++)
	{
		printf("%s\n",string[i]);
	}
}
	

