#include<stdio.h>
int main()
{
	int g=0,i,n;
	int a[30];
	printf("give n value:\n");
	scanf("%d",&n);
	printf("give array values");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++){
		g=(a[i]>g)?a[i]:g;
	}
	printf("%d",g);
	return 0;
}