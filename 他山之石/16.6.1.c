#include<stdio.h>

char *StrCat(char*, char*);

int main(){
	char str1[10] = "12345 ";
	char str2[10] = "Wooorld!";
	
	StrCat(str1, str2);
	
	printf("%s", str1);
}

char *StrCat(char* str1, char* str2){
	char *address = str1;
	while(*str1 != '\0'){
		str1++;
	}
	
	
	while(*str2 != '\0'){
		*(str1++) = *(str2++);
	}
	
	*(str1++) = '\0';
	return address;
}
