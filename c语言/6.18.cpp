#include <stdio.h>
int  main()
{
char c;
printf("Enter a string:\n");
while((c=getchar())!='\n')
{
 if(c!=' ')
  putchar(c);
}
}
