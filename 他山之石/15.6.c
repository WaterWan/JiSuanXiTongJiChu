#include <stdio.h>
char a[10][4]={{""},{""},{"abc"},{"def"},{"ghi"},{"jkl"},{"mno"},{"pqrs"},{"tuv"},{"wxyz"}};
int b[10]={1,1,3,3,3,3,3,4,3,4};
void shuchu(int x,int y);
int main(){
	int x,y;
	printf("please input two numbers");
	scanf("%d %d",&x,&y);
	shuchu(x,y);
	return 0;
	}
	void shuchu(int x,int y){
		int i,j;
		for (i=0;i<b[x];i++)
			for (j=0;j<b[y];j++)
				printf("%c%c ",a[x][i],a[y][j]);
				}
