#include<stdio.h>
#include<string.h>

void StrCpy(char * firstStr,char * secondStr);

int main()
{
	char string1[100]={};
	char string2[100];
	scanf("%s",string2);
	StrCpy(string1,string2);
	printf("%s",string1);
}

void StrCpy(char * firstStr,char * secondStr)
{
	int j=0;
	int k;
	
	while(secondStr[j]!='0')
	{
		j++;
	}
	
	for(k=0;k<j;k++)
	{
		firstStr[k]=secondStr[k];
	}
}
