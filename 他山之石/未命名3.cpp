#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	int i=0;
	
	for(x=1;x<=5;x++)
	for(z=5;z<=6;z++)
	for(y=x+1;y<=5&&y<z;y++)
	
	{
		cout<<x<<"   "<<y<<"   "<<z<<endl;
		i++;
	}
	cout<<i;
}
