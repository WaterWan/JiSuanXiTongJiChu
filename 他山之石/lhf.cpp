#include<iostream>
#define MAX_NUM 5
using namespace std;

double averagePtr(double *a,int n);

int main()
{    
	double x[MAX_NUM];
    double *a; 	
    int i;
 	for(i=0;i<MAX_NUM;i++)
 	{
 		*a=x[i];
 		cin>>*a;
 	}
 	cout<<averagePtr(a,5)<<endl;
 	return 0;
} 

double averagePtr(double *a,int n)
{   
	double x[MAX_NUM];
	double sum=0;
    double ave;
    int i;
	for(i=0;i<n;i++)
	{
		a=&x[i];
		sum+=*a;
	}
		ave=sum/n;
    return ave;
}
