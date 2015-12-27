#include <stdio.h>
#include <string.h>
#define MAX 10

int main(){
	char a[MAX][MAX];
	int n,i,j;

	printf("Please enter your n(<=%d):\n",MAX);
	scanf("%d",&n);

	printf("Please enter your strings:\n");
	for(i=0;i<n;i++)
		scanf("%s",a[i]);

	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(!strcmp(a[i],a[j]))
				a[j][0]='\0';
		}
	}

	for(i=1;i<n;i++){
		if(!a[i][0]){
			for(j=i+1;j<n;j++){
				if(a[j][0]){
					strcpy(a[i],a[j]);
					a[j][0]='\0';
					break;
				}
			}
		}
	}

	for(i=0;i<n;i++)
		printf("%s\n",a[i]);
}


	
	