//reverse of an array
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
	for(i=n-1;i>=0;i--){
		printf("%d  ",arr[i]);
	}
	return 0;
}