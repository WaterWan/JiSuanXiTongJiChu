#include<stdio.h>
#define ROW 3
#define COLUMN 2

int* Swap(int a[][COLUMN],int b[][ROW],int row,int column);

int main()
{
	int matrix[ROW][COLUMN]={1,2,3,4,5,6};
	int matrixSwap[COLUMN][ROW]={0,0,0,0,0,0};
	int i,j;
	
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	*Swap(matrix,matrixSwap,ROW,COLUMN);
	for(j=0;j<COLUMN;j++)
	{
		for(i=0;i<ROW;i++)
		{
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	
}

int *Swap(int a[][COLUMN],int b[][ROW],int row,int column)
{
	int i,j;
	
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			b[j][i]=a[i][j];
		}
	}
}

	
