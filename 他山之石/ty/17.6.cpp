#include <stdio.h>
void Com(int a);
void ToBit(int a);

int main(){
	int a,i=0,j;
	scanf("%d",&a);

	Com(a);

	printf("\n");
}

void Com(int a){
	int i=0,j,b;
	b=a;
	while(a/2>=2){
		i++;
		a/=2;
	}
	for(j=1;j<=31-i;j++)
		printf("0");

	ToBit(b);

}


void ToBit(int a){
	
    if(a/2!=0){
		
		ToBit(a/2);
        printf("%d",a%2);
	}

	else
		printf("1");
}