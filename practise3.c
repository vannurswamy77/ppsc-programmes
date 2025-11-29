#include<stdio.h>
int main(){
	int sum=0,i,n;
	scanf("%d",&n);
	for(i=1;i<=n/2;i++){
		if(n%i==0) sum+=i;
	}
	printf("%d",sum);
	return 0;
}