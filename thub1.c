#include<stdio.h>
int main(){
	
	int n,sum=0;
	float avg;
	printf("give number of elements in give array:");
	scanf("%d",&n);
	int arr[n];
	printf("give elements:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
	}
	avg=sum/n;
	printf("avg of array elements is %.2f",avg);
	return 0;
	
}