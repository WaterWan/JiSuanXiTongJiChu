#include<iostream>
using namespace std;

double averagePtr(double *a,int n);

int main()
{    double x[100];
     double *a;
 int n;
 cout<<"ÇëÊäÈën:"<<endl;
 cin>>n;
 for(a=x;a<x+n;a++){
 cin>>*a;
}
 cout<<averagePtr(a,n)<<endl;
 return 0;
} 

double averagePtr(double *a,int n)
{   
double sum=0;
double temp;
int i;
    double ave;
for(i=0;i<n;i++)
{
	temp=*a;
sum=sum+temp;
a++;
}
    return sum/n;
}
