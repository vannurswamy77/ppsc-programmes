#include<stdio.h>
int main(){
	int n,sum,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(i%2==0 || i==0){
			sum=sum+arr[i];
		}	
	}
	printf("%d",sum);
	return 0;
	
}