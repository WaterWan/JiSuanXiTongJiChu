#include <stdio.h>
#include <math.h>
double f(double x,double y);

int main(){
	double a,result=1.0;

	printf("please input a number:");
	scanf("%lf",&a);
while (fabs(result*result-a)>1e-9)

	result=f(a,result);
	
	printf("the result is %lf",result);
	return 0;
	}
	double f(double x,double y){
		 
	 	 y=1.0/2.0*(y+x/y);
	 	 
	 	 return y;
	  }
			
