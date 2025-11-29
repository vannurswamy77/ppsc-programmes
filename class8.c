// sum of array elements
#include<stdio.h> 
int main(){
	int i,sum=0,n;
	printf("give n value:");
	scanf("%d",&n);
	int arr[n];
	printf("give array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("%d",sum);
	return 0;
	
}