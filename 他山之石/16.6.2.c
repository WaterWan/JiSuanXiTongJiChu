#include<stdio.h>

char *StrCpy(char*, char*);

int main(){
	char str1[10] = "12345 ";
	char str2[10] = "Wo!";
	
	StrCpy(str1, str2);
	
	printf("%s", str1);
}

char *StrCpy(char* str1, char* str2){
	char *address = str1;
	while(*str2 != '\0'){
		*(str1++) = *(str2++);
	}
	
	*(str1++) = '\0';
	return address;
}
