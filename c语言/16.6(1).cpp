#include<stdio.h>
#include<string.h>

void StrCat(char * firstStr,char * secondStr);

int main()
{
	char string1[100];
	char string2[50];
	scanf("%s",string1);
	scanf("%s",string2);
	StrCat(string1,string2);
	printf("%s",string1);
}

void StrCat(char * firstStr,char * secondStr)
{
	int i=0,j=0;
	int k;
	
	while(firstStr[i]!='\0')
	{
		i++;
	}
	
	while(secondStr[j]!='0')
	{
		j++;
	}
	
	for(k=0;k<j;k++)
	{
		firstStr[i+k]=secondStr[k];
	}
}

	
	
		

