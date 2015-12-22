#include <stdio.h>
int main()
{
char c;
printf("Enter a string:\n");
while((c=getchar())!='\n')
{
 if('a'<=c&&c<='z')
  c=c-32;
  
  printf("%c",c);
}
}
