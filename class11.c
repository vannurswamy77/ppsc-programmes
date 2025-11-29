//change the array element with new value
#include<stdio.h>
int main(){
	int i,n;
	printf("give n value:");
	scanf("%d",&n);
	int arr[n];
	printf("give array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int index,new;
	printf("give index and new values:");
	scanf("%d%d",&index,&new);
	arr[index]=new;
	
	for(i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
	return 0;
}
	