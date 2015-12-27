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
 cout<<averagePtr(x,n)<<endl;
 return 0;
} 

double averagePtr(double *a,int n)
{   
double sum=0;
double temp;
int i;
for(i=0;i<n;i++)
{	
sum=sum+*(a+i);
}
    return sum/n;
}
