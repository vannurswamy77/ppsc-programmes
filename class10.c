//maximum and minimum values in array
#include<stdio.h>
int main(){
	int i,n,max=0;
	printf("give n value:");
	scanf("%d",&n);
	int arr[n];
	printf("give array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]>max) max=arr[i];
	}
	int min=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]<min) min=arr[i];
	}
	printf("max=%d  min=%d",max,min);
	return 0;
}