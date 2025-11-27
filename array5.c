#include<stdio.h>
int main(){
	int n,i,re=0;
	float sum,avg;

	printf("give no of elements\n");
	scanf("%d",&n);
	int arr[n];
	printf("give elements");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		sum=sum+arr[i];
	}
	avg=sum/n;
	for(i=0;i<n;i++){
		if(avg>=arr[i]) re++;
	}
	printf("%d",re);
	return 0;
}