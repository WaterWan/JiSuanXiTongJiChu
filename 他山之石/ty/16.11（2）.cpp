#include <stdio.h>
#define MAX 10
void swap(int a[MAX][MAX],int b[MAX][MAX]);

int main(){
	int i,j;
	int a[MAX][MAX]={{3,2,1,4},{3,5,4,7},{6,5,5,4}};
	int b[MAX][MAX];
	swap(a,b);
	
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++)
			printf("%d",b[i][j]);
		printf("\n");
	}
}


void swap(int a[MAX][MAX],int b[MAX][MAX]){
	int i,j;
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++)
			b[j][i]=a[i][j];
	}
}