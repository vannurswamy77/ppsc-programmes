#include<stdio.h>
int main(){
	int i,n,a,b,sum1=0,temp;
	printf("give no of elememnts:");
	scanf("%d",&n);
	int arr[n];
	printf("give elememts:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("give a,b values:");
	scanf("%d%d",&a,&b);
	if(a>b){
	temp=a;
	a=b;
	b=temp;	
	}
	for(i=0;i<n;i++){
		if(arr[i]>=a && arr[i]<=b){
		 	
		}
		else sum1=sum1+arr[i] ;
		   
    }
    printf("%d",sum1);
    return 0;
	
}