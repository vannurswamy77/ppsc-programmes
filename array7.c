#include<stdio.h>
int main(){
	int i,n;
	printf("give n:");
	scanf("%d",&n);
	printf("give elements:");
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	if(n%2==0){
		for(i=1;i<(n/2)+1;i++){
		    printf("%d %d ",arr[i-1],arr[n-i]);	
		}
	}
	if(n%2!=0){
		for(i=1;i<(n/2)+1;i++){
			printf("%d %d ",arr[i-1],arr[n-i]);
		}
		printf("%d 0 ",arr[(n/2)]);
	}
	return 0;
}