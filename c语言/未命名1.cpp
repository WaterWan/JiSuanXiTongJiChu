#include<stdio.h>

int main()
{
	int n;
	char in,out;
	
	printf("Enter a number which is bigger than( or equal) 1 and smaller than ( or equal)9:");
	scanf("%d",&n);
	
	printf("Enter a string");
	do
	{
		scanf("%c",in);
		if(in>126-n)
			out=in-(94-n);
		else
			out=in-n;
			
		printf("%c",out);
	}while(in!='\n')
	
}
		
	
