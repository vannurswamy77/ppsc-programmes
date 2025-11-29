#include<stdio.h>
#include<string.h>
int main(){
	char a[30]="cse",b[30]="ADITYA";

	printf("string length %d\n",strlen(a));
	printf("string reverse %s\n",strrev(a));
	printf("string in upper case %s\n",strupr(a));
	printf("string in lower case %s\n",strlwr(b));
	printf("string copy %s\n",strcpy(a,b));
	printf("string concat %s\n",strcat(a,b));
	printf("string compare %d",strcmp(a,b));
	return 0;
}