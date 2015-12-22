#include<stdio.h>
#define ROW 2
#define COL 3

int* transpose(int [][COL], int [][ROW], int, int);

int main(){
	int a[ROW][COL] = {
	{1, 2, 3, },
	{4, 5, 6, },
	};
	
	int b[COL][ROW];
	
	transpose(a, b, ROW, COL);
	
	for(int i = 0; i < ROW*COL; i++){
		printf("%d", *(*b+i));
		if(i != ROW*COL)
			printf(" ");
	}
}

int* transpose(int a[][COL], int b[][ROW], int row, int col){
	int* address = b;
	for(int i = 0; i < ROW; i++){
		for(int j = 0; j < COL; j++){
			b[j][i] = a[i][j];
		}
	}
	return address;
}
