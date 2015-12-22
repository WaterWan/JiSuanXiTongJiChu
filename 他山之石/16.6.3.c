#include<stdio.h>
#define ARRMAX 10

char* StrReverse(char*);

int main(){
	char firstStr[ARRMAX] = "Hello";
	
	StrReverse(firstStr);
	
	printf("%s", firstStr);
	
	return 0;
}

char* StrReverse(char* firstStr){
	int length = 0;
	char* firstStrHead = firstStr;
	char head = *firstStr;
	while(*firstStr != '\0'){
		firstStr++;
		length++;
	}
	
	char *buffStr = (char*)malloc(sizeof(char)*ARRMAX);
	char* buffStrHead = buffStr;
	while(*firstStr != head){
		*(buffStr++) = *(firstStr--);
	}
	*buffStr = '\0';
	
	buffStr = buffStrHead;
	while(*buffStr != '\0'){
		*(firstStr++) = *(buffStr++);
	}
	
	return firstStrHead;
}
