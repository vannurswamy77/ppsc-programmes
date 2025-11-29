#include<stdio.h>
#include<string.h>
int main(){
	char name[20];
	scanf("%s",name);
	
	if(strcmp(name,"sunny")==0){
		printf("play cricket");
	}
	else{
		printf("play indoor games");
	}
	return 0;
}