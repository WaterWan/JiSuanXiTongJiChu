#include <stdio.h>
double f(double x,int y);

int main(){
	double a,result;
	int b;
	printf("please input two numbers:");
	scanf("%lf%d",&a,&b);
	result=f(a,b);
	printf("the result is %lf",result);
	return 0;
	}
	double f(double x,int y){
		int i; 
		double result=1.0;
	  for (i=y;i>0;i--)
	  result*=x;
	  return result;
	  }
			
